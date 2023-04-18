#include "ui.h"

void ui::start() {
    cout << "Welcome to the University Management System!" << endl;
    handleChoice();
}

void ui::showStudentVectorMenu() {
    cout << endl << "__STUDENT VECTOR MENU__" << endl;
    cout << "1. Add student" << endl;
    cout << "2. Get student" << endl;
    cout << "3. Get number of students" << endl;
    cout << "4. Exit" << endl;
}

void ui::handleStudentVectorChoice(int choice) {
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
            students.addPerson(s);
            cout << "Student added" << endl;
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
                Student s = students.getStudentByIndex(index);
                cout << "Name: " << s.getName() << endl;
                cout << "Surname: " << s.getSurname() << endl;
                cout << "Pesel: " << s.getPesel() << endl;
                cout << "Index: " << s.getIndex() << endl;
                break;
            }
            case 2:
            {
                cout << "Pesel: ";
                string pesel;
                cin >> pesel;
                Student s = students.getPersonByPesel(pesel);
                cout << "Name: " << s.getName() << endl;
                cout << "Surname: " << s.getSurname() << endl;
                cout << "Pesel: " << s.getPesel() << endl;
                cout << "Index: " << s.getIndex() << endl;
                break;
            }
            default:
                cout << "Invalid choice" << endl;
                break;
            }
            break;