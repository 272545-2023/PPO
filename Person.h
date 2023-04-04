#include <iostream>
#include <string>
#include <vector>

class Person
{
protected:
    std::string name;
    std::string surname;
    std::string pesel;
    int age;

    /*
        * Check if the pesel is valid
        * @param std::string pesel to check
        * @return int 0 if pesel is valid, 1 if pesel is too short or too long, 2 if pesel contains non-digit characters
        *
    */
    int checkPesel(std::string pesel);

    /*
        * Method to set the age of the person
        * @param std::string pesel of the person
        *
    */
    void setAge(std::string pesel);

public:

    /*
        * Method to get the name of the person
        * @return name of the person
        *
    */
    std::string getName();
    

    /*
        * Method to get the surname of the person
        * @return surname of the person
        *
    */
    std::string getSurname();

    /*
        * Method to get the pesel of the person
        * @return pesel of the person
        *
    */
    std::string getPesel();

    
    /*
        * Method to get the age of the person
        * @return age of the person
        *
    */
    int getAge();

    /*
        * Method to set the name of the person
        * @param std::string name of the person
        *
    */
    void setName(std::string name);
    

    /*
        * Method to set the surname of the person
        * @param std::string surname of the person
        *
    */
    void setSurname(std::string surname);

    /*
        * Method to set the pesel of the person
        * @param std::string pesel of the person
        * @return int 0 if pesel is valid, 1 if pesel is too short or too long, 2 if pesel contains non-digit characters
        *
    */
    int setPesel(std::string pesel);
};
