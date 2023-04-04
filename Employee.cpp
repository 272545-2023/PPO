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