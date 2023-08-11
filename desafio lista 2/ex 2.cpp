#include <stdio.h>

int main() {
    float salarioFuncionario, salarioFinal, salarioFamilia;
    int numFilhos;

    // Leitura do sal?rio e do n?mero de filhos
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salarioFuncionario);

    printf("Digite o numero de filhos: ");
    scanf("%d", &numFilhos);

    // Verifica??o e c?lculo do sal?rio fam?lia
    if (salarioFuncionario < 2000) {
        salarioFamilia = 45 * numFilhos;
        salarioFinal = salarioFuncionario + salarioFamilia;
    }

    // Exibi??o do sal?rio final
    printf("Salario familia: %.2f\n", salarioFamilia);
    printf("Salario final: %.2f\n", (salarioFuncionario + salarioFamilia));

    return 0;
}
