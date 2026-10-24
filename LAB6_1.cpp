#include <iostream>
using namespace std;
int main()
{
	int x , once_digit; 
	cout << "enter a 3-digit number : ";
	cin >> x;
	once_digit = x % 10;
	cout <<"The ones digit is : " <<  once_digit;
}