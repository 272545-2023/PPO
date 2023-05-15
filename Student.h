#include "Person.h"

class Student : public Person, public Identifiable
{
private:
    std::string index;
    std::string type = "Student";
    std::string id = index;

public:
    /*
     * Method to get the index of the student
     * @return string index of the student
     */
    std::string getIndex();

    /*
     * Method to set the index of the student
     * @param int age of the student
     */
    void setIndex(int index);

    /*
     * Method to get the type of the student
     * @return std::string type of the student
     */
    std::string getType();

    /*
     * Method to get the id of the student
     * @return std::string id of the student
     */
    std::string getId();


    /*
     * Method to get the string representation of the student
     * @return std::string string representation of the student
     */
    std::string toString();
};