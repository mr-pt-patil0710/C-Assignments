#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
        string name;
        int roll_no;
        float marks;

    public:
        void accept()
        {
            cout << "Enter name: ";
            getline(cin, name);
            
            cout << "Enter roll number: ";
            cin >> roll_no;
            
            cout << "Enter marks: ";
            cin >> marks;
        }
        void calculateResult() 
        {
            if (marks >= 40) {
                cout << "Result: Pass" << endl;
            } else {
                cout << "Result: Fail" << endl;
            }
        }
        void display() 
        {
            cout << "Student Details:" << endl;
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << roll_no << endl;
            cout << "Marks: " << marks << endl;

            calculateResult();
        }
};
        int main() 
        {
            Student S;
            S.accept();
            S.display();
            return 0;
        }