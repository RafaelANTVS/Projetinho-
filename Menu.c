#include <stdio.h>

int main() {
  int opcao;
  do{
    printf("1 - Menu Principal\n");
    printf("2 - Cadastrar\n");
    scanf(" %d", &opcao);

  }while(opcao != 0);
  return 0;
}
//teste