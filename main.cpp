#include <iostream>
#include "Worker.h"

int main() {
    const int numOfEmployees = 3;
    Worker employees[numOfEmployees] = {
        Worker("John Doe", "Manager", 2010, 50000.0),
        Worker("Jane Smith", "Engineer", 2015, 60000.0),
        Worker("Alice Johnson", "Analyst", 2012, 55000.0)
    };

    
    int requiredExperience = 5;
    std::cout << "Workers with experience more than " << requiredExperience << " years:\n";
    for (int i = 0; i < numOfEmployees; ++i) {
        if (2023 - employees[i].getStartYear() > requiredExperience) {
            std::cout << employees[i].getName() << ", Position: " << employees[i].getPosition() << "\n";
        }
    }

  
    double requiredSalary = 55000.0;
    std::cout << "\nWorkers with salary greater than " << requiredSalary << ":\n";
    for (int i = 0; i < numOfEmployees; ++i) {
        if (employees[i].getSalary() > requiredSalary) {
            std::cout << employees[i].getName() << ", Salary: " << employees[i].getSalary() << "\n";
        }
    }

    
    std::string requiredPosition = "Engineer";
    std::cout << "\nWorkers with position: " << requiredPosition << ":\n";
    for (int i = 0; i < numOfEmployees; ++i) {
        if (employees[i].getPosition() == requiredPosition) {
            std::cout << employees[i].getName() << ", Salary: " << employees[i].getSalary() << "\n";
        }
    }

    return 0;
}