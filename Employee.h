#include "Person.h"

class Employee : public Person
{
private:
    std ::string cardNumber;
    std::string position;   

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
};