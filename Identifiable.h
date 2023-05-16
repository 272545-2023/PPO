#ifndef IDENTIFIABLE_H
#define IDENTIFIABLE_H
#include <string>

class Identifiable {
    virtual std::string getType() = 0;
    virtual std::string getId() = 0;
};
#endif