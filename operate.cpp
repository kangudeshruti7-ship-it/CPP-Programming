#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v) {
        value = v;
    }

    Number operator+(Number n) {
        return Number(value + n.value);
    }

    Number operator-() {
        return Number(-value);
    }

    bool operator>(Number n) {
        return value > n.value;
    }
};

int main() {
    Number a(10), b(5);

    Number c = a + b;
    cout << "Addition = " << c.value << endl;

    Number d = -a;
    cout << "Unary minus = " << d.value << endl;

    if (a > b)
        cout << "a is greater than b" << endl;
    else
        cout << "a is not greater than b" << endl;

    return 0;
}