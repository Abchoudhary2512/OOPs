// //single inheritance
// #include<iostream>
// using namespace std;


// class Vehicle{
//     public:
//     int speed;
//     void setSpeed(int speed){
//         this->speed = speed;
//     }

//     void getSpeed(){
//         cout<<"the speed is the : "<<speed<<endl;
//     }

// };

// class car: public Vehicle{
//     public:
//     string model;
//     void getInfo(){
//         cout<<"the model is "<<model<<endl;
//         cout<<"the speed is "<<speed<<endl;


//     }
// };

// int main(){
//     car c1;
//     c1.speed  =122;
//     c1.model = "toyota";
//     c1.getInfo();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Base class 1
// class Engine {
// public:
//     void engineType() {
//         cout << "Engine type: V8" << endl;
//     }
// };

// // Base class 2
// class Transmission {
// public:
//     void transmissionType() {
//         cout << "Transmission type: Automatic" << endl;
//     }
// };

// // Derived class
// class Car : public Engine, public Transmission {
// public:
//     string model;
//     void showModel() {
//         cout << "Car model: " << model << endl;
//     }
// };

// int main() {
//     Car car1;
//     car1.model = "Ford Mustang";
//     car1.showModel();
    
//     // Access methods from both base classes
//     car1.engineType();
//     car1.transmissionType();

//     return 0;
// }

#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    int speed;
    void setSpeed(int s) {
        speed = s;
    }
    void showSpeed() {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    string model;
    void showModel() {
        cout << "Car model: " << model << endl;
    }
};

// Further derived class
class SportsCar : public Car {
public:
    void turboBoost() {
        cout << "Turbo boost activated!" << endl;
    }
};

int main() {
    SportsCar car1;
    car1.setSpeed(200);
    car1.model = "Porsche 911";
    
    car1.showSpeed();   // Inherited from Vehicle
    car1.showModel();   // Inherited from Car
    car1.turboBoost();  // SportsCar specific method

    return 0;
}
