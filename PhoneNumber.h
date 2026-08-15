#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>

using namespace std;

class PhoneNumber
{
private:
    string   Phone;
    string type;
public:
    virtual ~PhoneNumber() {}
    void setPhone(string phone)
    {
        this->Phone=phone;
    } void setType(string type)
    {
        this->type=type;
    }
    string getPhone()
    {
        return Phone;
    } string getType()
    {
        return type;
    }
    void print()
    {
        cout<<"Your phone is : "<<Phone<<endl;
        cout<<"Your type is : "<<type<<endl;

    }
    void information()
    {
        cout<<"Please Enter Your Phone Number : "<<endl;
        cin>>Phone;
        cout<<"Please Enter Your type : "<<endl;
        cin>>type;


    }

};

#endif // PHONENUMBER_H
