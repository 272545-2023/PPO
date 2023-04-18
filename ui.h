#include <iostream>
#include "StudentVector.h"
#include "EmployeeVector.h"

using namespace std;

class ui {
    private:
        StudentVector students;
        EmployeeVector employees;
    public:
        void start();
        void showStudentVectorMenu();
        void handleStudentVectorChoice(int);
        void showEmployeeVectorMenu();
        void handleEmployeeVectorChoice(int);
        void handleChoice();
};
