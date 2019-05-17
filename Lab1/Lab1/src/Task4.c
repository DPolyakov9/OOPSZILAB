#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

#include "math.h"

void f_result();

double x, y, f;

void main()

{

	x = 10; y = 20; f_result();

	printf("x = %f\ny = %f\nf = %f\n\n", x, y, f);

	printf("x = "); scanf("%lf", &x);

	printf("y = "); scanf("%lf", &y);

	f_result(); printf("f = %f", f);

	_getch();

}

void f_result()

{

	f = ((x - 1)*sqrt(x) - (y - 1)*sqrt(y)) / (sqrt(pow(x, 3)*y) + x * y + pow(x, 2) - x);

}
