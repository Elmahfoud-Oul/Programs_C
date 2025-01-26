#include <stdio.h>
int main() {
    int N, i;
    float cc[100], ds[100], avg[100], max, min;
    do {
        printf("Entre la taill (N > 0): ");
        scanf("%d", &N);
    } while (N <= 0);
    for (i = 0; i < N; i++) {
        do {
            printf("Etudient %d CC (0-20): ", i + 1);
            scanf("%f", &cc[i]);
        } while (cc[i] < 0 || cc[i] > 20);
    }
    for (i = 0; i < N; i++) {
        do {
            printf("Etudient %d DS (0-20): ", i + 1);
            scanf("%f", &ds[i]);
        } while (ds[i] < 0 || ds[i] > 20);
    }
    for (i = 0; i < N; i++) {
        avg[i] = 0.4 * cc[i] + 0.6 * ds[i];
    }
    max = min = avg[0];
    for (i = 1; i < N; i++) {
        if (avg[i] > max) max = avg[i];
        if (avg[i] < min) min = avg[i];
    }
    printf("Moyen:\n");
    for (i = 0; i < N; i++) {
        printf("Etudient %d: %.2f\n", i + 1, avg[i]);
    }
    printf("Max: %.2f\nMin: %.2f\n", max, min);
}
