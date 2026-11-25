#include <stdio.h>

struct peserta {
    char name[50];
    int age;
    int score;
};

int main(void) {
    int n;
    scanf("%d", &n);

    struct peserta list[10];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", list[i].name, &list[i].age, &list[i].score);
    }

    int top = 0;
    for (int i = 1; i < n; i++) {
        if (list[i].score > list[top].score) {
            top = i;
        }
    }

    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n",
           list[top].name, list[top].score);

    return 0;
}