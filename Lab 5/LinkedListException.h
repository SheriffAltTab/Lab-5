#pragma once
#include <stdexcept>

using namespace std;

class LinkedListException : public exception {
public:
    const char* what() const noexcept override {
        return "LinkedList Exception: Something went wrong with the linked list";
    }
};