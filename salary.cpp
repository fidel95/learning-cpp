#include <iostream>

using namespace std;

int main()
{
  float annualSalary;
  cout << "Please enter your annual salary ";
  cin >> annualSalary;
  float montlySalary = annualSalary / 12;

  cout << "your montlhy salary is " << montlySalary <<endl;
  cout << "In ten year you will earn " <<fixed << annualSalary * 10 <<endl;

  const char* name = "Fidel";
}
