#include <stdio.h>

int main() {
    int tanlov;
    int miqdor;
    long long hisob = 0;

    while (1) {
        printf("\n1. Olma - 5000 so'm\n");
        printf("2. Banan - 12000 so'm\n");
        printf("3. Apelsin - 10000 so'm\n");
        printf("4. Hisobni ko'rish\n");
        printf("5. Xaridni yakunlash\n");
        printf("Tanlovingizni kiriting: ");

        if (scanf("%d", &tanlov) != 1) {
            return 1;
        }

        switch (tanlov) {
            case 1:
            case 2:
            case 3: {
                printf("Miqdorni kiriting: ");
                if (scanf("%d", &miqdor) != 1) {
                    return 1;
                }
                if (miqdor <= 0) {
                    printf("Miqdor musbat son bo'lishi kerak.\n");
                    break;
                }

                if (tanlov == 1) {
                    hisob += 5000LL * miqdor;
                    printf("Olma hisobga qo'shildi.\n");
                } else if (tanlov == 2) {
                    hisob += 12000LL * miqdor;
                    printf("Banan hisobga qo'shildi.\n");
                } else {
                    hisob += 10000LL * miqdor;
                    printf("Apelsin hisobga qo'shildi.\n");
                }
                break;
            }
            case 4:
                printf("Joriy hisob: %lld so'm\n", hisob);
                break;
            case 5:
                printf("Yakuniy hisob: %lld so'm\n", hisob);
                return 0;
            default:
                printf("Noto'g'ri tanlov. 1 dan 5 gacha son kiriting.\n");
        }
    }
}