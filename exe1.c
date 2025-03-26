#include <stdio.h>

int main() {
    int n, valor;
    int soma = 0;
    
    printf("insira um valor: ");
    scanf("%d", &valor);
    
    for(n = 1; n <= valor; n++) {
        if(n % 2 == 1) {
            soma += n;
        }
    }
    
    printf("A soma dos números ímpares é: %d", soma);
    
    return 0;
}