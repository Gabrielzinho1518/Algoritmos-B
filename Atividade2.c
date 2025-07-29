/*- Escrever um algoritmo para ler quatro valores inteiros, calcular a sua média, e escrever na tela os que são
superiores à média.*/

#include <stdio.h>
    int main(){
        int valor, valor2, valor3, valor4;
        float media;

        printf("Digite um valor:\n");
        scanf("%d",&valor);

        printf("Digite o segundo valor:\n");
        scanf("%d",&valor2);

        printf("Digite o terceiro valor:\n");
        scanf("%d",&valor3);

        printf("Digite o quarto valor:\n");
        scanf("%d",&valor4);

        media = (valor + valor2 + valor3 + valor4) / 4.0;

        printf("Media: %2.f\n, media");
        printf("Valores superiores a media\n");

        if (valor > media)
            printf("Primeiro valor: %d\n", valor);
        if (valor2 > media)
            printf("Segundo valor: %d\n", valor2);
        if (valor3 > media)
            printf("Segundo valor: %d\n", valor3);
        if (valor4 > media)
            printf("Segundo valor: %d\n", valor4);

        return 0;
    }
