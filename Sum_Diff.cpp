#include<iostream>
using namespace std;

//Number Collection
int num1(int n1)
{
	cout << "Enter First Number: ";
	cin >> n1;
	return n1;
}
int num2(int n2)
{
	cout << "Enter Second Number: ";
	cin >> n2;
	return n2;
}
//Operations
int sum(int num1, int num2)
{
	cout << "Sum is " << num1 + num2;
	return num1 + num2;
}
int diff(int num1, int num2)
{
	cout << "Diff is " << num1 - num2;
	return num1 - num2;
}
//Operator Data
void operation(char op)
{
	cout << "Enter Operator: ";
	cin >> op;
}
//Main
int main()
{
	int s1 = 0, s2 = 0;
	char opp;
	cout << "Select Operation(+/-): ";
	cin >> opp;
	switch (opp)
	{
	case'+':
		sum(num2(s2), num1(s1));
		break;
	case'-':
		diff(num1(s1), num2(s2));
		break;
	default:
		cout << "Wrong";
	}
	
	return 0;
}