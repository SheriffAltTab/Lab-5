#pragma once
#include <iostream>
#include "StudentException.h"

using namespace std;

class Student {
public:
    Student() : grade(0), favoriteSubject(""), group(""), lastName("") {}

    Student(const string& newLastName, const string& newGroup, const string& newSubject, int newGrade)
        : grade(newGrade), favoriteSubject(newSubject), group(newGroup), lastName(newLastName) {
        if (newGrade < 0 || newGrade > 100) {
            throw StudentException();
        }
    }


    void setGrade(int newGrade);
    void setFavoriteSubject(const string& newSubject);

    void setGroup(const string& newGroup);

    void setLastName(const string& newLastName);

    friend ostream& operator<<(ostream& os, const Student& student);
    void print() const;

private:
    int grade;
    string favoriteSubject;
    string group;
    string lastName;
};