#include <stdio.h>

main()
{
    int arvud[255]; // massiivi loomine
    int arvud1[255];
    int mitu, mitu1, arv;
    int s = 0;
    int m = 0;
    int j = 0;
    float keskmine;
    printf("Mitu arvu soovid massiivi lisada?: ");
    scanf("%d", &mitu);
    // printf("Arv on %d \n", mitu);

    for (int i = 0; i < mitu; i++)
    {
        printf("Sisesta arv: ");
        scanf("%d", &arv);
        arvud[i] = arv;
    }

    for (int i = 0; i < mitu; i++)
    {
        s = s + arvud[i];
        m = m + 1;
    }
    float k = 1.00 * s / m;
    // printf("%.2f", k);

    for (int i = 0; i < mitu; i++)
    {
        if (arvud[i] > k)
        {
            arvud1[j] = arvud[i];
            j += 1;
        }
    }

    printf("Keskmisest %.2f suuremad arvud on: ", k);
    for (int i = 0; i < j; i++)
    {
        printf("%d ", arvud1[i]);
    }

    return 0;
}