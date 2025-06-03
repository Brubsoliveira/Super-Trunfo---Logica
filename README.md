# Super-Trunfo---LogicaComparação de Cartas de Países
Este programa em C implementa um sistema de comparação entre dois países, utilizando diferentes atributos como população, área e densidade demográfica.
📌 Funcionalidades
- Permite ao usuário escolher dois atributos para comparação.
- Calcula pontos para cada país com base nos atributos escolhidos.
- Exibe o vencedor ou informa caso haja empate.
🛠 Estrutura do Código
- Struct Carta: Representa um país com os atributos nome, população, área e densidade demográfica.
- Função escolher_atributo(): Permite ao usuário escolher um atributo para a comparação.
- Função obter_valor_atributo(): Retorna o valor do atributo específico de um país.
- Função comparar_cartas(): Realiza a comparação entre dois países com base nos atributos selecionados.
- Função main(): Executa a comparação entre Brasil e Japão utilizando os dados fornecidos.
🚀 Como Executar
- Compile o código com gcc -o comparacao comparacao.c.
- Execute com ./comparacao.
- Escolha dois atributos para comparar.
- Veja o resultado da disputa entre os países.
📌 Exemplo de Saída
Escolha um atributo para comparação:
1 - População
2 - Área
3 - Densidade Demográfica
Opção: 2
Escolha um atributo para comparação:
1 - População
2 - Área
3 - Densidade Demográfica
Opção: 3

Comparação entre Brasil e Japão
Brasil: 8515767.00, 25.10 | Soma: 8515792.10
Japão: 377975.00, 332.90 | Soma: 378307.90
Vencedor: Brasil



