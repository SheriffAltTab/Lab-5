#pragma once
#include <stdexcept>

using namespace std;

class StudentException : public exception {
public:
    const char* what() const noexcept override {
        return "Student Exception: Something went wrong with the student";
    }
};