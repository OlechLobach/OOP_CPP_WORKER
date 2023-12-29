#ifndef WORKER_H
#define WORKER_H
#include <iostream>
#include <string>

class Worker {
private:
    std::string fullName;
    std::string position;
    int startYear;
    double salary;

public:
    explicit Worker(const std::string& name, const std::string& pos, int year, double sal);
    const std::string& getName() const;
    const std::string& getPosition() const;
    int getStartYear() const;
    double getSalary() const;
};

#endif 
