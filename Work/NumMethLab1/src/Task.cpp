#include "Task.h"
#include "mainwindow.h"
Task::Task(double m,double c, double k, double right_border, double initial_value, double initial_value_2, double initial_step, int max_steps, bool ctrl_local_err, double eps)
{
    this->m = m;
    this->c = c;
    this->k = k;
    this->ctrl_local_err = ctrl_local_err;
    this->eps = eps;
    this->max_steps = max_steps;
    this->right_border = right_border;
    mult = 0;
    div = 0;
    mult2.push_back(0);
    div2.push_back(0);
    grid.push_back(0);
    grid_step.push_back(initial_step);
    num_values_1.push_back(initial_value);
    d_num_values_1.push_back(initial_value);
    true_values_1.push_back(initial_value);///////////////////////////////////////////////
    final_num_values_1.push_back(initial_value);
    num_values_2.push_back(initial_value_2);
    d_num_values_2.push_back(initial_value_2);
    final_num_values_2.push_back(initial_value_2);
}

double Task::TrueFunc(double x)
{
    return (0*exp(sqrt(c*c-4*k*m)*x/(2*m) - c*x/(2*m)) + 10*exp(-(sqrt(c*c-4*k*m)*x/(2*m) + c*x/(2*m))));
}


double Task::Func1(double u2)
{
    return u2;
}

double Task::Func2(double u1, double u2)
{
    return -(c * u2 + k * u1)/m;
}

double Task::NumFunc(double v1, double v2, double h)
{
const double k1 = Func1(v2);
const double l1 = Func2 (v1,v2);

const double k2 = Func1(v2 + h / 2 * l1);
const double l2 = Func2 (v1 + h / 2 * k1 , v2 + h / 2 * l1);

const double k3 = Func1(v2 + h / 2 * l2);
const double l3 = Func2 (v1 + h / 2 * k2 , v2 + h / 2 * l2);

const double k4 = Func1(v2 + h * l3);
const double l4 = Func2 (v1 + h * k3 , v2 + h * l3);
// либо местами их поменять
return (v1 + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4));
}

/*double Task::NumFunc(double v1, double v2, double h)
{
    const double k1 = Func1(v2);
    const double k2 = Func1(v2 + h / 2 * k1);
    const double k3 = Func1(v2 + h / 2 * k2);
    const double k4 = Func1(v2 + h * k3);

    return (v1 + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4));
}*/
double Task::NumFunc2(double v1, double v2, double h)
{
const double k1 = Func1(v2);
const double l1 = Func2 (v1,v2);

const double k2 = Func1(v2 + h / 2 * l1);
const double l2 = Func2 (v1 + h / 2 * k1 , v2 + h / 2 * l1);

const double k3 = Func1(v2 + h / 2 * l2);
const double l3 = Func2 (v1 + h / 2 * k2 , v2 + h / 2 * l2);

const double k4 = Func1(v2 + h * l3);
const double l4 = Func2 (v1 + h * k3 , v2 + h * l3);

return (v2 + h / 6 * (l1 + 2 * l2 + 2 * l3 + l4));
}


/*double Task::NumFunc2(double v1, double v2, double h)
{
    const double k1 = Func2(v1, v2);
    const double k2 = Func2(v1 + h / 2 * k1, v2 + h / 2 * k1);
    const double k3 = Func2(v1 + h / 2 * k2, v2 + h / 2 * k2);
    const double k4 = Func2(v1 + h* k3, v2 + h * k3);

    return (v2 + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4));

   // const double k1_1 = Func1(v2);
    //const double k1_2 = Func2(v1, v2);

  //  const double k2_1 = Func1(v2 + h / 2 * k1_2);
   // const double k2_2 = Func2(v1 + h / 2 * k1_1, v2 + h / 2 * k1_2);

  /*  const double k3_1 = Func1(v2 + h / 2 * k2_2);
    const double k3_2 = Func2(v1 + h / 2 * k2_1, v2 + h / 2 * k2_2);

   // const double k4_1 = Func1(v2 + h * k3_2);
    const double k4_2 = Func2(v1 + h * k3_1, v2 + h * k3_2);

    return (v2 + h / 6 * (k1_2 + 2 * k2_2 + 2 * k3_2 + k4_2));
}*/



