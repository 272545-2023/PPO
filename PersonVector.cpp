#include "PersonVector.h"

void PersonVector::addPerson(Person person)
{
    personVector.push_back(person);
}

int PersonVector::getPersonCount()
{
    return personVector.size();
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
    for (int i = 0; i < personVector.size(); i++)
    {
        if (personVector[i].getName() == name)
        {
            return personVector[i];
        }
    }
}

Person PersonVector::getPersonBySurname(std::string surname)
{
    for (int i = 0; i < personVector.size(); i++)
    {
        if (personVector[i].getSurname() == surname)
        {
            return personVector[i];
        }
    }
}

Person PersonVector::getPersonByPesel(std::string pesel)
{
    for (int i = 0; i < personVector.size(); i++)
    {
        if (personVector[i].getPesel() == pesel)
        {
            return personVector[i];
        }
    }
}

Person PersonVector::getPersonByAge(int age)
{
    for (int i = 0; i < personVector.size(); i++)
    {
        if (personVector[i].getAge() == age)
        {
            return personVector[i];
        }
    }
}