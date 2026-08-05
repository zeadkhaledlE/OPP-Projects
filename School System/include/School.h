#ifndef SCHOOL_H
#define SCHOOL_H

#include <Student.h>
#include <Teacher.h>
#include <Staff.h>
#include <Classroom.h>

#include <iostream>

using namespace std;

class School
{
private:
    string schoolName;
    string address;
    string principalName;
    Student students[1000];
    Teacher teachers[50];
    Staff staffMembers[50];
    Classroom classrooms[20];
    int Studentcounter=0;
    int Teachercounter=0;
    int Staffcounter=0;
    int Classroomcounter=0;
public:

    void addStudent (Student st)
    {
        students[Studentcounter]=st;
        Studentcounter++;

    } void addTeacher (Teacher tea)
    {
        teachers[Teachercounter]=tea;
        Teachercounter++;

    } void addStaff (Staff staffss)
    {
        staffMembers[Staffcounter]=staffss;
        Staffcounter++;

    } void addClassroom  (Classroom classroomm)
    {
        classrooms[Classroomcounter]=classroomm;
        Classroomcounter++;

    }
    void printstudents(){
    for(int i =0;i<Studentcounter;i++){
        students[i].print();
        cout<<endl;
    }
    }void printteacher(){
    for(int i =0;i<Teachercounter;i++){
        teachers[i].print();
        cout<<endl;
    }
    }void printstaffs(){
    for(int i =0;i<Staffcounter;i++){
        staffMembers[i].print();
        cout<<endl;
    }
    }void printclassroom(){
    for(int i =0;i<Classroomcounter;i++){
        classrooms[i].print();
        cout<<endl;
    }
    }

};

#endif // SCHOOL_H
