#include <stdio.h>

int main() {
    int baho;
    int alo = 0;
    int yaxshi = 0;
    int qoniqarli = 0;
    int qoniqarsiz = 0;

    for (int i = 1; i <= 15; i++) {
        printf("%d-o'quvchining bahosini kiriting: ", i);
        if (scanf("%d", &baho) != 1) {
            return 1;
        }

        if (baho < 0 || baho > 100) {
            printf("Noto'g'ri baho, hisobga olinmadi.\n");
            continue;
        }

        if (baho >= 90) {
            printf("A'lo\n");
            alo++;
        } else if (baho >= 75) {
            printf("Yaxshi\n");
            yaxshi++;
        } else if (baho >= 60) {
            printf("Qoniqarli\n");
            qoniqarli++;
        } else {
            printf("Qoniqarsiz\n");
            qoniqarsiz++;
        }
    }

    printf("\nA'lo: %d ta\n", alo);
    printf("Yaxshi: %d ta\n", yaxshi);
    printf("Qoniqarli: %d ta\n", qoniqarli);
    printf("Qoniqarsiz: %d ta\n", qoniqarsiz);

    return 0;
}