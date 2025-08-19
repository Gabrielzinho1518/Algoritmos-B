#include <stdio.h>
#define pi 3.14159

void linha(){
    printf("=================================================\n");
    return ;
}

float funcaoArea(float r){
    return pi * r * r;
}
float funcaoPerimetro (float r){
    return 2 * pi * r;
}

int main (){
    float raio, raio2;
    float area, area2;
    float perimetro, perimetro2;

    linha();
    printf("Calculo da Área e do perimetro de um circulo\n");
    linha();
    printf("Insira o valor do raio do Círculo:\n");
    scanf("%f",&raio);
    printf("Insira o valor do segundo raio do circulo:\n");
    scanf("%f",&raio2);
    printf("Perimetro = %f\n", funcaoPerimetro(raio));
    area = funcaoArea(raio);
    printf("Perimetro2 = %f\n", funcaoPerimetro(raio2));
    area2 = funcaoArea(raio2);
    printf("Area = %f\n", area);
    printf("Area2 = %f\n", area2);
    linha();

    return 0;
}
