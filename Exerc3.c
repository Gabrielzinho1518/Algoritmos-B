#include <stdio.h>

int m[6][6];

void lerLinha(){
    int j;
    printf("Inicia os elementos da 1ª linha\n");
    for(j=0;j<6;j++){
        scanf("%d", &m[0][j]);
    }
    return;
}

void mostrarMatriz(){
    int i, j;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    return;
}

int main(){
    lerLinha();
    // preencherMatriz(); // essa função não existe, pode remover
    mostrarMatriz();
    return 0;
}
