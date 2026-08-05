#include <iostream>
#include <Person.h>
#include <Student.h>
#include <Teacher.h>
#include <School.h>
#include <Staff.h>
#include <Classroom.h>
using namespace std;

int main()
{
    School s;
    int n;
    do
    {
        cout << "Press 0 to Exit" << endl;
        cout << "Press 1 to Add Student" << endl;
        cout << "Press 2 to Add Teacher" << endl;
        cout << "Press 3 to Add Staff" << endl;
        cout << "Press 4 to Add ClassRoom" << endl;
        cout << "Press 5 to print All Student" << endl;
        cout << "Press 6 to print Teacher" << endl;
        cout << "Press 7 to print Staffs" << endl;
        cout << "Press 8 to print ClassRooms" << endl;
        cin>>n;
        system("cls");
        switch(n)
        {
        case 0:
            return 0;
        case 1:
        {
            Student ss;
            ss.information();
            s.addStudent(ss);
            break;
        }
        case 2:
        {
            Teacher t;
            t.information();
            s.addTeacher(t);
            break;
        }
        case 3:
        {
            Staff staf;
            staf.information();
            s.addStaff(staf);
            break;
        }
        case 4:
        {
            Classroom classr;
            classr.information();
            s.addClassroom(classr);
            break;
        }
        case 5:
            s.printstudents();
            break;
        case 6:
            s.printteacher();
            break;
        case 7:
            s.printstaffs();
            break;
        case 8 :
            s.printclassroom();
            break;
        }

    }
    while(n!=0);

        return 0;
}
