#include <iostream>
#include "administrativestaff.h"
#include "probationerstaff.h"
#include "productionworker.h"
using namespace std;

int main() {
    AdministrativeStaff staff[3];

    staff[0].setId(1);
    staff[0].setLastName("Nguyen Anh");
    staff[0].setFirstName("Tuan");
    staff[0].setYearOfBirth(1990);
    staff[0].setAddress("20 Tang Nhon Phu");
    staff[0].setPhone("0902880088");
    staff[0].setJob("Programmer");
    staff[0].setDepartment("IT");
    staff[0].setSalary(30000000);
    staff[0].setAllowance(300000);
    staff[0].setSeniority(3);

    staff[1].setId(2);
    staff[1].setLastName("Huynh Tan");
    staff[1].setFirstName("Phat");
    staff[1].setYearOfBirth(1995);
    staff[1].setAddress("21 Tang Nhon Phu");
    staff[1].setPhone("0845550555");
    staff[1].setJob("Programmer");
    staff[1].setDepartment("IT");
    staff[1].setSalary(5000000);
    staff[1].setAllowance(100000);
    staff[1].setSeniority(1.5);

    staff[2].setId(3);
    staff[2].setLastName("Tran Nhat");
    staff[2].setFirstName("Nam");
    staff[2].setYearOfBirth(1996);
    staff[2].setAddress("22 Tang Nhon Phu");
    staff[2].setPhone("0877990099");
    staff[2].setJob("Programmer");
    staff[2].setDepartment("IT");
    staff[2].setSalary(20000000);
    staff[2].setAllowance(200000);
    staff[2].setSeniority(2.34);

    cout << "\n======= ADMINISTRATIVE STAFF LIST =======\n";
    for (int i = 0; i < 3; i++) {
        cout << "\n ADMINISTRATIVE STAFF " << i + 1 << "\n";
        staff[i].display();
    }

    return 0;
}
