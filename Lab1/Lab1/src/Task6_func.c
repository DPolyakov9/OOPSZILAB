#include "math.h"

double x, y, f;

void f_result()

{

	f = ((x - 1)*sqrt(x) - (y - 1)*sqrt(y)) / (sqrt(pow(x, 3)*y) + x * y + pow(x, 2) - x);

}
