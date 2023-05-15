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
    return "Employee:\nName=" + getName() + "\nSurname=" + getSurname() + "\nAge=" + std::to_string(getAge()) + "\nPesel=" +getPesel() + "\nCard_number=" + getCardNumber() + "\nPosition=" + getPosition();
}