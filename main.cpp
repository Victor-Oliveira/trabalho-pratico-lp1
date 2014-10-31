#include <iostream>
// #include "Market.h"
// #include "Cashier.h"
#include "Node.h"
#include "List.h"

using std::cout;
using std::endl;

int main(){
  // List<int> *lista = new List<int>(11);
  List<double> *lista = new List<double>(1);
  cout << lista->getElementBehavior() << endl;
  // lista->setElement(3.2);
  cout << lista->getElement().  getInfo() << "-" << lista->getElement().getNext() << endl;
  Node<double> *a = new Node<double>(2.44, NULL);
  lista->getElement().setNext(a);
  Node<double> *b = new Node<double>(4., NULL);
  a->setNext(b);
  cout << a->getNext()->getInfo() << endl;
  lista->insert(a);
  Node<double> head = new Node<double>(lista->getElement().getNext());
  // Node<double> *aux = new Node<double>(0., (lista->getElement())); //.getNext()));
  // cout << aux->getNext()->getInfo() << endl;
  for(int i = 0; i < 2; i++){

  }
  // // c.setNext(&e);
  // // Node<int> a;
  // // a = c;
  // // cout << a.getInfo() << endl << a.getNext()->getInfo() << endl;
  // Node<int>* a = new Node<int>;
  // // a->setInfo(2);
  // cout << d.getInfo() << endl << d.getNext()->getInfo() << endl;
  // delete a;
  return 0;
}