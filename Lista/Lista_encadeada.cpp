#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct node{

    int valor;
    struct node *proximo;

}Node;

typedef struct{

    node *inicio;
    int tam;
}Lista;

//inserção no inicio da lista
void inserirInicio(Lista *lista, int valor){

    node *novo = (node*)malloc(sizeof(node));
    novo->valor = valor; // (*novo).valor = valor;
    novo->proximo = lista->inicio;
    lista->inicio = novo;
    lista->tam++;

}

//inserir no final da lista
void inserirFim(Lista *lista, int valor){

    Node *no, *novo = (node*)malloc(sizeof(node));
    novo -> valor = valor;
    novo -> proximo = NULL;

    if(lista -> inicio == NULL){
        lista -> inicio = novo;
    }else{
        no = lista->inicio;
        while(no->proximo != NULL)
            no = no->proximo;
        no->proximo = novo;
    }
    lista->tam++;

}

//imprimir a lista
void inprimir(Lista *lista){
    Node *inicio = lista -> inicio;
    cout << "Tamanho da lista: "<< lista->tam << endl;
    while(inicio != NULL){
        cout << inicio -> valor << " ";
        inicio = inicio -> proximo;
    }
        cout << endl << endl;
}

int main() {
    
    Lista lista;
    int opcao, valor;

    //começa como vazia
    lista.inicio = NULL;
    lista.tam = 0;

    do{
        cout << "1 - Inserir no inicio" << endl;
        cout << "2 - Imprimir" << endl;
        cout << "3 - Inserir no final" << endl;
        cout << "5 - sair"<< endl;
        cin >> opcao;
        switch(opcao){
            case 1:
            cout << "digite um valor a ser iserido" << endl;
            cin >> valor;
            inserirInicio(&lista, valor);
            break;

            case 2:
            inprimir(&lista);
            break;

            case 3:
            cout << "digite um valor a ser iserido" << endl;
            cin >> valor;
            inserirFim(&lista, valor);
            break;

            case 5:
            cout << "Saindo..." << endl;
            break;

            default:
            cout << "Opcao invalida" << endl;
        }
    }while(opcao != 5);

    return 0;
}
