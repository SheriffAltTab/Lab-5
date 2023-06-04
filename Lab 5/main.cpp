#include <iostream>
#include "LinkedListException.h"
#include "LinkedList.h"
#include "Student.h"
#include "StudentException.h"

using namespace std;

void testTemplates() {
    try {
        LinkedList<Student> students;

        Student student1("Joestar", "A", "Math", 85);
        Student student2("Brando", "B", "Science", 92);
        Student student3("Kishibe", "C", "Art", 100);
        students.addNode(student1);
        students.addNode(student2);
        students.addNode(student3);

        students.display();
    }
    catch (const LinkedListException& e) {
        cerr << e.what() << endl;
    }
    catch (const StudentException& e) {
        cerr << e.what() << endl;
    }
    catch (const exception& e) {
        cerr << "Standard Exception: " << e.what() << endl;
    }
    catch (...) {
        cerr << "Unknown Exception occurred" << endl;
    }

}


void testDefaultDataType() {
    try {
        LinkedList<int> intList;

        intList.addNode(10);
        intList.addNode(20);
        intList.addNode(30);

        cout << "What's in the box? - ";
        intList.display();
        cout << endl;
    }
    catch (const out_of_range& e) {
        cout << "Exception: " << e.what() << endl;
    }

}


int main() {
    testDefaultDataType();


    cout << endl;

    testTemplates();
    return 0;
}