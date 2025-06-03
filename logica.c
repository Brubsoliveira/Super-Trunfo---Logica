#include <stdio.h>

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float densidade_demografica;
} Carta;

// Função para exibir menu de atributos
int escolher_atributo() {
    int escolha;
    printf("Escolha um atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &escolha);
    
    while (escolha < 1 || escolha > 3) {
        printf("Opção inválida! Escolha novamente: ");
        scanf("%d", &escolha);
    }
    
    return escolha;
}

// Função para obter o valor do atributo
float obter_valor_atributo(Carta carta, int atributo) {
    switch (atributo) {
        case 1: return carta.populacao;
        case 2: return carta.area;
        case 3: return carta.densidade_demografica;
        default: return 0;
    }
}

// Função de comparação de cartas
void comparar_cartas(Carta c1, Carta c2) {
    int atributo1 = escolher_atributo();
    int atributo2;

    // Garantir que o segundo atributo seja diferente do primeiro
    do {
        atributo2 = escolher_atributo();
        if (atributo2 == atributo1) {
            printf("O segundo atributo deve ser diferente do primeiro!\n");
        }
    } while (atributo2 == atributo1);

    float valor1_c1 = obter_valor_atributo(c1, atributo1);
    float valor1_c2 = obter_valor_atributo(c2, atributo1);
    float valor2_c1 = obter_valor_atributo(c1, atributo2);
    float valor2_c2 = obter_valor_atributo(c2, atributo2);

    // Comparação
    int pontos_c1 = 0, pontos_c2 = 0;
    pontos_c1 += (atributo1 == 3) ? (valor1_c1 < valor1_c2) : (valor1_c1 > valor1_c2);
    pontos_c2 += (atributo1 == 3) ? (valor1_c2 < valor1_c1) : (valor1_c2 > valor1_c1);
    
    pontos_c1 += (atributo2 == 3) ? (valor2_c1 < valor2_c2) : (valor2_c1 > valor2_c2);
    pontos_c2 += (atributo2 == 3) ? (valor2_c2 < valor2_c1) : (valor2_c2 > valor2_c1);

    float soma_c1 = valor1_c1 + valor2_c1;
    float soma_c2 = valor1_c2 + valor2_c2;

    // Exibição do resultado
    printf("\nComparação entre %s e %s\n", c1.nome, c2.nome);
    printf("%s: %.2f, %.2f | Soma: %.2f\n", c1.nome, valor1_c1, valor2_c1, soma_c1);
    printf("%s: %.2f, %.2f | Soma: %.2f\n", c2.nome, valor1_c2, valor2_c2, soma_c2);

    if (soma_c1 == soma_c2) {
        printf("Resultado: Empate!\n");
    } else {
        printf("Vencedor: %s\n", (soma_c1 > soma_c2) ? c1.nome : c2.nome);
    }
}

int main() {
    Carta pais1 = {"Brasil", 214000000, 8515767, 25.1};
    Carta pais2 = {"Japão", 125800000, 377975, 332.9};

    comparar_cartas(pais1, pais2);

    return 0;
}