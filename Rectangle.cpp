#include <iostream>

using namespace std;

class Rectangle
{
public:
    double width, height;
    Rectangle(){
        width = 1;
        height = 1;
    }
    Rectangle( double newWidth, double newHeight ) {
        width = newWidth;
        height = newHeight;
    }
    double getArea(){
        return width * height;
    }
    double getPerimeter(){
        return 2*( width + height );
    }
};

int main()
{
    Rectangle rect1(4, 40);
    Rectangle rect2(3.5, 35.9);

    cout << "The area of rectangle of width " << rect1.width << " and height " << rect1.height << " is " << rect1.getArea() << " and the perimeter is " << rect1.getPerimeter() << endl;
    cout << "The area of rectangle of width " << rect2.width << " and height " << rect2.height << " is " << rect2.getArea() << " and the perimeter is " << rect2.getPerimeter() << endl;

    return 0;
}
