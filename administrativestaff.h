#ifndef ADMINISTRATIVESTAFF_H
#define ADMINISTRATIVESTAFF_H

#include <iostream>
#include <string>
using namespace std;

class AdministrativeStaff {
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
    double seniority;

public:
    AdministrativeStaff();
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
    void setSeniority(double seniority);

    int getId();
    string getLastName();
    string getFirstName();
    int getYearOfBirth();
    string getAddress();
    string getPhone();
    string getJob();
    string getDepartment();
    double getSalary();
    double getAllowance();
    double getSeniority();

    void display();
};

#endif
