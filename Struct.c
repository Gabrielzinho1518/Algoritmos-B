#include <stdio.h>

// Definição da estrutura
struct vendedor {
    int cod;
    float salario;
    float vendas;
    float comissao;
};

int main() {
    struct vendedor v[4];
    int i;

    // Leitura de dados
    for (i = 0; i < 4; i++) {
        printf("Digite o código do vendedor %d:\n", i + 1);
        scanf("%d", &v[i].cod);

        printf("Digite o salário fixo:\n");
        scanf("%f", &v[i].salario);

        printf("Digite o total de vendas:\n");
        scanf("%f", &v[i].vendas);

        // Cálculo da comissão
        if (v[i].vendas <= 1000) {
            v[i].comissao = v[i].vendas * 0.03;
        } else if (v[i].vendas <= 2000) {
            v[i].comissao = v[i].vendas * 0.05;
        } else {
            v[i].comissao = v[i].vendas * 0.10;
        }
    }

    // Exibição dos resultados
    for (i = 0; i < 4; i++) {
        printf("\nVendedor código: %d", v[i].cod);
        printf("\nComissão: R$ %.2f", v[i].comissao);
        printf("\nSalário total (salário + comissão): R$ %.2f\n", v[i].salario + v[i].comissao);
    }

    return 0;
}
