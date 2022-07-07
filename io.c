#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int elegido;
  char *menu[] = {
    "",
    "cafe con leche",
    "tostado",
    "medialunas",
    "jugo de naranja",
    "té",
    "galletias"
  };
  for (int i = 1; i < 7; i++) {
    printf("%d - %s\n", i, menu[i], rand()%i );
  }
  printf("Seleccione el indice de tu pedido: ");
  scanf("%d", &elegido);
  srand(elegido);
  printf("Tu pedido es: %s\tson %d$\n", menu[elegido], rand()%1000);

  return 0;
}
