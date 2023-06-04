#pragma once
#include <iostream>

using namespace std;

template<typename T>
class Node {
public:
    T data;
    Node* next;
};

template<typename T>
class LinkedList {
public:
    LinkedList();
    void addNode(const T& newData);
    void display();
    LinkedList<T> operator+(T c);
    bool operator==(T c);
private:
    Node<T>* head;
};

template<typename T>
LinkedList<T>::LinkedList() {
    head = nullptr;
}

template<typename T>
void LinkedList<T>::addNode(const T& newData) {
    Node<T>* newNode = new Node<T>;
    newNode->data = newData;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node<T>* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}


template<typename T>
void LinkedList<T>::display() {
    Node<T>* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

template<typename T>
LinkedList<T> LinkedList<T>::operator+(T c) {
    LinkedList<T> result;
    Node<T>* newNode = new Node<T>;
    newNode->data = c;
    newNode->next = head;
    result.head = newNode;
    return result;
}

template<typename T>
bool LinkedList<T>::operator==(T c) {
    Node<T>* current = head;
    while (current != nullptr) {
        if (current->data == c) {
            return true;
        }
        current = current->next;
    }
    return false;
}
