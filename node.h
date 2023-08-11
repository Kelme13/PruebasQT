#ifndef NODE_H
#define NODE_H


class Node
{
public:
    Node(int value);
    int Value;
    //Valores para movimiento
    int x;
    int y;

    Node* Padre = nullptr;
    Node* NodoDerecho = nullptr;
    Node* NodoIzquierdo = nullptr;
};

#endif // NODE_H
