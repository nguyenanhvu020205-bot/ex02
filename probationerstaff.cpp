#include "probationerstaff.h"

ProbationerStaff::ProbationerStaff() {}

void ProbationerStaff::setId(int id) { this->id = id; }
void ProbationerStaff::setLastName(string lastName) { this->lastName = lastName; }
void ProbationerStaff::setFirstName(string firstName) { this->firstName = firstName; }
void ProbationerStaff::setYearOfBirth(int year) { this->yearOfBirth = year; }
void ProbationerStaff::setAddress(string address) { this->address = address; }
void ProbationerStaff::setPhone(string phone) { this->phone = phone; }
void ProbationerStaff::setJob(string job) { this->job = job; }
void ProbationerStaff::setDepartment(string dept) { this->department = dept; }
void ProbationerStaff::setSalary(double salary) { this->salary = salary; }
void ProbationerStaff::setAllowance(double allowance) { this->allowance = allowance; }
void ProbationerStaff::setProbationPeriod(double period) { this->probationPeriod = period; }

void ProbationerStaff::display() {
    cout << "-------------------------------------\n";
    cout << "ID: " << id << endl;
    cout << "Full name: " << lastName << " " << firstName << endl;
    cout << "Year of birth: " << yearOfBirth << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: " << phone << endl;
    cout << "Job: " << job << endl;
    cout << "Department: " << department << endl;
    cout << "Salary: " << salary << endl;
    cout << "Allowance: " << allowance << endl;
    cout << "Probation period: " << probationPeriod << " years" << endl;
}
