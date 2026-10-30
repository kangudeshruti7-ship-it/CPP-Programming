#include <iostream>
using namespace std;

class Area
{
public:
    void area(int side)
    {
        cout << "Area of Square = " << side * side << endl;
    }

    void area(int length, int breadth)
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }

    void area(float radius)
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Area a;
    int side, length, breadth;
    float radius;

    cout << "Enter side of square: ";
    cin >> side;
    a.area(side);

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    a.area(length, breadth);

    cout << "Enter radius of circle: ";
    cin >> radius;
    a.area(radius);

    return 0;
}