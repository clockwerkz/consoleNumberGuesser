#include <iostream>
#include <stdexcept>
#include <cassert>
#include <string>

class Student {
    public:
        Student(std::string name, int grade, double gpa);
        std::string Name() const { return name_; }
        int Grade() const { return grade_; }
        double GPA() const { return gpa_ ; }
        void Grade(int grade);
        void GPA(double gpa);
    private:
        std::string name_;
        int grade_;
        double gpa_;
};

void Student::Grade(int grade) {
    if (grade >= 0 && grade <= 12) 
        Student::grade_ = grade;
    else 
        throw grade_;
}

void Student::GPA(double gpa) {
    if (gpa >= 0.0 && gpa <= 4.0) 
        Student::gpa_ = gpa;
    else
        throw gpa;
}

Student::Student(std::string name, int grade, double gpa):name_(name){
    Student::Grade(grade);
    Student::GPA(gpa);
}

int main() {
    Student student("Carlos", 10, 3.5);
    assert(student.Name() == "Carlos");
    assert(student.Grade() == 10);
    assert(student.GPA() == 3.5);

    bool caught{false};
    try {
        Student("Nope", -3, 2.3);
    } catch (...) {
        caught = true;
    }
    assert(caught);
    caught = true;
    try {
        Student("Nope", 3, 5.3);
    } catch (...) {
        caught = true;
    }
    assert(caught);
}