#include "Person.h"

class Employee : public Person, public Identifiable
{
private:
    std ::string cardNumber;
    std::string position;   
    std::string type = "Employee";
    std::string id = cardNumber;

public:
    /*
     * Method to get the card number of the employee
     * @return std::string card number of the employee
     */
    std::string getCardNumber();

    /*
     * Method to set the card number of the employee
     * @param std::string card number of the employee
     */
    void setCardNumber(std::string cardNumber);

    /*
     * Method to get the position of the employee
     * @return std::string position of the employee
     */
    std::string getPosition();

    /*
     * Method to set the position of the employee
     * @param std::string position of the employee
     */
    void setPosition(std::string position);

    /*
     * Method to get the type of the employee
     * @return std::string type of the employee
     */
    std::string getType();

    /*
     * Method to get the id of the employee
     * @return std::string id of the employee
     */
    std::string getId();

    /*
     * Method to get the string representation of the employee
     * @return std::string string representation of the employee
     */
    std::string toString();
};