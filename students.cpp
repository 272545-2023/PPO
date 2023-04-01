#include <iostream>
#include <vector>
#include "Students.h"

using namespace std;

int StudentsVector::addStudent(Student s)
{   
    try {
        students.push_back(s);
    }
    catch (const char* msg) {
        cerr << msg << endl;
        return 1;
    }
    return 0;
}

Student StudentsVector::getStudent(string pesel)
{
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getPesel() == pesel)
            return students[i];
    }
    return Student();
}

Student StudentsVector::getStudent(int index)
{   
    if (index < students.size() && index >= 0)
        return students[index];

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getIndex() == index)
            return students[i];
    }
    return Student();

}

int StudentsVector::getNumStudents()
{
    return students.size();
}

