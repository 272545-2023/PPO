#include <iostream>
#include <vector>
#include "PersonVector.h"
using namespace std;

void ui()
{
    bool exit = false;
    while (!exit)
    {
        cout << endl << "Welcome to the University People Database" << endl;
        cout << "__MENU__" << endl;
        cout << "1. Students" << endl;
        cout << "2. Employees" << endl;
        cout << "3. Exit" << endl;
        int choice;
        cin >> choice;
        handleChoice(choice);

    }
    
}

void handleChoice(int choice){
    switch (choice)
    {
        case 1:
        {
            cout << "Students" << endl;
            break;
        }
        case 2:
        {
            cout << "Employees" << endl;
            break;
        }
        case 3:
        {
            cout << endl << "Thank you and have a nice day!" << endl;
            exit(0);
        }
        default:
        {
            cout << "Invalid choice" << endl;
            break;
        }
    }
}

void showStudentVectorMenu() {
    cout << endl << "__STUDENTS__" << endl;
    cout << "1. Add student" << endl;
    cout << "2. Get student" << endl;
    cout << "3. Get number of students" << endl;
    cout << "4. Exit" << endl;
    int choice;
    cin >> choice;
    handleStudentVectorChoice(choice);
}

void handleStudentVectorChoice(int choice){
    switch (choice)
    {
        case 1:
        {
            Student s;
            cout << "Name: ";
            string name;
            cin >> name;
            s.setName(name);
            cout << "Surname: ";
            string surname;
            cin >> surname;
            s.setSurname(surname);
            cout << "Pesel: ";
            string pesel;
            cin >> pesel;
            int err = s.setPesel(pesel);
            if (err == 1)
            {
                cout << "Invalid pesel" << endl;
                break;
            }
            else if (err == 2)
            {
                cout << "Pesel already exists" << endl;
                break;
            }
            cout << "Index: ";
            int index;
            cin >> index;
            s.setIndex(index);
            if (students.addStudent(s) == 0)
                cout << "Student added" << endl;
            else
                cout << "Invalid pesel" << endl;
            break;
        }
        case 2:
        {
            cout << "1. Get student by pesel" << endl;
            cout << "2. Get student by index" << endl;
            int choice;
            cin >> choice;
            switch (choice)
            {
                case 1:
                {
                    cout << "Pesel: ";
                    string pesel;
                    cin >> pesel;
                    Student s = students.getStudent(pesel);
                    if (s.getName() == "")
                        cout << "Student not found" << endl;
                    else
                        cout << s.getName() << " " << s.getSurname() << " " << s.getPesel() << " " << s.getIndex() << endl;
                    break;
                }
                case 2:
                {
                    cout << "Index: ";
                    int index;
                    cin >> index;
                    Student s = students.getStudent(index);
                    if (s.getName() == "")
                        cout << "Student not found" << endl;
                    else
                        cout << s.getName() << " " << s.getSurname() << " " << s.getPesel() << " " << s.getIndex() << endl;
                    break;
                }
                default:
                {
                    cout << "Invalid choice" << endl;
                    break;
                }
            }
            break;
        }
        case 3:
        {
            cout << "Number of students: " << students.getNumStudents()
}