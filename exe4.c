#include <stdio.h>

int main(void) {
  char pedido;
  int total;
  int valor;

  printf("Digite o pedido, F para encerrar: ");
  pedido = getchar();
  getchar();

  int suco = 0;
  int batata = 0;
  int hamburguer = 0;
  int combo = 0;

  while( pedido != 'F' ) {
    switch (pedido) {
      case 's':
    	suco++;
    	break;
      case 'b': 
    	batata++;
    	break;
      case 'h':
    	hamburguer++;
    	break;
	  case 'c':
    	combo++;
    	break;
    }

    printf("Digite o pedido, F para encerrar: ");
    pedido = getchar();
    getchar();
  }

  printf("Suco: %d \nBatata: %d \nHamburguer: %d \nCombos: %d \n --\n", suco, batata, hamburguer, combo);
  
  total = suco + batata + hamburguer + combo;
  
  valor = (suco*9) + (batata*10) + (hamburguer*15) + (combo*30);
  
  printf("Total de venda: %d \n", total);
  
  printf("Valor: %d", valor);
  
  return 0;
}