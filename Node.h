#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

template <typename T>
class Node {
public:
    T data;            // Elemento almacenado de tipo genérico T
    Node<T>* next;    // Puntero al nodo siguiente

    // Constructor
    Node(T data, Node<T>* next = nullptr) : data(data), next(next) {}

    // Sobrecarga del operador <<
    friend ostream& operator<<(ostream &out, const Node<T> &node) {
        out << node.data;
        return out;
    }
};

#endif
