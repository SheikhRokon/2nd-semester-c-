#include <windows.h>
#include <iostream>

using namespace std;

class Student {
public:
    string name;
    int id;
    string course;
    string section;

    public:
		void TakeStudentDetails();
		void ShowStudentDetails();


};
void Student :: TakeStudentDetails()
 {
    cout << "Enter student name: ";
   cin>>name;

    cout << "Enter student ID: ";
    cin >>  id;

    cout << "Enter student course: ";
     cin>>course; 

    cout << "Enter student section: ";
     cin>>section; 
}
void Student :: ShowStudentDetails()
 {
    cout << "----------Student Details-----------" << endl;
    cout << "Name: " <<  name << endl;
    cout << "ID: " <<  id << endl;
    cout << "Course: " <<  course << endl;
    cout << "Section: " <<  section << endl;
}

int main() {
    Student student1;
    cout << "Enter student details:" << endl;
    student1.TakeStudentDetails();
    student1.ShowStudentDetails();

    cout << endl;


    return 0;
}
