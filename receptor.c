
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int potencia(int base, int expoente) {
  int total, i;
  total = base;
  for (i = 1; i < expoente; i++) {
    total = total * base;
  }
  if (expoente == 0) {
    total = 1;
  }
  return total;
}
void decimal(int tamanhoSub, char letra[8]) {
  int i, j, total;
  char c;
  total = 0;
  j = 0;
  for (i = tamanhoSub - 1; i >= 0; i--) {
    if (letra[i] != '0') {
      total += potencia(2, j);
    }
    j++;
  }
  c = total;

  printf("%c", c);
}

int main() {
  int tamanhoSub;
  char msg[640];
  const char s[2] = " ";
  char *token;
  scanf("%[^\n]s", msg);
  token = 0;
  token = strtok(msg, s);
  token = strtok(NULL, s);
  while (token != NULL) {
    tamanhoSub = strlen(token);
    decimal(tamanhoSub, token);
    token = strtok(NULL, s);
  }
  return 0;
}