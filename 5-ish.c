#include <stdio.h>

int main() {
    int boshlangich, oxirgi;
    int faqat3 = 0, faqat5 = 0, ikkalasi = 0;

    printf("Boshlang'ich va oxirgi sonni kiriting: ");
    if (scanf("%d %d", &boshlangich, &oxirgi) != 2) {
        return 1;
    }

    if (boshlangich > oxirgi) {
        int vaqtincha = boshlangich;
        boshlangich = oxirgi;
        oxirgi = vaqtincha;
    }

    printf("3 ga ham, 5 ga ham bo'linadigan sonlar: ");
    for (int son = boshlangich; son <= oxirgi; son++) {
        if (son % 3 == 0 && son % 5 == 0) {
            printf("%d ", son);
            ikkalasi++;
        } else if (son % 3 == 0) {
            faqat3++;
        } else if (son % 5 == 0) {
            faqat5++;
        }
    }

    printf("\nFaqat 3 ga bo'linadiganlar soni: %d\n", faqat3);
    printf("Faqat 5 ga bo'linadiganlar soni: %d\n", faqat5);
    printf("3 ga ham, 5 ga ham bo'linadiganlar soni: %d\n", ikkalasi);

    return 0;
}