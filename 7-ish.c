#include <stdio.h>

int main() {
    unsigned long long son;
    int raqamlar = 0;
    int juft = 0;
    int toq = 0;
    int yigindi = 0;

    printf("Musbat butun son kiriting: ");
    if (scanf("%llu", &son) != 1 || son == 0) {
        printf("Xato: musbat butun son kiriting.\n");
        return 1;
    }

    while (son > 0) {
        int raqam = son % 10;
        raqamlar++;
        yigindi += raqam;

        if (raqam % 2 == 0) {
            juft++;
        } else {
            toq++;
        }

        son /= 10;
    }

    printf("Raqamlar soni: %d\n", raqamlar);
    printf("Juft raqamlar: %d ta\n", juft);
    printf("Toq raqamlar: %d ta\n", toq);
    printf("Raqamlar yig'indisi: %d\n", yigindi);

    return 0;
}