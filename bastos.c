#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


// ######### ESCREVA O NROUSP AQUI
char* nroUSP() {
    return("14576642");
}


// ######### ESCREVA SEU NOME AQUI
char* nome() {
    return("Gustavo Bastos de Souza");
}

//elemento da lista
typedef struct estr {
        int chave;
        struct estr* prox;
} NO;

// funcao principal
void removerCompartilhados(NO* *p1, NO* *p2);

//------------------------------------------
// O EP consiste em implementar esta funcao
// e outras funcoes auxiliares que esta
// necessitar
//------------------------------------------
NO* ultimoElemLista(NO* p){
    NO* i = p;
    if(i){
        while(i->prox){
            i = i->prox;
        }
    }
    return i;
}

void adicionarElemLista(int ch, NO* p){
    NO* novo = (NO*) malloc(sizeof(NO));
    NO* ant = ultimoElemLista(p);
    novo->chave = ch;
    novo->prox = NULL;
    if(!ant){ p = novo;
    } else {ant->prox = novo;} 
}

void destruirLista(NO* p){
    NO* prox;
    while (p){
        prox = p->prox;
        free(p);
        p = prox;
    }
    p = NULL;
}

void removerCompartilhados(NO* *p1, NO* *p2) {
    // seu codigo AQUI
    NO* noLista1 = *p1;
    NO* noLista2 = *p2;
    NO* primeiroLista1 = *p1;
    NO* primeiroLista2 = *p2;
    NO* compartilhado = NULL;

    while(noLista1 || noLista2){ 
        if(noLista1 == noLista2)
        {   
            compartilhado = noLista1;
            destruirLista(compartilhado);

            noLista1->prox = primeiroLista1;
            noLista2->prox = primeiroLista2;
            return;
        }
        if(noLista1->prox) noLista1 = noLista1->prox;
        if(noLista2->prox) noLista2 = noLista2->prox;
    }
    if(noLista1->prox) noLista1->prox = primeiroLista1;
    if(noLista2->prox) noLista2->prox = primeiroLista2;
    return;
}

// por favor nao inclua nenhum codigo a ser entregue abaixo deste ponto

//----------------------------------------------------------------
// use main() apenas para fazer chamadas de teste ao seu programa
//----------------------------------------------------------------
int main() {

	NO* p1 = NULL;
	NO* p2 = NULL;

	// aqui vc pode incluir codigo para inserir elementos
	// de teste nas listas p1 e p2
    int ch1 = 1;
    int ch2 = 2;

    adicionarElemLista(ch1, p1);
	// o EP sera testado com chamadas deste tipo
	removerCompartilhados(&p1, &p2);

}
