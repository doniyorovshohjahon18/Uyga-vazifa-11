#include <stdio.h>

int main() {
    int boshJoylar = 20;
    int tanlov;

    while (1) {
        printf("\n1. Avtomobil kiritish\n");
        printf("2. Avtomobil chiqarish\n");
        printf("3. Bo'sh joylarni ko'rish\n");
        printf("4. Dasturdan chiqish\n");
        printf("Tanlovingizni kiriting: ");

        if (scanf("%d", &tanlov) != 1) {
            return 1;
        }

        switch (tanlov) {
            case 1:
                if (boshJoylar > 0) {
                    boshJoylar--;
                    printf("Avtomobil kiritildi.\n");
                } else {
                    printf("Bo'sh joy qolmagan.\n");
                }
                break;
            case 2:
                if (boshJoylar < 20) {
                    boshJoylar++;
                    printf("Avtomobil chiqarildi.\n");
                } else {
                    printf("Avtoturargoh bo'sh, chiqariladigan avtomobil yo'q.\n");
                }
                break;
            case 3:
                printf("Bo'sh joylar soni: %d ta\n", boshJoylar);
                break;
            case 4:
                printf("Dastur yakunlandi.\n");
                return 0;
            default:
                printf("Noto'g'ri tanlov. 1 dan 4 gacha son kiriting.\n");
        }
    }
}