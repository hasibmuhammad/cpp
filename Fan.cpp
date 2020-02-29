#include <iostream>

using namespace std;

class Fan
{
public:
    int speed;
    bool on;
    double radius;
    Fan(){
        speed = 1;
        on = false;
        radius = 5;
    }
    void turnOn(){
        on = true;
    }
    bool isOn(){
        return on;
    }
    int setSpeed(int newSpeed){
        if( on && speed >= 1 && speed <= 3 ) {
            speed = newSpeed;
        }
    }
    double setRadius(double newRadius){
        radius = newRadius;
    }
    double getRadius(){
        return radius;
    }
    int getSpeed(){
        return speed;
    }
};

int main()
{
    Fan fan1;
    Fan fan2;

    fan1.turnOn();
    fan1.setSpeed(3);
    fan1.setRadius(10);

    fan2.turnOn();
    fan2.setSpeed(2);
    fan2.setRadius(5);

    cout << "Fan One properties are :" << endl;
    cout << "Status : " << fan1.isOn() << endl;
    cout << "Speed : " << fan1.getSpeed() << endl;
    cout << "Radius : " << fan1.getRadius() << endl;

    cout << "Fan two properties are :" << endl;
    cout << "Status : " << fan2.isOn() << endl;
    cout << "Speed : " << fan2.getSpeed() << endl;
    cout << "Radius : " << fan2.getRadius() << endl;

    return 0;
}
