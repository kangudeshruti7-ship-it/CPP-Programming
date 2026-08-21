#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    void getData()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> img;
    }

    void add(Complex c)
    {
        cout << "Addition = "
             << real + c.real
             << " + " << img + c.img << "i" << endl;
    }

    void subtract(Complex c)
    {
        cout << "Subtraction = "
             << real - c.real
             << " + " << img - c.img << "i" << endl;
    }
};

int main()
{
    Complex c1, c2;

    cout << "Enter first complex number:\n";
    c1.getData();

    cout << "Enter second complex number:\n";
    c2.getData();

    c1.add(c2);
    c1.subtract(c2);

    return 0;
}