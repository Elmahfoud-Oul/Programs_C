#include <stdio.h>
int main() {
    int N, i;
    do {
        printf("Entrez le nombre d'étudiants (N > 0): ");
        scanf("%d", &N);
    } while (N <= 0);
    float cc[N], ds[N], avg[N], max, min;
    for (i = 0; i < N; i++) {
        do {
            printf("Étudiant %d CC (0-20): ", i + 1);
            scanf("%f", &cc[i]);
        } while (cc[i] < 0 || cc[i] > 20);
    }
    for (i = 0; i < N; i++) {
        do {
            printf("Étudiant %d DS (0-20): ", i + 1);
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
    printf("Moyennes :\n");
    for (i = 0; i < N; i++) {
        printf("Étudiant %d: %.2f\n", i + 1, avg[i]);
    }
    printf("Max: %.2f\nMin: %.2f\n", max, min);

    
}
