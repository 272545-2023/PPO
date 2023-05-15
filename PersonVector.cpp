#include "PersonVector.h"

void PersonVector::addPerson(Person person)
{
    personVector.push_back(person);
}

int PersonVector::getPersonCount()
{
    return personVector.size();
}

int PersonVector::getStudentCount()
{
    int studentCount = 0;
    for (int i = 0; i < personVector.size(); i++)
    {
        if (personVector[i].getType() == "Student")
        {
            studentCount++;
        }
    }
    return studentCount;
}

int PersonVector::getEmployeeCount()
{
    int employeeCount = 0;
    for (int i = 0; i < personVector.size(); i++)
    {
        if (personVector[i].getType() == "Employee")
        {
            employeeCount++;
        }
    }
    return employeeCount;
}

Person PersonVector::getPersonById(int index)
{
    return personVector[index];
}

void PersonVector::removePersonById(int index)
{
    personVector.erase(personVector.begin() + index);
}

void PersonVector::removePerson(Person person)
{
    for (int i = 0; i < personVector.size(); i++)
    {
        if (personVector[i].getPesel() == person.getPesel())
        {
            personVector.erase(personVector.begin() + i);
        }
    }
}

Person PersonVector::getPersonByName(std::string name)
{
    Person person;
    for (int i = 0; i < personVector.size(); i++)
    {
        if (personVector[i].getName() == name)
        {
            person = personVector[i];
        }
    }
    return person;
}

Person PersonVector::getPersonBySurname(std::string surname)
{
    Person person;
    for (int i = 0; i < personVector.size(); i++)
    {
        if (personVector[i].getSurname() == surname)
        {
            person = personVector[i];
        }
    }
    return person;
}

Person PersonVector::getPersonByPesel(std::string pesel)
{
    Person person;
    for (int i = 0; i < personVector.size(); i++)
    {
        if (personVector[i].getPesel() == pesel)
        {
            person = personVector[i];
        }
    }
    return person;
}

PersonVector::~PersonVector()
{
}