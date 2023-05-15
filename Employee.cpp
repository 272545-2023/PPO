#include "Employee.h"

std::string Employee::getCardNumber()
{
    return cardNumber;
}

void Employee::setCardNumber(std::string cardNumber)
{
    this->cardNumber = cardNumber;
}

std::string Employee::getPosition()
{
    return position;
}

void Employee::setPosition(std::string position)
{
    this->position = position;
}

std::string Employee::getType()
{
    return type;
}

std::string Employee::getId()
{
    return id;
}

std::string Employee::toString()
{
    return "Employee:Name=" + getName() + ",Surname=" + getSurname() + ",Pesel=" +getPesel() + ",Age=" + std::to_string(getAge()) +  ",Card_number=" + getCardNumber() + ",Position=" + getPosition();
}