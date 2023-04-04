#include "Person.h"

class Student : public Person
{
private:
    int index;

public:
    /*
     * Method to get the index of the student
     * @return _int_ index of the student
     */
    int getIndex();

    /*
     * Method to set the index of the student
     * @param int age of the student
     */
    void setIndex(int index);
};