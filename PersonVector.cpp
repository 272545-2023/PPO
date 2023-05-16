#include "PersonVector.h"

void PersonVector::addPerson(Person* person)
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
        if (personVector[i]->getType() == "Student")
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
        if (personVector[i]->getType() == "Employee")
        {
            employeeCount++;
        }
    }
    return employeeCount;
}

Person* PersonVector::getPersonById(int index)
{
    return personVector[index];
}

void PersonVector::removePersonById(int index)
{
    personVector.erase(personVector.begin() + index);
}

void PersonVector::removePerson(Person* person)
{
    for (int i = 0; i < personVector.size(); i++)
    {
        if (personVector[i]->getPesel() == person->getPesel())
        {
            personVector.erase(personVector.begin() + i);
        }
    }
}

Person PersonVector::getPersonByName(std::string name)
{
    Person* person;
    for (int i = 0; i < personVector.size(); i++)
    {
        if (personVector[i]->getName() == name)
        {
            person = personVector[i];
        }
    }
    return *person;
}

Person PersonVector::getPersonBySurname(std::string surname)
{
    Person* person;
    for (int i = 0; i < personVector.size(); i++)
    {
        if (personVector[i]->getSurname() == surname)
        {
            person = personVector[i];
        }
    }
    return *person;
}

Person PersonVector::getPersonByPesel(std::string pesel)
{
    Person* person;
    for (int i = 0; i < personVector.size(); i++)
    {
        if (personVector[i]->getPesel() == pesel)
        {
            person = personVector[i];
        }
    }
    return *person;
}

void PersonVector::printAll()
{
    for (int i = 0; i < personVector.size(); i++)
    {
        std::cout << personVector[i]->toString() << std::endl;
    }
}

void PersonVector::saveToFile()
{
    std::ofstream file;
    file.open("data.txt");
    for (int i = 0; i < personVector.size(); i++)
    {
        file << personVector[i]->toString() << std::endl;
    }
    file.close();
}

void PersonVector::loadFromFile()
{
    std::ifstream file;
    file.open("data.txt");
    std::string line;
    while (std::getline(file, line))
    {
        Person person;
        stringstream ss(line);
        string name, surname, pesel;
        ss.ignore(12); // Ignoruj "Person:Name="

        getline(ss, name, ',');

        ss.ignore(9); // Ignoruj "Surname="

        getline(ss, surname, ',');

        ss.ignore(6); // Ignoruj "Pesel="

        getline(ss, pesel, ',');

        // Ustaw wartości w obiekcie Person
        person.setName(name);
        person.setSurname(surname);
        person.setPesel(pesel);
        personVector.push_back(&person);
    }
    file.close();
}

