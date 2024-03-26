#include <stdio.h>
#include <locale.h>

int f (int n);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int v1[5], v2[5], i;

    for (i = 0; i < 5; i++) {
        printf("\nInforme o %iº número: ", i + 1);
        scanf("%i", &v1[i]);

        if (v1[i] < 0) {
            printf("Informe o número novamente!\n");
            i--;
        } else {
            v2[i] = f(v1[i]);
        }
    }

    printf("Vetor v1: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

    printf("Vetor v2: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", v2[i]);
    }

    return (0);
}

int f (int n) {
    if (n == 0)
        return 1;
    else
        return n * f(n - 1);
}
