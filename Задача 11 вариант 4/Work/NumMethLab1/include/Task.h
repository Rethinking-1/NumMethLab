#pragma once

#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
//#define BRED_PREC  %.10f
class Task
{
public:
    std::vector<double> grid;
	std::vector<double> grid_step;
	std::vector<double> num_values_1;
    std::vector<double> true_values_1;/////////////////////////////////
	std::vector<double> d_num_values_1;
	std::vector<double> final_num_values_1;
	std::vector<double> num_values_2;
	std::vector<double> d_num_values_2;
	std::vector<double> final_num_values_2;
	std::vector<int> mult2;
	std::vector<int> div2;
	int mult;
	int div;
	double right_border;
    double eps;//Контроль локальной погрешности
	bool ctrl_local_err;
	int max_steps;
    double m;
    double c;
    double k;
    int n = 0;

    Task(double m = 1.0,double c = 0.15, double k = 2.0, double right_border = 1.0, double initial_value = 10.0,double initial_value_2 = 0.0, double initial_step = 0.01, int max_steps = 1000, bool ctrl_local_err = false, double eps = 1e-8);
    double TrueFunc(double x);
	double Func1(double u2);
	double Func2(double u1, double u2);
	double NumFunc(double v1, double v2, double h);
	double NumFunc2(double v1, double v2, double h);
	double DNumFunc(double v1, double v2, double h);
	double DNumFunc2(double v1, double v2, double h);
	void MethodStep();
	void Run();
	void Print();
};

