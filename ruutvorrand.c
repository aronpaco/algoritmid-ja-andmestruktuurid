#include <stdio.h>
#include <math.h>

// ax2 + bx + c = 0

double a = 2;
double b = 7;
double c = 5;

int main()
{
    double x1 = (0 - b - sqrt(b * b - 4 * a * c)) / (2 * a);
    double x2 = (0 - b + sqrt(b * b - 4 * a * c)) / (2 * a);
    printf("x1 = %f, x2= %f\n", x1, x2);
}