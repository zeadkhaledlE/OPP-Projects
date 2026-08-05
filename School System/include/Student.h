#ifndef STUDENT_H
#define STUDENT_H
#include <Person.h>

#include <iostream>

using namespace std;


class Student :public Person
{
private:
    string gradeLevel;
    float gpa;


public:
    Student() {}
    Student(string gradeLevel,float gpa,string name,string gender,
             int age,string address,string PhoneNumber,string email,int id)
    {this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->PhoneNumber=PhoneNumber;
        this-> email=email;
        this->id=id;
        this->gradeLevel=gradeLevel;
        this->gpa=gpa;
    }
    ~Student() {}
    void setgradeLevel(string gradeLevel)
    {
        this->gradeLevel=gradeLevel;
    } void setgpa(float gpa)
    {
        this->gpa=gpa;
    } string getgradeLevel()
    {
        return gradeLevel;
    }
    float getgpa()
    {
        return gpa;
    }
void print(){
    Person::print();
      cout<<"the gradelevel is  "<<gradeLevel<<endl;
        cout<<"the gpa is  "<<gpa<<endl;
}
void information(){
    Person::information();
  cout <<"enter your gradelevel "<<endl;
        cin>>gradeLevel;
        cout <<"enter your gpa "<<endl;
        cin>>gpa;
}

};

#endif // STUDENT_H
