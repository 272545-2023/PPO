#include <iostream>
#include <vector>
#include "Student.h"
#include "Students.h"

using namespace std;

// // Print all students in the vector
// void printStudents(vector<Student> students)
// {
//     for (Student s : students)
//         cout << s.getName() << " " << s.getSurname() << " " << s.getIndex() << " " << s.getPesel() << endl;
// }
// // Add a student to the vector
// void addStudent(vector<Student> *students)
// {
//     Student student;
//     string name, surname, pesel;
//     int index;
//     cout << "Enter name: ";
//     cin >> name;
//     student.setName(name);
//     cout << "Enter surname: ";
//     cin >> surname;
//     student.setSurname(surname);
//     cout << "Enter index: ";
//     cin >> index;
//     student.setIndex(index);
//     cout << "Enter pesel: ";
//     cin >> pesel;
//     int code = student.setPesel(pesel);
//     if (code != 0)
//     {
//         cout << "Incorrect pesel!" << endl;
//         cout << "Please try again!" << endl;
//         return;
//     }
//     students.push_back(student);
// }