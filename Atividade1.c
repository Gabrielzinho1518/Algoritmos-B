#include <stdio.h>

int main() {
    int cod_vendedor;
    float salario_fixo, total_vendas, comissao, salario_total;

    printf("Digite o código do vendedor: ");
    scanf("%d", &cod_vendedor);

    printf("Digite o salário fixo: ");
    scanf("%f", &salario_fixo);

    printf("Digite o total de vendas: ");
    scanf("%f", &total_vendas);

    // Cálculo da comissão
    if (total_vendas <= 1000) {
        comissao = total_vendas * 0.03;
    } else if (total_vendas <= 2000) {
        comissao = 1000 * 0.03 + (total_vendas - 1000) * 0.05;
    } else {
        comissao = 1000 * 0.03 + 1000 * 0.05 + (total_vendas - 2000) * 0.10;
    }

    salario_total = salario_fixo + comissao;

    // Exibição do resumo
    printf("\n--- RESUMO DE VENDAS ---\n");
    printf("Código do vendedor: %d\n", cod_vendedor);
    printf("Salário fixo: R$ %.2f\n", salario_fixo);
    printf("Total de vendas: R$ %.2f\n", total_vendas);
    printf("Comissão: R$ %.2f\n", comissao);
    printf("Salário total: R$ %.2f\n", salario_total);

    return 0;
}
