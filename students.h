#include <iostream>
#include <vector>
#include "Student.h"

using namespace std;

class StudentsVector
{
private:
    vector<Student> students;
public:
    /*
        * Method to add a student to the vector
        * @param Student s - student to add
        * @return int 0 if the student was added, 1 if there was an error
    */
    int addStudent(Student s);

    /*
        * Method to get the student with the given pesel
        * @param string pesel - pesel of the student
        * @return Student with the given pesel
    */
    Student getStudent(string pesel);

    /*
        * Method to get the student with the given index
        * @param int index - index of the student
        * @return Student with the given index
    */
    Student getStudent(int index);

    /*
        * Method to get the number of students in the array
        * @return int number of students in the array
    */
    int getNumStudents();
};