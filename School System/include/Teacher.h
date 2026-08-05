#ifndef TEACHER_H
#define TEACHER_H
#include <Person.h>

#include <iostream>

using namespace std;

class Teacher : public Person
{
private:
    string subject;
    float salary;
public:
    Teacher() {}
    Teacher(string subject,float salary,string name,string gender,
            int age,string address,string PhoneNumber,string email,int id)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->PhoneNumber=PhoneNumber;
        this-> email=email;
        this->id=id;
        this->subject=subject;
        this->salary=salary;
    }
    void setSubject(string subject)
    {
        this->subject=subject;
    }  void setSalary(float salary)
    {
        this->salary=salary;
    }
    string getSubject()
    {
        return subject;
    }
    float getSalary ()
    {
        return salary;
    }
    void print()
    {
        Person::print();
        cout<<"the subject is  "<<subject<<endl;
        cout<<"the salary is  "<<salary<<endl;
    }
    void information()
    {
        Person::information();
        cout <<"enter your subject "<<endl;
        cin>>subject;
        cout <<"enter your salary "<<endl;
        cin>>salary;
    }
};

#endif // TEACHER_H
