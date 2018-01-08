// test1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define STEPD		10.0f

double step1(double x)
{
	x /= STEPD;
	return 1.0f / ((6.0f * 8.033f + (sin(x*3.14159f*2.0f)*(1.0f + 0.129f * 2.0)), 2.0) + pow(cos(x*3.14159*2.0)*(1 + 0.129 * 2.0), 2.0) + pow((-23 + 46 * x / 160.0f), 2.0));
}

double step2(double x)
{
	x /= STEPD;
	return 1.0f / ((6.0f * 8.033f + (sin(x*3.14159f*2.0f)*(1.0f + 0.129f)), 2.0) + pow(cos(x*3.14159*2.0)*(1 + 0.129), 2.0) + pow((-23 + 46 * x / 178.0f), 2.0));
}

int main()
{
	double v1 = 0;
	double v2 = 0;
	double x;

	for (x = 0; x < 160 * STEPD; x += 1.0)
	{
		v1 += step1(x);
	}

	for (x = 0; x < 178 * STEPD; x += 1.0)
	{
		v2 += - step2(x);
	}

	printf("v1,v2=%lf,%lf\r\n", v1, v2);
	system("pause");

    return 0;
}

