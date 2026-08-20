#include <iostream>
using namespace std;

class Result
{
    int marks[5];
    int total;
    float percentage;

public:
    void accept()
    {
        cout << "Enter marks of 5 subjects:\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculate()
    {
        total = 0;

        for (int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }

        percentage = total / 5.0;
    }

    void display()
    {
        cout << "\nTotal Marks = " << total;
        cout << "\nPercentage = " << percentage << "%";

        for (int i = 0; i < 5; i++)
        {
            if (marks[i] < 40)
            {
                cout << "\nResult = FAIL";
                return;
            }
        }

        cout << "\nResult = PASS";
    }
};

int main()
{
    Result r;

    r.accept();
    r.calculate();
    r.display();

    return 0;
}