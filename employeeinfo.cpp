#include <iostream>
using namespace std;

class Employee
{
public:
    int employeeID;
    string name;

private:
    float salary;

public:
    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee ID: " << employeeID;
        cout << "\nName: " << name;
        cout << "\nSalary: " << salary;
    }
};

int main()
{
    Employee e;

    e.accept();
    e.display();

    return 0;
}