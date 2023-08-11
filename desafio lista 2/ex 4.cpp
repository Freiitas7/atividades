#include <stdio.h>

int main() {
    float salario, descontoINSS, salarioFinal;

    // Leitura do sal?rio do funcion?rio
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    // C?lculo do desconto de INSS
    if (salario <= 1212.00) {
        descontoINSS = salario * 0.075;
    } else if (salario <= 2427.35) {
        descontoINSS = salario * 0.09;
    } else if (salario <= 3641.03) {
        descontoINSS = salario * 0.12;
    } else if (salario <= 7087.22) {
        descontoINSS = salario * 0.14;
    } else {
        descontoINSS = 7087.22 * 0.14;
    }

    // C?lculo do sal?rio final
    salarioFinal = salario - descontoINSS;

    // Exibi??o do desconto e do sal?rio final
    printf("Desconto de INSS: %.2f\n", descontoINSS);
    printf("Salario final: %.2f\n", salarioFinal);

    return 0;
}
