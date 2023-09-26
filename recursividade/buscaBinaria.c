/*Forneça uma solução recursiva para o problema de busca binária.*/
#include <stdio.h>

int binarySearch(int lista[], int item, int inicio, int tamanho){

    while (inicio <= tamanho){
        int meio = (inicio + tamanho) / 2;
        if (lista[meio] == item) return meio;
        if (lista[meio] > item) return binarySearch(lista, item, 0, meio - 1);
        else return binarySearch(lista, item, meio + 1, tamanho);
    }

    return -1;
}

int main(){
    int vetor01[] = {1, 2, 3, 4, 5, 6};
    int result = binarySearch(vetor01, 4, 0, 5);
    printf("Resultado: %d", result);
    return 0;
}