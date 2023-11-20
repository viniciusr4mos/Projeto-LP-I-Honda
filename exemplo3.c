#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc <= 1) {
    printf("Entre com o número de elementos...\n");
    return -1;
  }

  int nofElements = atoi(argv[1]);
  int vec[nofElements];

  for (int i = 0; i < nofElements; i++)
    vec[i] = i;

  printf("%-7s %13s\n", "Elementos", "Valor");

  for (int i = 0; i < nofElements; i++)
    printf("%-7d %13d\n", i, vec[i]);

  return 0;
}
