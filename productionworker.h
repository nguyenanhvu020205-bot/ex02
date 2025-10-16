#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include <iostream>
#include <string>
using namespace std;

class ProductionWorker {
private:
    int id;
    string lastName;
    string firstName;
    int yearOfBirth;
    string address;
    string phone;
    string job;
    string department;
    double salary;
    double allowance;
    double gradeLevel;

public:
    ProductionWorker();
    void setId(int id);
    void setLastName(string lastName);
    void setFirstName(string firstName);
    void setYearOfBirth(int year);
    void setAddress(string address);
    void setPhone(string phone);
    void setJob(string job);
    void setDepartment(string dept);
    void setSalary(double salary);
    void setAllowance(double allowance);
    void setGradeLevel(double gradeLevel);

    void display();
};

#endif
