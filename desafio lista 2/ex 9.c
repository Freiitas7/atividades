#include <stdio.h>

int main() {
    float salarioAtual, novoSalario;
    
    // Leitura do sal?rio atual
    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salarioAtual);

    // C?lculo do reajuste salarial
    if (salarioAtual >= 1500 && salarioAtual < 1750) {
        novoSalario = salarioAtual * 1.15; // Aumento de 15%
    } else if (salarioAtual >= 1750 && salarioAtual < 2000) {
        novoSalario = salarioAtual * 1.12; // Aumento de 12%
    } else if (salarioAtual >= 2000 && salarioAtual < 3000) {
        novoSalario = salarioAtual * 1.09; // Aumento de 9%
    } else if (salarioAtual >= 3000) {
        novoSalario = salarioAtual * 1.06; // Aumento de 6%
    } else {
        novoSalario = salarioAtual; // Nenhum aumento
    }

    // Exibi??o do novo sal?rio
    printf("Novo salario do funcionario: %.2f\n", novoSalario);

    return 0;
}
