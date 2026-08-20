#include <iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    void input()
    {
        cout << "Enter hour: ";
        cin >> hour;

        cout << "Enter minute: ";
        cin >> minute;

        cout << "Enter second: ";
        cin >> second;
    }

    void add(Time t)
    {
        int h, m, s;

        s = second + t.second;
        m = minute + t.minute;
        h = hour + t.hour;

        if (s >= 60)
        {
            s = s - 60;
            m++;
        }

        if (m >= 60)
        {
            m = m - 60;
            h++;
        }

        cout << "Total Time = "
             << h << " hour "
             << m << " minute "
             << s << " second";
    }
};

int main()
{
    Time t1, t2;

    cout << "Enter first time:\n";
    t1.input();

    cout << "\nEnter second time:\n";
    t2.input();

    t1.add(t2);

    return 0;
}