#include <iostream>

class Student
{
private:
    std::string name;
    std::string surname;
    int age;
    int index;
    std::string pesel;

    /*
     * Check if the pesel is valid
     * @param std::string pesel to check
     * @return int 0 if pesel is valid, 1 if pesel is too short or too long, 2 if pesel contains non-digit characters
     */
    int checkPesel(std::string pesel);

    /*
     * Method to set the age of the student
     * @param std::string pesel of the student
     */
    void setAge(std::string pesel);

public:
    /*
     * Method to get the name of the student
     * @return name of the student
     */
    std::string getName();

    /*
     * Method to set the name of the student
     * @param std::string name of the student
     */
    void setName(std::string name);

    /*
     * Method to get the surname of the student
     * @return surname of the student
     */
    std::string getSurname();

    /*
     * Method to set the surname of the student
     * @param std::string surname of the student
     */
    void setSurname(std::string surname);

    /*
     * Method to get the age of the student
     * @return age of the student
     */
    int getIndex();

    /*
     * Method to set the age of the student
     * @param int age of the student
     */
    void setIndex(int index);

    /*
     * Method to get the pesel of the student
     * @return pesel of the student
     */
    std::string getPesel();

    /*
     * Method to set the pesel of the student
     * @param std::string pesel of the student
     * @return 0 if pesel is valid, 1 if pesel is too short or too long, 2 if pesel contains non-digit characters
     */
    int setPesel(std::string pesel);

    /*
     * Method to get the age of the student
     * @return age of the student
     */
    int getAge();
};