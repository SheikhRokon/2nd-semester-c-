#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;
    string course;
    string section;

    public:

    void setName(string studentName) {
        name = studentName;
    }

    void setId(int studentId) {
        id = studentId;
    }

    void setCourse(string studentCourse) {
        course = studentCourse;
    }

    void setSection(string studentSection) {
        section = studentSection;
    }


    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    string getCourse() const {
        return course;
    }

    string getSection() const {
        return section;
    }
};

int main() {
    Student student;
    student.setName("MD.Rokon");
    student.setId(42230200871);
    student.setCourse("Computer Science");
    student.setSection("A");

    cout << "Student Name: " << student.getName() << endl;
    cout << "Student ID: " << student.getId() << endl;
    cout << "Student Course: " << student.getCourse() << endl;
    cout << "Student Section: " << student.getSection() << endl;

    return 0;
}
