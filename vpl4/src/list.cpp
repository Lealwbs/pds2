#include "list.hpp"

#include <iostream>

void List::insertNode(int data) {
    Node* aux = new Node;
    aux->data = data;
    aux->next = nullptr;
    if (head == nullptr) {
        head = aux;
        tail = aux;
    } else {
        tail->next = aux;
        tail = aux;
    }
}

void List::display() {
    Node* aux = head;
    while (aux != nullptr) {
        cout << aux->data << " ";
        aux = aux->next;
    }
    cout << endl;
}

// Você deverá implementar apenas esse método_
void List::inverte() {
    Node* atual = this->head;
    Node* aux = nullptr;
    Node* prox = nullptr;

    int control = 0;

    while (atual != nullptr) {
        prox = atual->next;
        atual->next = aux;
        aux = atual;
        atual = prox;
    };

    if (control==0) { // Precisa disso se quiser saber qm é o tail
        this->tail = aux;
        control++;
    };
    this->head = aux;

}
