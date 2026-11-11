#include <stdio.h>

int main() {
    long long son;
    int yigindi = 0;

    printf("Ko'p xonali musbat son kiriting: ");
    
    if (scanf("%lld", &son) != 1 || son < 10) {
        printf("Xato: kamida ikki xonali musbat son kiriting.\n");
        return 1;
    }

    while (son > 0) {
        yigindi += son % 10;
        son /= 10;
    }

    printf("Raqamlar yig'indisi: %d\n", yigindi);

    return 0;
}