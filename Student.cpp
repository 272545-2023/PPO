#include <iostream>
#include "Student.h"

std::string Student::getIndex()
{
    return index;
}

void Student::setIndex(int index)
{
    this->index = index;
}

std::string Student::getType()
{
    return type;
}

std::string Student::getId()
{
    return id;
}

std::string Student::toString()
{
    return "Student:\nName=" + getName() + "\nSurname=" + getSurname() + "\nAge=" + std::to_string(getAge()) + "\nPesel=" + getPesel() + "\nIndex=" + getIndex() + "\n";
}