#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Task 11 var 4");
    ui->tableWidgetMain2->setHorizontalHeaderLabels(QStringList() << "Xn" << "v_n" << "v_2n" << "v_n -v_2n" << "v'_n" << "v'_2n" << "v'_n - v'_2n" << "ОЛП" << "Hn" << "divs" << "pows");
    ui->tableWidgetMain2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->graphMain2Faz->xAxis->setLabel("u(x)");
    ui->graphMain2Faz->yAxis->setLabel("u'(x)");
    ui->graphMain2U1->xAxis->setLabel("x");
    ui->graphMain2U1->yAxis->setLabel("u(x)");
    ui->graphMain2U2->xAxis->setLabel("x");
    ui->graphMain2U2->yAxis->setLabel("u'(x)");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonMain2Run_clicked()
{
    double m = ui->lineEditMain2M->text().toDouble();
    double c = ui->lineEditMain2C->text().toDouble();
    double k = ui->lineEditMain2K->text().toDouble();
    double u1 = ui->lineEditMain2U1->text().toDouble();
    double u2 = ui->lineEditMain2U2->text().toDouble();
    double b = ui->lineEditMain2B->text().toDouble();
    double h0 = ui->lineEditMain2H0->text().toDouble();
    int N = ui->lineEditMain2N->text().toInt();
    double eps = ui->lineEditMain2LP->text().toDouble();
    bool ctl = ui->radioButtonMain2CLP->isChecked();
    Task M(m,c, k, b, u1, u2, h0, N, ctl, eps);
    M.Run();
    ui->graphMain2Faz->clearGraphs();
    QVector<double> x(M.grid.begin(), M.grid.end());
    QVector<double> y1(M.final_num_values_1.begin(), M.final_num_values_1.end());
    QVector<double> y2(M.final_num_values_2.begin(), M.final_num_values_2.end());
    //qDebug() << "u1:\n" << y1 << "\nu2:\n" << y2 << "\nx:\n" << x;
    int j = 0;
    QVector<int> delim;
    delim.push_back(1);
    bool up = std::abs(y1[0]) < std::abs(y1[1]);
    while(j < y1.size()-1)
    {
        if ((y1[j] < y1[j+1] && !up)||(y1[j] > y1[j+1] && up))
        {
            delim.push_back(j+1);
            up = !up;
        }
        j++;
    }
    delim.push_back(j+1);
    //qDebug() << "\nDelim: " << delim << "\n";
    QVector<QVector<double>> y1_parts(delim.size()-1);
    QVector<QVector<double>> y2_parts(delim.size()-1);
    for (int i = 0; i < y1_parts.size(); i++)
    {
        y1_parts[i] = QVector<double>(y1.begin()+delim[i]-1, y1.begin()+delim[i+1]);
        y2_parts[i] = QVector<double>(y2.begin()+delim[i]-1, y2.begin()+delim[i+1]);
       // qDebug() << "\nparts " << i << ":\n" << y1_parts[i];
    }
    for (int i = 0; i < y1_parts.size(); i++)
    {
        ui->graphMain2Faz->addGraph();
        ui->graphMain2Faz->graph(i)->setData(y1_parts[i], y2_parts[i]);
        if (i > 0)
            ui->graphMain2Faz->graph(i)->rescaleAxes(true);
        else
            ui->graphMain2Faz->graph(i)->rescaleAxes();
    }

    ui->graphMain2Faz->replot();

    ui->graphMain2U1->addGraph();
    ui->graphMain2U1->graph(0)->setData(x, y1, true);
    ui->graphMain2U1->graph(0)->rescaleAxes();
    ui->graphMain2U1->replot();

    ui->graphMain2U2->addGraph();
    ui->graphMain2U2->graph(0)->setData(x, y2, true);
    ui->graphMain2U2->graph(0)->rescaleAxes();
    ui->graphMain2U2->replot();

    M.grid_step.pop_back();
    M.grid_step.insert(M.grid_step.begin(), h0);

    ui->tableWidgetMain2->clearContents();
    ui->tableWidgetMain2->setRowCount(0);

    double maxOLP = 0;
    int indMaxStep = 0, indMinStep = 0;
    for (int i = 0; i < M.grid.size(); i++)
    {
        QTableWidgetItem *x = new QTableWidgetItem(QString::number(M.grid[i]));
        QTableWidgetItem *v1 = new QTableWidgetItem(QString::number(M.num_values_1[i]));
        QTableWidgetItem *v1_2 = new QTableWidgetItem(QString::number(M.d_num_values_1[i]));
        QTableWidgetItem *diff1 = new QTableWidgetItem(QString::number(M.num_values_1[i] - M.d_num_values_1[i]));
        QTableWidgetItem *v2 = new QTableWidgetItem(QString::number(M.num_values_2[i]));
        QTableWidgetItem *v2_2 = new QTableWidgetItem(QString::number(M.d_num_values_2[i]));
        QTableWidgetItem *diff2 = new QTableWidgetItem(QString::number(M.num_values_2[i] - M.d_num_values_2[i]));
        double olp1 = std::abs(M.d_num_values_1[i] - M.num_values_1[i]) / 15 * 16;
        double olp2 = std::abs(M.d_num_values_2[i] - M.num_values_2[i]) / 15 * 16;
        double tmp1 = std::max(olp1, olp2);
        if (tmp1 > maxOLP)
            maxOLP = tmp1;
        QTableWidgetItem *OLP = new QTableWidgetItem(QString::number(tmp1));
        double tmp2 = M.grid_step[i];
        if (M.grid_step[indMaxStep] < tmp2)
            indMaxStep = i;
        if (M.grid_step[indMinStep] > tmp2)
            indMinStep = i;
        QTableWidgetItem *h = new QTableWidgetItem(QString::number(M.grid_step[i]));
        int tmp4 = i > 0 ? M.div2[i] - M.div2[i-1] : 0;
        int tmp5 = i > 1 ? M.mult2[i-1] - M.mult2[i-2] : 0;
        QTableWidgetItem *c1 = new QTableWidgetItem(QString::number(tmp4));
        QTableWidgetItem *c2 = new QTableWidgetItem(QString::number(tmp5));
        ui->tableWidgetMain2->insertRow(i);
        ui->tableWidgetMain2->setVerticalHeaderItem(i, new QTableWidgetItem(QString::number(i)));
        ui->tableWidgetMain2->setItem(i, 0, x);
        ui->tableWidgetMain2->setItem(i, 1, v1);
        ui->tableWidgetMain2->setItem(i, 2, v1_2);
        ui->tableWidgetMain2->setItem(i, 3, diff1);
        ui->tableWidgetMain2->setItem(i, 4, v2);
        ui->tableWidgetMain2->setItem(i, 5, v2_2);
        ui->tableWidgetMain2->setItem(i, 6, diff2);
        ui->tableWidgetMain2->setItem(i, 7, OLP);
        ui->tableWidgetMain2->setItem(i, 8, h);
        ui->tableWidgetMain2->setItem(i, 9, c1);
        ui->tableWidgetMain2->setItem(i, 10, c2);
    }

    QString ref =  "\tСправка\nМетод Рунге-Кутта явный порядка p = 4 \nНачальное отклонение груза " + QString::number(M.num_values_1.front()) + "см"
            + "\nЧисло шагов метода: "   + QString::number(M.grid.size()-1)
            + "\nНачальная скорость груза " + QString::number(M.num_values_2.front())
            + "\nНачальное время счёта = 0 сек.\nУсловие остановки счёта = " + QString::number(M.right_border) + " cек."
            + "\nРасстояние до правой границы счёта = "   +
            (QString::number(M.right_border - M.grid.back())) + " cек.";
             //    ((M.right_border - M.grid.back()) < 1.68756e-13)?0: M.right_border - M.grid.back())) + " cек.";
            ref = ref +(ctl? "\nКонтроль модуля локальной погрешности включён\nEps граничный = " +  QString::number(M.eps)
                           : "\nКонтроль модуля локальной погрешности выключен");

            ref+= "\n\nМасса груза = " + QString::number(M.m) + "кг"
            + "\nЖёсткость пружины = " + QString::number(M.k) + " Н с/см^2"
            + "\nКоэффициент демпфирования:" + QString::number(M.c) + "Н/см"

            + "\n\nmax|ОЛП| = " + QString::number(maxOLP)
            + "\nОбщее число удвоений шага: " + QString::number(M.mult)
            + "\nОбщее число делений шага: " + QString::number(M.div)
            + "\nМаксимальный шаг = " + QString::number(M.grid_step[indMaxStep])
            + " при x = " + QString::number(M.grid[indMaxStep])
            + "\nМинимальный шаг = " + QString::number(M.grid_step[indMinStep])
            + " при x = " + QString::number(M.grid[indMinStep]);
    qDebug() << "M.right_border:" << M.right_border << "M.grid.back():" << M.grid.back() << "M.right_border - M.grid.back():" << M.right_border - M.grid.back();
    ui->textBrowserMain2->setText(ref);
}

