#include "administrativestaff.h"

AdministrativeStaff::AdministrativeStaff() {}

void AdministrativeStaff::setId(int id) { this->id = id; }
void AdministrativeStaff::setLastName(string lastName) { this->lastName = lastName; }
void AdministrativeStaff::setFirstName(string firstName) { this->firstName = firstName; }
void AdministrativeStaff::setYearOfBirth(int year) { this->yearOfBirth = year; }
void AdministrativeStaff::setAddress(string address) { this->address = address; }
void AdministrativeStaff::setPhone(string phone) { this->phone = phone; }
void AdministrativeStaff::setJob(string job) { this->job = job; }
void AdministrativeStaff::setDepartment(string dept) { this->department = dept; }
void AdministrativeStaff::setSalary(double salary) { this->salary = salary; }
void AdministrativeStaff::setAllowance(double allowance) { this->allowance = allowance; }
void AdministrativeStaff::setSeniority(double seniority) { this->seniority = seniority; }

int AdministrativeStaff::getId() { return id; }
string AdministrativeStaff::getLastName() { return lastName; }
string AdministrativeStaff::getFirstName() { return firstName; }
int AdministrativeStaff::getYearOfBirth() { return yearOfBirth; }
string AdministrativeStaff::getAddress() { return address; }
string AdministrativeStaff::getPhone() { return phone; }
string AdministrativeStaff::getJob() { return job; }
string AdministrativeStaff::getDepartment() { return department; }
double AdministrativeStaff::getSalary() { return salary; }
double AdministrativeStaff::getAllowance() { return allowance; }
double AdministrativeStaff::getSeniority() { return seniority; }

void AdministrativeStaff::display() {
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
    cout << "Seniority: " << seniority << " years" << endl;
}
