#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <iostream>
#include <PhoneNumber.h>
#include <Contact.h>


using namespace std;

class ContactBook
{
protected:
private:
    int count=0;
    Contact contacts[1000];

public:
    void addCount()
    {
        Contact c;
        c.information();
        contacts[count]=c;
        count++;
    }
    void deleteCount()
    {
        cout<<"Please Enter ID To Delete"<<endl;
        int x;
        cin>>x;
        int i ;
        for (i=0; i<x; i++)
        {
            if(x==contacts[i].getId())
            {
                contacts[i]=contacts[count-1];
                count--;
                break;
            }
        }
        if(count==i)
        {
            cout<<"The Contact Not Found"<<endl;
        }
    }
    void searchContact()
    {
        cout<<"Please Enter ID To Search"<<endl;
        int x;
        cin>>x;//5
        int i;
        for(i=0; i<count; i++)
        {
            if(x==contacts[i].getId())
            {
                contacts[i].print();
                break;
            }
        }
        if(count==i)
        {
            cout<<"The Contact Not Found"<<endl;
        }
    }
    void editContact()
    {
        cout<<"Please Enter ID To Edit"<<endl;
        int x;
        cin>>x;//5
        int i;
        for(i=0; i<count; i++)
        {
            if(x==contacts[i].getId())
            {
                contacts[i].information();
                break;
            }
        }
        if(count==i)
        {
            cout<<"The Contact Not Found"<<endl;
        }
    }
    void printAll()
    {
        for(int i=0; i<count; i++)
        {
            contacts[i].print();
            cout<<endl;
        }
    }


};

#endif // CONTACTBOOK_H
