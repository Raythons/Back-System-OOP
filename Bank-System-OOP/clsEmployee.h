#pragma once

#include <iostream>
#include "clsPerson.h"
using namespace std;
class clsEmployee : public clsPerson {
private:
    string _Title;
    string _Department;
    float _Salary;
public:
    clsEmployee(int ID, string FirstName, string LastName, string Email,
        string Phone, string Title, string Department, float Salary) :
        clsPerson(ID, FirstName, LastName, Email, Phone) {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;
    }

    void setTitle(string Title) {
        _Title = Title;
    }
    string GetTitle() {
        return _Title;
    }
    //Property Setvoid 
    void setDepartment(string Department) {
        _Department = Department;
    }
    //Property Get 
    string Department() {
        return _Department;
    }
    void setSalary(float Salary) {
        _Salary = Salary;
    } //Property Get 
    float Salary() {
        return _Salary;
    }
    void Print() {

        cout << "\n#################################################\n";
        cout << "\nInfo:";
        cout << "\n___________________";
        cout << "\nID        : " << ID();
        cout << "\nFirstName : " << GetFirstName();
        cout << "\nLastName  : " << GetLastName();
        cout << "\nFull Name : " << FullName();
        cout << "\nEmail     : " << GetEmail();
        cout << "\nPhone     : " << GetPhone();
        cout << "\nTitle     : " << _Title;
        cout << "\nDepartment: " << _Department;
        cout << "\nSalary    : " << _Salary;
        cout << "\n___________________\n";
    }

};