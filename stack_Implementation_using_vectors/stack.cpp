#include <iostream>
#include "stack.h"

using namespace std;

stack::stack() {
    size = 0; 
    structure = new typeItem[maxItems];
    
}

stack::~stack() {
    delete[] structure;
}

bool stack::isEmpety() {
    return (size == 0);
}

bool stack::isFull() {
    return (size == maxItems);
}

void stack::push(typeItem item) {
    if (!isFull()) {
        structure[size++] = item;
    }
    cout << "Pilha cheia!" << endl;
    return;
}

typeItem stack::pop() {
    if (!isEmpety()) {
        return structure[--size];
    } 

    cout << "Stack is empty, cannot pop item." << endl;
    return -1;
}

void stack::printStack() {
    if (isEmpety()) {
        cout << "Stack is empty." << endl;
    }

    cout << "[";

    for (int i = 0; i < size; i++) {
        cout << structure[i] << ", ";
    }
    cout << "]" << endl;
}

typeItem stack::length() {
    return size;
}