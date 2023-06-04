#include "Student.h"

using namespace std;

void Student::setGrade(int newGrade)
{
    if (newGrade < 0 || newGrade > 100) {
        throw StudentException();
    }
    grade = newGrade;
}

void Student::setFavoriteSubject(const string& newSubject)
{
    favoriteSubject = newSubject;
}

void Student::setGroup(const string& newGroup)
{
    group = newGroup;
}

void Student::setLastName(const string& newLastName)
{
    lastName = newLastName;
}

void Student::print() const
{
    cout << "Last Name: " << lastName << endl;
    cout << "Group: " << group << endl;
    cout << "Favorite Subject: " << favoriteSubject << endl;
    cout << "Grade: " << grade << endl;
}

ostream& operator<<(ostream& os, const Student& student)
{
    os << "Last Name: " << student.lastName << endl;
    os << "Group: " << student.group << endl;
    os << "Favorite Subject: " << student.favoriteSubject << endl;
    os << "Grade: " << student.grade << endl << endl;
    return os;
}
