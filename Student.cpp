#include <iostream>
#include "Student.h"

/*
 * Check if the pesel is valid
 * @param std::string pesel to check
 * @return int 0 if pesel is valid, 1 if pesel is too short or too long, 2 if pesel contains non-digit characters
 */
int Student::checkPesel(std::string pesel)
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

/*
 * Method to set the age of the student
 * @param std::string pesel of the student
 */
void Student::setAge(std::string pesel)
{
    this->age = 2020 - (1900 + (pesel[0] - '0') * 10 + (pesel[1] - '0'));
}

/*
 * Method to get the age of the student
 * @return age of the student
 */
int Student::getAge()
{
    return age;
}

/*
 * Method to get the index of the student
 * @return index of the student
 */
int Student::getIndex()
{
    return index;
}

/*
 * Method to set the index of the student
 * @param int index of the student
 */
void Student::setIndex(int index)
{
    this->index = index;
}

/*
 * Method to get the pesel of the student
 * @return pesel of the student
 */

std::string Student::getPesel()
{
    return pesel;
}

/*
 * Method to set the pesel of the student
 * @param std::string pesel of the student
 * @return 0 if pesel is valid, 1 if pesel is too short or too long, 2 if pesel contains non-digit characters
 */
int Student::setPesel(std::string pesel)
{
    int check = checkPesel(pesel);
    if (check == 0)
    {
        this->pesel = pesel;
        setAge(pesel);
    }
    return check;
}

/*
 * Method to get the surname of the student
 * @return surname of the student
 */
std::string Student::getSurname()
{
    return surname;
}

/*
 * Method to set the surname of the student
 * @param std::string surname of the student
 */
void Student::setSurname(std::string surname)
{
    this->surname = surname;
}

/*
 * Method to get the name of the student
 * @return name of the student
 */

std::string Student::getName()
{
    return name;
}

/*
 * Method to set the name of the student
 * @param std::string name of the student
 */
void Student::setName(std::string name)
{
    this->name = name;
}