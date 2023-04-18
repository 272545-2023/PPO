#include <string>

class Identifiable {
    virtual std::string getType() = 0;
    virtual std::string getId() = 0;
};