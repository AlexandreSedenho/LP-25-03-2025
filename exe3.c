#include <stdio.h>

int main(void) {
  char acao;

  printf("Digite a ação da máquina, F para encerrar: ");
  acao = getchar();
  getchar();

  while( acao != 'F' ) {
    switch (acao) {
      case 'S':
	printf("Secando\n");
	break;
      case 'E': 
	printf("Enxaguando e secando\n");
	break;
      case 'L':
	printf("Lavando, enxaguando e secando\n");
	break;
    }

    printf("Digite o tamanho recebido, F para encerrar: ");
    acao = getchar();
    getchar();
  }
  return 0;
}