#include <stdio.h>

int main() {
    double temp;
    int issiqKunlar = 0;

    for (int i = 1; i <= 7; i++) {
        printf("%d-kun haroratini kiriting: ", i);
        scanf("%lf", &temp);

        if (temp > 30) {
            printf("Issiq\n");
            issiqKunlar++;
        } else if (temp >= 15) {
            printf("Iliq\n");
        } else {
            printf("Sovuq\n");
        }
    }

    printf("30 dan yuqori bo'lgan kunlar soni: %d\n", issiqKunlar);

    return 0;
}
