#include "productionworker.h"

ProductionWorker::ProductionWorker() {}

void ProductionWorker::setId(int id) { this->id = id; }
void ProductionWorker::setLastName(string lastName) { this->lastName = lastName; }
void ProductionWorker::setFirstName(string firstName) { this->firstName = firstName; }
void ProductionWorker::setYearOfBirth(int year) { this->yearOfBirth = year; }
void ProductionWorker::setAddress(string address) { this->address = address; }
void ProductionWorker::setPhone(string phone) { this->phone = phone; }
void ProductionWorker::setJob(string job) { this->job = job; }
void ProductionWorker::setDepartment(string dept) { this->department = dept; }
void ProductionWorker::setSalary(double salary) { this->salary = salary; }
void ProductionWorker::setAllowance(double allowance) { this->allowance = allowance; }
void ProductionWorker::setGradeLevel(double gradeLevel) { this->gradeLevel = gradeLevel; }

void ProductionWorker::display() {
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
    cout << "Grade level: " << gradeLevel << endl;
}
