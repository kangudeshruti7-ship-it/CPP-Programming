#include <iostream>
using namespace std;

class Fraction
{
    int num, den;

public:
    void input()
    {
        cout << "Enter numerator: ";
        cin >> num;

        cout << "Enter denominator: ";
        cin >> den;
    }

    void add(Fraction f)
    {
        int n, d;

        n = (num * f.den) + (f.num * den);
        d = den * f.den;

        cout << "Addition = " << n << "/" << d << endl;
    }

    void sub(Fraction f)
    {
        int n, d;

        n = (num * f.den) - (f.num * den);
        d = den * f.den;

        cout << "Subtraction = " << n << "/" << d << endl;
    }
};

int main()
{
    Fraction f1, f2;

    cout << "Enter first fraction:\n";
    f1.input();

    cout << "\nEnter second fraction:\n";
    f2.input();

    f1.add(f2);
    f1.sub(f2);

    return 0;
}