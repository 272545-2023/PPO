#include <iostream>
#include <vector>
#include "Student.h"
#include "Employee.h"
#include "PersonVector.h"

using namespace std;

PersonVector *people;

void showStudentMenu()
{
    cout << endl << "__STUDENT MENU__" << endl;
    cout << "1. Add student" << endl;
    cout << "2. Get student" << endl;
    cout << "3. Get number of students" << endl;
}

void showEmployeeMenu()
{
    cout << endl << "__EMPLOYEE MENU__" << endl;
    cout << "1. Add employee" << endl;
    cout << "2. Get employee" << endl;
    cout << "3. Get number of employees" << endl;
}

Student addStudent(){
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
        return s;
    }
    else if (err == 2)
    {
        cout << "Pesel already exists" << endl;
        return s;
    }
    cout << "Index: ";
    int index;
    cin >> index;
    s.setIndex(index);
    return s;
}

Employee addEmployee(){
    Employee e;
    cout << "Name: ";
    string name;
    cin >> name;
    e.setName(name);
    cout << "Surname: ";
    string surname;
    cin >> surname;
    e.setSurname(surname);
    cout << "Pesel: ";
    string pesel;
    cin >> pesel;
    int err = e.setPesel(pesel);
    if (err == 1)
    {
        cout << "Invalid pesel" << endl;
        return e;
    }
    else if (err == 2)
    {
        cout << "Pesel already exists" << endl;
        return e;
    }
    cout << "Card number: ";
    string cardNumber;
    cin >> cardNumber;
    e.setCardNumber(cardNumber);
    cout << "Position: ";
    string position;
    cin >> position;
    e.setPosition(position);
    return e;
}

int main()
{
    bool exit = false;
    while (!exit)
    {

        cout << endl << "__MENU__" << endl;
        cout << "1. Student menu" << endl;
        cout << "2. Employee menu" << endl;
        cout << "3. Save to file" << endl;
        cout << "4. Load from file" << endl;
        cout << "5. Exit" << endl;
        int choice;
        cin >> choice;
        Person *p = nullptr;
        Student st = Student();
        switch(choice){
            case 1:
                showStudentMenu();
                cout << "Choice: ";
                cin >> choice;
                
                switch (choice)
                {
                    case 1:
                        st = addStudent();
                        p = &st;
                        people->addPerson(p);
                        // people->printAll();
                        break;
                    case 2:{
                        cout << "Index: ";
                        int index;
                        cin >> index;
                        Student* s = (Student*)people->getPersonById(index);
                        cout << s->toString() << endl;
                        break;
                    }

                    case 3:
                        cout << "Number of students: " << people->getStudentCount() << endl;
                        break;
                    default:
                        cout << "Invalid choice" << endl;
                        break;
                }
                break;
            // case 2:
            //     showEmployeeMenu();
            //     cout << "Choice: ";
            //     cin >> choice;
            //     switch (choice)
            //     {
            //         case 1:
            //             p = addEmployee();
            //             people.addPerson(p);
            //             people.printAll();
            //             break;
            //         case 2:
            //             cout << "Index: ";
            //             int index;
            //             cin >> index;
            //             cout << people.getPersonById(index).toString() << endl;
            //             break;
            //         case 3:
            //             cout << "Number of employees: " << people.getEmployeeCount() << endl;
            //             break;
            //         default:
            //             cout << "Invalid choice" << endl;
            //             break;
            //     }
            // case 3:
            //     people.saveToFile();
            //     break;
            // case 4:
            //     people.loadFromFile();
            //     break;
            case 2:
                exit = true;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
            

        }
    }
    return 0;
}