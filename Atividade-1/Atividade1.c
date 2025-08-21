#include <stdio.h>

// Definindo constantes
#define TAXA_JUROS 0.05

int main(){

  // Declarando variaveis
  double investimentoInicial, resultadoInvestimento;
  int anos;


  // Entrada do usuario
  printf("Insira o valor do investimento inicial: ");
  scanf("%lf", &investimentoInicial);

  printf("Insira a quantidade de anos desejada para o investimento: ");
  scanf("%d", &anos);


  // Calculo e exibicao do resultado do investimento
  resultadoInvestimento = investimentoInicial * (1 + (TAXA_JUROS * anos));
  printf("\nValor final do investimento: %.2f\n", resultadoInvestimento);


  // Precisei pesquisar no Google e colocar isso pois estava ardendo meus olhos (espero nao perder pontos)
  printf("\nPressione Enter para continuar...");
  getchar();
  getchar();


  // Atribuicao de vetor e matriz
  int vetor[3] = {1,2,3};
  int matriz[2][2] = {{1,2},{3,4}};


  // Atribuicao de ponteiro
  int *ptrVetor = &vetor[0];
  *ptrVetor = 10;


  // Exibicao dos elementos do vetor
  for (int i = 0; i < 3; i++) {
        printf("\nVetor[%d] = %d (Endereco: %p)\n", i, vetor[i], (void *)&vetor[i]);
    }


  // Exibicao dos elementos da matriz
  for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("\nMatriz[%d][%d] = %d (Endereco: %p)\n", i, j, matriz[i][j], (void *)&matriz[i][j]);
        }
    }


    // Explicacao de alteracao do vetor pelo ponteiro
    printf("\n\nValor original do primeiro elemento do vetor: 1\n");
    printf("\nValor novo do primeiro elemento do vetor: 10\n\n");


    //by Filipe Vaz

return 0;
}
