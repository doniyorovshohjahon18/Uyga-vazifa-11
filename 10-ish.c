#include <stdio.h>

int main() {
    int tanlov;
    long long son;
    long long yigindi = 0;
    long long engKatta = 0;
    long long engKichik = 0;
    int sonlarSoni = 0;

    while (1) {
        printf("\n1. Son kiritish\n");
        printf("2. Kiritilgan sonlar sonini ko'rish\n");
        printf("3. Sonlar yig'indisini ko'rish\n");
        printf("4. Eng katta sonni ko'rish\n");
        printf("5. Eng kichik sonni ko'rish\n");
        printf("6. Dasturdan chiqish\n");
        printf("Tanlovingizni kiriting: ");

        if (scanf("%d", &tanlov) != 1) {
            return 1;
        }

        switch (tanlov) {
            case 1:
                printf("Son kiriting: ");
                if (scanf("%lld", &son) != 1) {
                    return 1;
                }

                if (sonlarSoni == 0) {
                    engKatta = son;
                    engKichik = son;
                } else {
                    if (son > engKatta) {
                        engKatta = son;
                    }
                    if (son < engKichik) {
                        engKichik = son;
                    }
                }

                yigindi += son;
                sonlarSoni++;
                printf("Son saqlandi.\n");
                break;
            case 2:
                if (sonlarSoni == 0) {
                    printf("Hali son kiritilmagan.\n");
                } else {
                    printf("Kiritilgan sonlar soni: %d ta\n", sonlarSoni);
                }
                break;
            case 3:
                if (sonlarSoni == 0) {
                    printf("Hali son kiritilmagan.\n");
                } else {
                    printf("Sonlar yig'indisi: %lld\n", yigindi);
                }
                break;
            case 4:
                if (sonlarSoni == 0) {
                    printf("Hali son kiritilmagan.\n");
                } else {
                    printf("Eng katta son: %lld\n", engKatta);
                }
                break;
            case 5:
                if (sonlarSoni == 0) {
                    printf("Hali son kiritilmagan.\n");
                } else {
                    printf("Eng kichik son: %lld\n", engKichik);
                }
                break;
            case 6:
                printf("Dastur yakunlandi.\n");
                return 0;
            default:
                printf("Noto'g'ri tanlov. 1 dan 6 gacha son kiriting.\n");
        }
    }
}