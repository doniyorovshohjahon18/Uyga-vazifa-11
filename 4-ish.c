#include <stdio.h>

int main() {
    int kun;

    while (1) {\
        
        printf("1 dan 7 gacha son kiriting (to'xtatish uchun 0): ");
        scanf("%d", &kun);
        if ( kun !=  1) {
            return 1;
        }

        if (kun == 0) {
            break;
        }

        switch (kun) {
            case 1:
                printf("Dushanba\n");
                break;
            case 2:
                printf("Seshanba\n");
                break;
            case 3:
                printf("Chorshanba\n");
                break;
            case 4:
                printf("Payshanba\n");
                break;
            case 5:
                printf("Juma\n");
                break;
            case 6:
                printf("Shanba\n");
                break;
            case 7:
                printf("Yakshanba\n");
                break;
            default:
                printf("Bunday hafta kuni mavjud emas\n");
        }
    }

    return 0;
}