/*2. Escreva um programa que leia uma matriz de inteiros com ordem 10x10 e por meio de funções
faça o que se pede:
a. Exiba o menor elemento da matriz
b. Encontre e exiba o maior elemento de cada uma das linhas da matriz*/

#include <stdio.h>
void mostrarMatriz(){
    int i, j, m;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    return;
}
void exibeMenorElemento(){
    int i, j, menor;
    for(i=0;i<10;i++){
         for(j=0;j<10;j++){
    if (menor <i && <j){
        printf("Menor elemento:\n");
    }


    return;
}

int main(){
    int i, j, m, matriz[10][10];
    mostrarMatriz();
    exibeMenorElemento();

    return 0;
}
