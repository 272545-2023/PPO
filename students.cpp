#include <iostream>
#include <vector>
#include "structStudents.h"

using namespace std;

// Print all students in the vector
void printStudents(vector<Student> students)
{
    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i].name << " " << students[i].surname << " is " << students[i].age << " years old." << endl;
        cout << "His index is " << students[i].index << endl;
    }
}
// Add a student to the vector
void addStudent(vector<Student> &students)
{
    Student student;
    cout << "Enter name: ";
    cin >> student.name;
    cout << "Enter surname: ";
    cin >> student.surname;
    cout << "Enter age: ";
    cin >> student.age;
    cout << "Enter index: ";
    cin >> student.index;
    students.push_back(student);
}