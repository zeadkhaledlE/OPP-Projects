#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <Person.h>

#include <iostream>

using namespace std;

class Classroom : public Person
{
    private:
    int roomNumber;
    int capacity;
public:
    Classroom() {}
    Classroom(int roomNumber  ,int capacity,string name,string gender,
            int age,string address,string PhoneNumber,string email,int id)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->PhoneNumber=PhoneNumber;
        this-> email=email;
        this->id=id;
        this->capacity=capacity;
        this->roomNumber=roomNumber;
    }
    void setroomNumber(int roomNumber)
    {
        this->roomNumber=roomNumber;
    }  void setcapacity(int capacity)
    {
        this->capacity=capacity;
    }
    int getcapacity()
    {
        return capacity;
    }
    int getroomNumber()
    {
        return roomNumber;
    }
    void print()
    {
        Person::print();
        cout<<"the roomNumber is  "<<roomNumber<<endl;
        cout<<"the capacity is  "<<capacity<<endl;
    }
    void information()
    {
        Person::information();
        cout <<"enter your roomNumber "<<endl;
        cin>>roomNumber;
        cout <<"enter your capacity "<<endl;
        cin>>capacity;
    }
};

#endif // CLASSROOM_H
