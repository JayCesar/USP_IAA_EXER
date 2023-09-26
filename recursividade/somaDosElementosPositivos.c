/*
Escreva uma função recursiva que calcule a soma dos elementos positivos do vetor de
inteiros v[0..n-1]. O problema faz sentido quando n é igual a 0? Quanto deve valer a soma
nesse caso?
*/

// O caso base é quando o vetor é um elemento apenas!

#include <stdio.h>

int somaElementosPositivos(int vetor[], int tamanho){
    int soma = 0;
    if (tamanho <= 0) return 0;

    for (int i = 0; i < tamanho; i++) 
       if (vetor[i] > 0) soma += vetor[i];

    return soma;
}

int main() {
    int vetor[] = {1, 2, -3, 4, -5, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int resultado = somaElementosPositivos(vetor, tamanho);
    printf("Resultado: %d\n", resultado);  // Isso imprimirá 13
    return 0;
}



