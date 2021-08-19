#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void decimal(char msg[], int tamanho, int vetor[]) {
  int i;
  for (i = 0; i < tamanho; i++) {
    vetor[i] = msg[i];
  }
}
void binario(int vetor[], int tamanho, int vetorBinario[]) {
  int i, valorDecimal, mult, binario, resto;
  for (i = 0; i <= tamanho; i++) {
    mult = 10;
    binario = 0;
    if (i == 0) {
      valorDecimal = tamanho;
    } else {
      valorDecimal = vetor[i - 1];
    }
    while (valorDecimal > 0) {
      resto = valorDecimal % 2;
      valorDecimal = valorDecimal / 2;
      resto = resto * mult / 10;
      binario = binario + resto;
      mult = mult * 10;
    }
    vetorBinario[i] = binario;
  }
}
int main() {
  char msg[80];
  int tamanho, vetor[80], vetorBinario[80], i;
  scanf("%[^\n]s", msg);
  tamanho = strlen(msg);
  decimal(msg, tamanho, vetor);
  binario(vetor, tamanho, vetorBinario);
  for (i = 0; i <= tamanho; i++) {
    printf("%d ", vetorBinario[i]);
  }
  return 0;
}
