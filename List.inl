#include <iostream>
#include "List.h"

template <class T>
List<T>::List(T a){
  if((a < 1) || (a > 3)){
    cout << "Error: List's behavior should be:\n  1: For simple linked list.\n  2: For queue.\n  3: For stack\n";
  }
  else{
    behavior = a;
    if(a == 1){
      head = new Node<T>;
    }
    else if(a == 2){
      head = new Node<T>;
      tail = new Node<T>;
    }
    else{
      tail = new Node<T>;
    }
  }
}

template <class T>
void List<T>::setElement(T a){ head->setInfo(a); }

template <class T>
int List<T>::listLength(){
  if(!isEmpty()){
    int counter;
    Node<T> *aux = new Node<T>;
    while(aux->next != NULL){
      aux->setNext(*aux->getNext());
      counter++;
    }
    return counter;
  }
  else return 0;
}

template <class T>
void List<T>::insert(Node<T> *b){
  if(isEmpty()){
    head->setNext(b);
    b->setNext(NULL);
  }
  else{
    Node<T> *aux = new Node<T>;
    while(aux->getNext() != NULL){
      if(aux->getNext() == NULL){
        aux->setNext(b);
        b->setNext(NULL);
        tail->setNext(b);
      }
      aux->setNext(aux->getNext());
    }
  }
}
