// 1 - Fazer a soma de dois vetores alocados dinamicamente.
// O tamanho dos vetores é informado pelo usuário.

#include <stdio.h>
#include <stdlib.h>

void lerVetor(int *v, int t) {
    int i;
    for (i = 0; i < t; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
}

void somarVetores(int *x, int *y, int *z, int t) {
    int i;
    for (i = 0; i < t; i++) {
        z[i] = x[i] + y[i];
    }
}

void mostrarVetor(int *v, int t) {
    int i;
    printf("\nVetor resultante da soma:\n");
    for (i = 0; i < t; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int *alocarVetor(int tam) {
    int *p = (int *) malloc(tam * sizeof(int));
    if (!p) {
        printf("Erro na alocação!\n");
        exit(-1);
    }
    return p;
}

int main() {
    int *a, *b, *c, tam;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tam);

    a = alocarVetor(tam);
    b = alocarVetor(tam);
    c = alocarVetor(tam);

    printf("\nDigite os elementos do primeiro vetor:\n");
    lerVetor(a, tam);

    printf("\nDigite os elementos do segundo vetor:\n");
    lerVetor(b, tam);

    somarVetores(a, b, c, tam);

    mostrarVetor(c, tam);

    free(a);
    free(b);
    free(c);

    return 0;
}
