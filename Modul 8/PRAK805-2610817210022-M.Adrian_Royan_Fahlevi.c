#include <stdio.h>

struct Dompet {
    char owner[100];
    int balance;
};

void topUp(struct Dompet *data, int amount, char log_line[]) {
    data->balance = data->balance + amount;
    sprintf(log_line, "Top up %d berhasil, saldo = %d", amount, data->balance);
}

void payment(struct Dompet *data, int amount, char log_line[]) {
    if (data->balance >= amount) {
        data->balance = data->balance - amount;
        sprintf(log_line, "Bayar %d berhasil, saldo = %d", amount, data->balance);
    } else {
        sprintf(log_line, "Bayar %d gagal, saldo tidak cukup", amount);
    }
}

int main() {
    struct Dompet data;
    int n, amount;
    char type;
    char result[100][100];

    scanf("%s %d", data.owner, &data.balance);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c %d", &type, &amount);

        if (type == 'T' || type == 't') {
            topUp(&data, amount, result[i]);
        } else if (type == 'B' || type == 'b') {
            payment(&data, amount, result[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s\n", result[i]);
    }

    printf("Saldo akhir %s = %d\n", data.owner, data.balance);

    return 0;
}