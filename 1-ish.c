#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 1; i <= 15; i++) {
        printf("%d - %.0f\n", i, pow(i, 2));
    }

    return 0;
}