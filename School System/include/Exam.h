#ifndef EXAM_H
#define EXAM_H

#include <Person.h>

#include <iostream>

using namespace std;
class Exam : public Person
{
private:
    string examName;
    string courseCode;
    string examDate;
public:
    Exam() {}
    Exam(string examName,string courseCode,string examDate,string name,string gender,
         int age,string address,string PhoneNumber,string email,int id)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->PhoneNumber=PhoneNumber;
        this-> email=email;
        this->id=id;
        this->examName=examName;
        this->courseCode=courseCode;
        this->examDate=examDate;
    }
    void setexamName(string examName)
    {
        this->examName=examName;
    }  void setcourseCode(string courseCode)
    {
        this->courseCode=courseCode;
    } void setexamDate(string examDate)
    {
        this->examDate=examDate;
    }
    string getexamName()
    {
        return examName;
    }
    string getcourseCode ()
    {
        return courseCode;
    }  string getexamDate ()
    {
        return examDate;
    }
    void print()
    {
        Person::print();
        cout<<"the examName is  "<<examName<<endl;
        cout<<"the courseCode is  "<<courseCode<<endl;
        cout<<"the examDate is  "<<examDate<<endl;
    }
    void information()
    {
        Person::information();
        cout <<"enter your examName "<<endl;
        cin>>examName;
        cout <<"enter your courseCode "<<endl;
        cin>>courseCode;
                cout <<"enter your examDate "<<endl;
        cin>>examDate;

    }
};



#endif // EXAM_H
