#include <stdlib.h>
#include <iostream>
#include <string>
#define TAM 10

    using namespace std;

void pilha_cheia (int *topo){

    if (*topo == TAM - 1){
      return true;
    }else{
      return false;
    }

}

void pilha_vazia (int *topo){

    if (*topo == - 1){
      return true;
    }else{
      return false;
    }

}

void imprimeVetor (int vetor[TAM]){

    int i;

    cout << "\n";

    for (i = 0 ; i < TAM ; i++){
       cout << vetor[i] << " - ";

    }


}
void pilha_push(int pilha[TAM], int valor, int *topo){



     if (*topo == TAM - 1){
       cout << "Pilha cheia";

    }else{
        *topo = *topo + 1;
        pilha[*topo] = valor;

    }




}

void pilha_pop(int pilha[TAM], int *topo){

    if (*topo == - 1){
       cout << "Pilha vazia";

    }else{
       cout << "\n";
       cout << "Valor removido:" << pilha[*topo];
       pilha[*topo] = 0;
       *topo = *topo - 1;
    }


}
int main (){

    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int topo = -1;

    imprimeVetor(pilha);

    pilha_push(pilha, 5, &topo);
    imprimeVetor(pilha);

    pilha_push(pilha, 7, &topo);
    imprimeVetor(pilha);

    pilha_pop(pilha, &topo);
    imprimeVetor(pilha);







}
