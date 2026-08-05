#ifndef STAFF_H
#define STAFF_H

#include <Person.h>

#include <iostream>

using namespace std;
class Staff :public Person
{
   private:
    string role;
    float salary;
public:
    Staff() {}
    Staff(string role,float salary,string name,string gender,
            int age,string address,string PhoneNumber,string email,int id)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->PhoneNumber=PhoneNumber;
        this-> email=email;
        this->id=id;
        this->role=role;
        this->salary=salary;
    }
    void setrole(string role)
    {
        this->role=role;
    }  void setSalary(float salary)
    {
        this->salary=salary;
    }
    string getrole()
    {
        return role;
    }
    float getSalary ()
    {
        return salary;
    }
    void print()
    {
        Person::print();
        cout<<"the role is  "<<role<<endl;
        cout<<"the salary is  "<<salary<<endl;
    }
    void information()
    {
        Person::information();
        cout <<"enter your role "<<endl;
        cin>>role;
        cout <<"enter your salary "<<endl;
        cin>>salary;
    }
};

#endif // STAFF_H
