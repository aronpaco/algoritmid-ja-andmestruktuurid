#include <stdio.h>

double num;
double biggest_num = 0;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("Iteration %d\n", i + 1);
        printf("Enter a number: ");
        scanf("%lf", &num);
        if (num > biggest_num)
        {
            biggest_num = num;
        }
    }
    printf("Biggest number: %f", biggest_num);
    return 0;
}
