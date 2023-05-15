#include <iostream>
#include "Person.h"
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

class PersonVector
{
    protected:
        vector<Person> personVector;
    public:
        /*
         * Method to add a person to the vector
         * @param Person person to add
         */
        void addPerson(Person person);


        /*
         * Method to get the number of persons in the vector
         * @return int number of persons in the vector
         */
        int getPersonCount();

        /*
         * Method to get the number of students in the vector
         * @return int number of students in the vector
         */
        int getStudentCount();


        /*
         * Method to get the number of employees in the vector
         * @return int number of employees in the vector
         */
        int getEmployeeCount();


        /*
         * Method to remove a person from the vector
         * @param int index of the person in the vector
         */
        void removePersonById(int Id);

        /*
         * Method to remove a person from the vector
         * @param Person person to remove
         */
        void removePerson(Person person);

        /*
         * Method to get a person from the vector
         * @param int index of the person in the vector
         * @return Person person from the vector
         */
        Person getPersonById(int index);


        /*
         * Method to get a person from the vector
         * @param std::string name of the person
         * @return Person person from the vector
         */
        Person getPersonByName(std::string name);

        /*
         * Method to get a person from the vector
         * @param std::string surname of the person
         * @return Person person from the vector
         */
        Person getPersonBySurname(std::string surname);

        /*
         * Method to get a person from the vector
         * @param std::string pesel of the person
         * @return Person person from the vector
         */
        Person getPersonByPesel(std::string pesel);

        //save to file
        void saveToFile();

        //load from file
        void loadFromFile();

        void printAll();


};
