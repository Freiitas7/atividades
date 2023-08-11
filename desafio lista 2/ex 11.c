#include <stdio.h>

int main() {
    char peca;
    float preco, desconto, precoFinal;

    // Leitura da pe?a e do pre?o
    printf("Digite a peca vendida (c para camisa, b para bermuda, l para calca): ");
    scanf(" %c", &peca);

    printf("Digite o preco da peca: ");
    scanf("%f", &preco);

    // C?lculo do desconto e do pre?o final
    if (peca == 'c') {
        desconto = 0.20; // 20% de desconto para camisa
    } else if (peca == 'b') {
        desconto = 0.10; // 10% de desconto para bermuda
    } else if (peca == 'l') {
        desconto = 0.15; // 15% de desconto para cal?a
    } else {
        desconto = 0; // Nenhum desconto para pe?a inv?lida
    }

    precoFinal = preco * (1 - desconto);

    // Exibi??o do valor final da venda
    printf("Valor final da venda: %.2f\n", precoFinal);

    return 0;
}
