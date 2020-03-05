#include <iostream>
#include <cmath>

using namespace std;

class MyPoint {
public:
    double x, y;
    MyPoint() {
        x = 0;
        y = 0;
    }
    MyPoint( double newX, double newY ) {
        x = newX;
        y = newY;
    }

    double getX(){
        return x;
    }

    double getY(){
        return y;
    }

    double distance( double x1, double x2, double y1, double y2 ){
        return sqrt(pow( x2 - x1, 2 ) + pow( y2 - y1, 2 ));
    }
};

int main()
{
    MyPoint firstPoint(0, 0);
    MyPoint secondPoint(10, 30.5);

    double x1 = firstPoint.getX();
    double y1 = firstPoint.getY();
    double x2 = secondPoint.getX();
    double y2 = secondPoint.getY();

    cout << firstPoint.distance(x1, x2, y1, y2);


    return 0;
}
