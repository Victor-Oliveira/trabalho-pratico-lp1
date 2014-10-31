#ifndef _NODE_H_
#define _NODE_H_

using std::cout;
using std::endl;

template <class T>
class Node{
  private:
    T info;
    Node *next;

  public:
    Node() : next(NULL) {};
    Node(T a) : info(a) {};
    Node(Node *a) : next(a) {};
    Node(T a, Node *b) : info(a), next(b) {};
   ~Node(){};
    void setInfo(T b){ info = b; };
    T getInfo() { return info; };
    void setNext(Node<T> *b) { next = b; };
    Node<T> *getNext() { return next; };
};

#endif