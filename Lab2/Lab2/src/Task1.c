#include "Header.h"

double task1(int n)

{

	long double summa = 0;

	for (int i = 0; i < n; i++)

	{

		summa += a(i);

	}

	return summa;

}

//2.1.2 while

#include "Header.h"

double task1(int n)

{

	long double summa = 0;

	int i = 0;

	while (i < n)

	{

		summa += a(i);

		i++;

	}

	return summa;

}

//2.1.3 do…while

#include "Header.h"

double task1(int n)

{

	long double summa = 0;

	int i = 0;

	do

	{

		summa += a(i);

		i++;

	} while (i < n);

	return summa;