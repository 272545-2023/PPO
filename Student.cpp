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
    return "Student:Name=" + getName() + ",Surname=" + getSurname() + ",Pesel=" + getPesel()  + ",Age=" + std::to_string(getAge())  + ",Index=" + getIndex();
}