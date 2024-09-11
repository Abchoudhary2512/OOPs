#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;

    Car(string brand,string model,int year){
        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    void getInfo(){
        cout<<brand<<" "<<year<<" "<<model<<endl;
    }

};

int main()
{
    Car c1("toyota","model1",1221);
    c1.getInfo();
    return 0;




}