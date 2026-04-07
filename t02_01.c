// 12S25037 - Laura Lubis

#include <stdio.h>

typedef struct {
    int jumlahBuku;
    double hargaPerBuku;
    double total;
    double diskon;
} Purchase;

int main(int _argv, char **_argc)
{
    Purchase p = {0, 0.0, 0.0, 0.0};

    if (scanf("%d", &p.jumlahBuku) != 1) {
        return 0;
    }
    if (scanf("%lf", &p.hargaPerBuku) != 1) {
        return 0;
    }

    p.total = p.jumlahBuku * p.hargaPerBuku;

    if (p.total > 500000.0) {
        p.diskon = p.total * 0.15;
    } else if (p.total >= 100000.0) {
        p.diskon = p.total * 0.10;
    } else if (p.total > 50000.0) {
        p.diskon = p.total * 0.05;
    }

    if (p.diskon > 0.0) {
        printf("%.2f\n", p.diskon);
        printf("%.2f\n", p.total - p.diskon);
    } else {
        printf("---\n");
        printf("%.2f\n", p.total);
    }

    return 0;
}