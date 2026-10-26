#include <iostream>
using namespace std;

class Employee
{
  int emp_id;
  string emp_name;
  string department;
  float salary;

public:
    void accept()
    {
      cout << "Enter Employee ID: ";
      cin >> emp_id;

      cout << "Enter Employee Name: ";
      cin >> emp_name;

      cout << "Enter Department: ";
      cin >> department;

      cout << "Enter Basic Salary: ";
      cin >> salary;
    }

    void display()
    {
      cout << "\nEmployee Information";
      cout << "\nEmployee ID: " << emp_id;
      cout << "\nEmployee Name: " << emp_name;
      cout << "\nDepartment: " << department;
      cout << "\nBasic Salary: " << salary;
    }
};

int main()
{
    Employee e;

    e.accept();
    e.display();

    return 0;
}