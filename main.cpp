#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    int leaves;

public:
    //default constructor

    Teacher()
    {
        dept = "computer science";
    }
    // parametrized constructor
    Teacher(string n,string d){
        name = n;
        dept = d;
    }

    
    string name;
    string dept;
    string subject;
    double salary;

    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void setLeaves(int s)
    {
        leaves = s;
    }
    int getLeaves()
    {
        return leaves;
    }
};

class Student
{
public:
    string name;
    int id;
};

class Account
{
private:
    double balance;
    string password;

public:
    string username;
    string id;
};

int main()
{
    Teacher t1("ajay","CSE"); // constructor call ho jati hai
    Teacher t2;
    cout << t1.name << endl;
    cout << t1.dept << endl;

    t1.setLeaves(12);
    cout << t1.getLeaves() << endl;
    cout << t2.dept << endl;
    

    // Teacher t2;
    // Teacher t3;

    return 0;
}