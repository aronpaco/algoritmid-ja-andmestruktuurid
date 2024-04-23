/*
 *  Programm joonistuse juurde. Lisatud reanumbrid. Puuduvad include'd.
 *  NB! Sellisel kujul programm ei k�ivitu!!
 */
#include <stdio.h>

main()
{
    int k = 8;
    int *ptr;
    int *ptr1, *ptr2, *ptr3;

    ptr = &k;
    printf("Muutujas k olev arv tema aadressi j�rgi %d\n", *ptr);
    *ptr = 12;
    printf("Muutuja k uuesti: %d\n", k);
    ptr1 = malloc(sizeof(int));
    *ptr1 = 20;
    printf("Muutuja ptr1 poolt viidatavasse kohta pandi %d\n", *ptr1);
    ptr2 = ptr1;
    printf("Viitmuutuja ptr2 kaudu leiame arvu %d.\n", *ptr2);
}
