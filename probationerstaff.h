#ifndef PROBATIONERSTAFF_H
#define PROBATIONERSTAFF_H

#include <iostream>
#include <string>
using namespace std;

class ProbationerStaff {
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
    double probationPeriod;

public:
    ProbationerStaff();
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
    void setProbationPeriod(double period);

    void display();
};

#endif
