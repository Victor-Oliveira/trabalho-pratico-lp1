#ifndef _LIST_H_
#define _LIST_H_
#include "Node.h"

template <class T>
class List{
  private:
    int behavior;
    Node<T> *head, *tail;

  public:
    List() : behavior(1), head(new Node<T>), tail(NULL) {};
    List(T a);
   ~List() {};
    int listLength();
    void setElement(T a);
    int getElementBehavior(){ return behavior; }
    Node<T> getElement(){ return *head; }
    void insert(Node<T> *b);
    // void insert(int a);
    void remove();
    void remove(int a);
    bool isEmpty(){ if((head == NULL) && (tail == NULL)) return true; };
};

#include "List.inl"
#endif