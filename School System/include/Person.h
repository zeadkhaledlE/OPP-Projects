#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;


class Person
{
protected:
    string name;
    int age;
    string gender;
    string address;
    string PhoneNumber;
    string email;
    int id;
public:
    Person() {}
    ~Person() {}

    Person(string name,string gender, int age,
           string address,string PhoneNumber,string email,int id)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->PhoneNumber=PhoneNumber;
        this-> email=email;
        this->id=id;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setGender(string gender)
    {
        this->gender=gender;
    } void setAddress(string address)
    {
        this->address=address;
    } void setPhoneNumber(string PhoneNumber)
    {
        this->PhoneNumber=PhoneNumber;
    } void setEmail(string email)
    {
        this->email=email;
    } void setId(int id)
    {
        this->id=id;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    } string getGender()
    {
        return gender;
    } string getAddress()
    {
        return address;
    } string getPhoneNumber()
    {
        return PhoneNumber;
    } string getEmail()
    {
        return email;
    } int getId()
    {
        return id;
    }
    void print()
    {
        cout<<"the name is  "<<name<<endl;
        cout<<"the age is  "<<age<<endl;
        cout<<"the gender is  "<<gender<<endl;
        cout<<"the address is  "<<address<<endl;
        cout<<"the phonenumber is  "<<PhoneNumber<<endl;
        cout<<"the email is  "<<email<<endl;
        cout<<"the id is  "<<id<<endl;

    }
    void information()
    {
        cout <<"enter your name "<<endl;
        cin>>name;
        cout <<"enter your age "<<endl;
        cin>>age;
        cout <<"enter your gender "<<endl;
        cin>>gender;
        cout <<"enter your address "<<endl;
        cin>>address;
        cout <<"enter your phonenumber "<<endl;
        cin>>PhoneNumber;
        cout <<"enter your email "<<endl;
        cin>>email;
        cout <<"enter your id "<<endl;
        cin>>id;
    }
};

#endif // PERSON_H
