#include <iostream>
#include "Person.h"

int Person::checkPesel(std::string pesel)
{
    if (pesel.length() != 11)
        return 1;
    for (int i = 0; i < 11; i++)
    {
        if (pesel[i] < '0' || pesel[i] > '9')
            return 2;
    }
    return 0;
};

void Person::setAge(std::string pesel)
{
    this->age = 2020 - (1900 + (pesel[0] - '0') * 10 + (pesel[1] - '0'));
}

std::string Person::getName()
{
    return name;
}

std::string Person::getSurname()
{
    return surname;
}

std::string Person::getPesel()
{
    return pesel;
}

int Person::getAge()
{
    return age;
}

void Person::setName(std::string name)
{
    this->name = name;
}

void Person::setSurname(std::string surname)
{
    this->surname = surname;
}

int Person::setPesel(std::string pesel)
{
    int check = checkPesel(pesel);
    if (check == 0){
        this->pesel = pesel;
        setAge(pesel);
    } else
        std::cout << "Wrong pesel" << std::endl;
    return check;
}

std::string Person::toString()
{
    return "Person:Name=" + name + "\nSurname=" + surname + "\nPesel=" + pesel + "\nAge=" + std::to_string(age);
}

Person::~Person()
{
}