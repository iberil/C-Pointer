#include <stdio.h>             //dizinin tek ve cift elemanlarini ayri ayri ekrana bastiran program

int main() {
    int dizi[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int *ptr;

    printf("Dizi: ");
    for (ptr = dizi; ptr < dizi + 15; ptr++) {
        printf("%d ", *ptr);
    }

    printf("\n\nCift sayilar: ");
    for (ptr = dizi; ptr < dizi + 15; ptr++) {
        if (*ptr % 2 == 0) {
            printf("%d ", *ptr);
        }
    }

    printf("\n\nTek sayilar: ");
    for (ptr = dizi; ptr < dizi + 15; ptr++) {
        if (*ptr % 2 != 0) {
            printf("%d ", *ptr);
        }
    }

    return 0;
}

