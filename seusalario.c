#include <stdio.h>
#include <ctype.h> 

int main() {
    // Declaraçao das variaveis
    float horas_trabalhadas, valor_hora, percentual_inss;
    float salario_bruto, valor_desconto, salario_liquido;
    char opcao;

    // Laço de repetição principal
    do {
        printf("\n===============================\n");
        printf (" Calculo da folha de pagamento  \n");
        printf ("================================\n");

        //1. Entrada de dados
        printf("Informe o numero de horas trabalhadas: ");
        scanf("%f", &valor_hora);

        printf("Informe o valor recebido por hora: ");
        scanf("%f", &horas_trabalhadas);

        printf("Informe o percentual de desconto do INSS (ex: 10 para 10%%): ");
        scanf("%f", &percentual_inss);

        // 2. Calculos
        salario_bruto = horas_trabalhadas * valor_hora;
        valor_desconto = salario_bruto * (percentual_inss / 100.0f);
        salario_liquido = salario_bruto - valor_desconto;

        // 3. Saida de dados (Formatado com 2 decimais)
        printf("\n==================================\n");
        printf("            RESULTADOS          \n");
        printf("====================================\n");
        printf("Salario Bruto   : R$ %.2f\n", salario_bruto);
        printf("Valor Descontado: R$ %.2f (%.1f%% INSS)\n", valor_desconto, percentual_inss);
        printf("Salario Liquido : R$ %.2f\n", salario_liquido);
        printf("===================================\n");

        // 4. Pergunta para o loop
        printf("\nDeseja realizar outra consulta? (S/N): ");
        scanf(" %c", &opcao);

        // touper () converte a letra para maiuscula (facilita comparar o 's' ou 'S')
        opcao = toupper(opcao);

    } while (opcao == 'S');

    printf("\nPrograma encerrado. Até logo, obrigado por utilizar!\n");

    return 0;
}