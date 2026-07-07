#include <iostream>
using namespace std;

class Exam {
    protected:
        int marks;

    public:
        Exam(int m) {
            marks = m;
        }

        int getMarks() {
            return marks;
        }
};

class Student : public Exam {
    private:
        string name;

    public:
        Student(string n, int m) : Exam(m) {
            name = n;
        }

        void displayStudent() {
            cout << "Name: " << name << endl;
            cout << "Marks: " << getMarks() << endl;
        }
};

class Result : public Student {
    private:
        char grade;

    public:
        Result(string n, int m) : Student(n, m) {
            calculateGrade();
        }

        void calculateGrade() {
            int marks = getMarks();
            if (marks >= 90) {
                grade = 'A';
            } else if (marks >= 80) {
                grade = 'B';
            } else if (marks >= 70) {
                grade = 'C';
            } else if (marks >= 60) {
                grade = 'D';
            } else {
                grade = 'F';
            }
        }

        void displayResult() {
            cout << "Grade: " << grade << endl;
        }
};

int main() {
    Result r("John Doe", 92);
    r.displayStudent();
    r.displayResult();
    return 0;
}