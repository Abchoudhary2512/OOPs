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
    Teacher(string name,string dept){
        this->name = name;//parameter RHS MEIN rehta h
        this->dept = dept;
    }

    //copy constructor
    Teacher(Teacher &orgObj){
        cout<<"custome copy constructoir"<<endl;
         //pass by reference
    this->name = orgObj.name;
    this->dept = orgObj.dept;
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
    float* cpiptr;

    Student(string name,float cpi){
        this->name = name;
        cpiptr = new float;
        *cpiptr = cpi;
    }
    void getInfo(){
        cout<<"name is "<<name<<endl;
        cout<<"cpi is "<<*cpiptr<<endl;
    }

    ~Student(){
        cout<<"i delete everythin"<<endl;
    }



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
    // Teacher t1("ajay","CSE"); // constructor call ho jati hai
    // Teacher t2(t1);
    // cout << t2.name << endl;
    // cout << t2.dept << endl;

    // t1.setLeaves(12);
    // cout << t1.getLeaves() << endl;
    // cout << t2.dept << endl;
    Student s1("rahul bhai",8.7);
    // s1.getInfo();
    // Student s2(s1);
    // s2.getInfo();

    // Teacher t2;
    // Teacher t3;

    return 0;
}