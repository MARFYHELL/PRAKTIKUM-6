#include <stdio.h>

void Swap(int *a, int *b) {
    int place = *a;
    *a = *b;
    *b = place;
}

int main(void) {
    int andi, budi;
    scanf("%d %d", &andi, &budi);

    printf("Sebelum ditukar: Andi = %d, Budi = %d\n", andi, budi);
    Swap(&andi, &budi);
    printf("Sesudah ditukar: Andi = %d, Budi = %d\n", andi, budi);

    return 0;
}