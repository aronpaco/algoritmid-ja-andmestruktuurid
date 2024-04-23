#include <stdio.h>

main()
{
    int arvud[255];
    int n, arv, summa;
    int mitu = 0;
    float keskmine;
    printf("Mitu arvu soovid massiivi lisada?: ");
    scanf("%d", &n);
    printf("Arv on %d \n", n);

    for (int i = 0; i < n; i++)
    {
        printf("Sisesta arv: ");
        scanf("%d", &arv);
        arvud[i] = arv;
        int massiivi_suurus = i;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arvud[i]);
    }
    printf("\n\n");

    for (int i = 0; i < n; i++)
    {
        if (arvud[i] % 3 == 0)
        {
            mitu = mitu + 1;
            summa += arvud[i];
        }
    }

    if (mitu != 0)
    {
        keskmine = 1.00 * summa / mitu;
        printf("%.2f\n", keskmine);
    }
    else
    {
        printf("Keskmist ei saa leida!\n");
    }

    return 0;
}