#include <stdio.h>
#include <math.h>

double kaatet1 = 5;
double kaatet2 = 3;

int main()
{
    double findHypotenuus();
    {
        double hypotenuus = sqrt(kaatet1 * kaatet1 + kaatet2 * kaatet2);
        printf("%f\n", hypotenuus);
    }
}