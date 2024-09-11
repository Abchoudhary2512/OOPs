#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;


    Person(){   
        cout<<"parent wala call hua yaha"<<endl;

    }
    // Person(string name,int age){
    //     this->age = age;
    //     this->name = name;
    // }


};

class Student: public Person{
    public:
    int roll_no;
    Student(){
        cout<<"it is child class"<<endl;
    }
    void getInfo(){
        cout<<"the name is"<<name<<endl;
        cout<<"the age is"<<age<<endl;
        cout<<"the roll_no is"<<roll_no<<endl;

    }
};


int main(){
    Student s1;
    s1.name = "ajay";
    s1.age = 21;
    s1.roll_no = 6;
    s1.getInfo();
    return 0;
}