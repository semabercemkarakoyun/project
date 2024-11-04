#include <iostream>
using namespace std;
int main () {
double number1,number2;

cout << "Enter First Number: ";
cin >> number1;

cout << "Enter Second Number: ";
cin >> number2;

if (number1 > number2)
  cout << number1 << " is bigger than " << number2;

else if (number2 > number1)
  cout << number2 << " is bigger than " << number1;

else
cout << number1 << " is equals to " << number2; 


return 0;

}