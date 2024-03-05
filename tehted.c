#include <stdio.h>

double num1, num2, tehe, tulemus;

int main()
{
    printf("Kirjuta 1. number: ");
    scanf("%lf", &num1);
    printf("\nKirjuta 2. number: ");
    scanf("%lf", &num2);
    printf("\n0 - liitmine\n1 - lahutamine\n2 - korrutamine\n3 - jagamine:  ");
    scanf("%lf", &tehe);

    if (tehe == 0)
    {
        tulemus = num1 + num2;
    }
    if (tehe == 1)
    {
        tulemus = num1 - num2;
    }
    if (tehe == 2)
    {
        tulemus = num1 * num2;
    }
    if (tehe == 3)
    {
        tulemus = num1 / num2;
    }
    printf("\nTulemus: %f\n", tulemus);
}