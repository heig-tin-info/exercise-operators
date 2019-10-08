#include <stdio.h>
#include "variables.h"

int felicitations = 0;
int encouragements = 0;


void test(int value) {
    if (value == 1) {
        printf("Bravo\n");
        felicitations++;
    } else {
        if (encouragements > 0) {
            printf("C'est encore perdu !\n");
        } else {
            printf("C'est perdu !\n");
        }
        encouragements++;
    }
}

int main(void) {
    printf("Bienvenue dans ce petit exercise. Évaluons votre score...\n\n");

    // Première partie
    test(a != 0);
    test(b != 0);
    test(c != 0);
    test(d != 0);
    test(e != 0);
    printf("\n");

    // Deuxième partie
    test(a & 0x80 && a > -2);
    test(b + 0x32 == 0xab);
    test((c ^ 0b11111111) == 235);
    test((d & 0x30) == 0x30);
    test((d & 0x80) == 0x80);
    printf("\n");

    // Troisième partie
    b = b ^ d;
    d = b ^ d;
    b = b ^ d;
    test(b == 437);
    printf("\n");

    // Quatrième partie
    test(e << 1 == 0x4514);
    test(e - e / 10 * 10 == f);
    printf("\n");

    // Cinquième partie
    float u = 1.01 * (g + 1);
    int v = u;
    test(v == 102);

    float w = 0.99 * (g + 1);
    test(u - w == h);
    printf("\n");

    // Sixième partie
    int b = 2;
    a = i;

    int r1 = a % b;
    int m1 = a / b;

    int r2 = m1 % b;
    int m2 = m1 / b;

    int r3 = m2 % b;
    int m3 = m2 / b;

    int r4 = m3 % b;
    int m4 = m3 / b;

    int r5 = m4 % b;
    int m5 = m4 / b;

    int r6 = m5 % b;

    int kv = (100000 * r1) + (10000 * r2) + (1000 * r3) + (100 * r4) +
             (10 * r5) + (1 * r6);

    test(kv == 110101);

    // Conclusion
    int total = felicitations + encouragements;
    double note =
        (double)felicitations / (felicitations + encouragements) * 5 + 1;
    printf("\n");
    printf(
        "Vous avez obtenu %d points sur %d. \nSoit une note de: "
        "\033[%dm%.1f\033[0m\n",
        felicitations, total, (note >= 4) ? 32 : 31, note);

    return note >= 4 ? 0 : note - 4;
}
