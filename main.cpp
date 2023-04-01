#include "ui.h"
#include "Students.h"
#include <iostream>
#include <vector>

using namespace std;

StudentsVector students;

int main()
{
    ui();
    bool exit = false;
    while (!exit)
    {
        cout << endl << "__MENU__" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Get student" << endl;
        cout << "3. Get number of students" << endl;
        cout << "4. Exit" << endl;
        int choice;
        cin >> choice;
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
                cout << "1. Get student by index" << endl;
                cout << "2. Get student by pesel" << endl;
                int choice;
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    cout << "Index: ";
                    int index;
                    cin >> index;
                    Student s = students.getStudent(index);
                    if (s.getName() == "")
                    {
                        cout << "Student not found" << endl;
                        break;
                    } else {
                        cout << "Name: " << s.getName() << endl;
                        cout << "Surname: " << s.getSurname() << endl;
                        cout << "Pesel: " << s.getPesel() << endl;
                        cout << "Index: " << s.getIndex() << endl;
                        break;
                    }
                    break;
                }
                case 2:
                {
                    cout << "Pesel: ";
                    string pesel;
                    cin >> pesel;
                    Student s = students.getStudent(pesel);
                    if (s.getName() == "")
                    {
                        cout << "Student not found" << endl;
                        break;
                    }
                    cout << "Name: " << s.getName() << endl;
                    cout << "Surname: " << s.getSurname() << endl;
                    cout << "Pesel: " << s.getPesel() << endl;
                    cout << "Index: " << s.getIndex() << endl;
                    break;
                }
                }
                break;
            }
            case 3:
            {
                cout << "Number of students: " << students.getNumStudents() << endl;
                break;
            }
            case 4:
            {
                exit = true;
                break;
            }
            default:
            {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }

    return 0;
}