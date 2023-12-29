#include "Worker.h"

Worker::Worker(const std::string& name, const std::string& pos, int year, double sal)
    : fullName(name), position(pos), startYear(year), salary(sal) {}

const std::string& Worker::getName() const {
    return fullName;
}

const std::string& Worker::getPosition() const {
    return position;
}

int Worker::getStartYear() const {
    return startYear;
}

double Worker::getSalary() const {
    return salary;
}