double Task::DNumFunc(double v1, double v2, double h)
{
    const double v1_tmp = NumFunc(v1, v2, h / 2);
    const double v2_tmp = NumFunc2(v1, v2, h / 2);
    return NumFunc(v1_tmp,v2_tmp, h / 2);
}

double Task::DNumFunc2(double v1, double v2, double h)
{
    const double v1_tmp = NumFunc(v1, v2, h / 2);
    const double v2_tmp = NumFunc2(v1, v2, h / 2);
    return NumFunc2(v1_tmp, v2_tmp, h / 2);
}


void Task::MethodStep()
{
    double h = grid_step.back();
    const double v1 = NumFunc(final_num_values_1.back(), final_num_values_2.back(), h);
    const double vD1 = DNumFunc(final_num_values_1.back(), final_num_values_2.back(), h);

    const double v2 = NumFunc2(final_num_values_1.back(), final_num_values_2.back(), h);
    const double vD2 = DNumFunc2(final_num_values_1.back(), final_num_values_2.back(), h);

    double s1 = abs(vD1 - v1) / 15;
    double s2 = abs(vD2 - v2) / 15;
    double s = std::max(s1, s2);

    if (s > eps && ctrl_local_err)
    {
         grid_step.back()/=2;
         div++;
         n--;
    }
    else
    {
        const double x = grid.back() + h;
        const double u = TrueFunc(x);         ///////////////////////////
        if (ctrl_local_err && s < eps / 32)
        {
            h *= 2;
            mult++;
        }

        mult2.push_back(mult);
        div2.push_back(div);
        grid_step.push_back(h);
        grid.push_back(x);
        num_values_1.push_back(v1);
        d_num_values_1.push_back(vD1);
        true_values_1.push_back(u); ///////////////////////////////////////////////
        final_num_values_1.push_back(v1 + 16 * s1);
        num_values_2.push_back(v2);
        d_num_values_2.push_back(vD2);
        final_num_values_2.push_back(v2 + 16 * s2);
    }
}

void Task::Run()
{
    int i = 0;
    while (grid.back() + grid_step.back() <= right_border && n < max_steps)
    {
        MethodStep();
        n++;
        i++;
    }
    //Последний шаг
   /* while(ctrl_local_err && grid.back() + grid_step.back() > right_border && right_border - grid.back()> eps)
    {
        grid_step.back()/=2;
        div++;
    }
    if(ctrl_local_err  &&  right_border - grid.back()>= eps && grid.back() + grid_step.back() <= right_border && i < max_steps)
    {
        MethodStep();
    }*/

    if(ctrl_local_err && grid.back() + grid_step.back() > right_border && right_border - grid.back()> eps)
    {
        while(ctrl_local_err && grid.back() + grid_step.back() > right_border && right_border - grid.back()> eps)
        {
            while(ctrl_local_err && grid.back() + grid_step.back() > right_border && right_border - grid.back()> eps)
            {
                grid_step.back()/=2;
                div++;
            }
            MethodStep();
        }
    }
    //qDebug() << "right_border - grid.back():" << right_border - grid.back();
}

void Task::Print()
{
    unsigned long long N = grid.size();
    for (unsigned int i = 0; i < N; i++)
    {
        std::cout << "Num: (" << grid[i] << ", " << num_values_1[i] << ")"
            << "\th = " << grid_step[i] << "\tv = " << num_values_1[i] << "\tv2 = " << d_num_values_1[i] << "\tv_2 = " << num_values_2[i] << "\tv2_2 = " << d_num_values_2[i]
            << "\nmult2 = " << mult2[i] << ", div2 = " << div2[i]
            << std::endl;
    }
}
