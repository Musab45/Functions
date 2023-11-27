#include<iostream>
using namespace std;

int initial(int n1)
{
	cout << "Initial Number: ";
	cin >> n1;
	return n1;
}
int final(int n2)
{
	cout << "Final: ";
	cin >> n2;
	return n2;
}
int sum(int x1, int x2)
{
	int ans = 0;
	int v1 = initial(x1);
	int v2 = final(x2);
	for (int i = v1; i <= v2 ; i++)
	{
		ans += i;
	}
	cout << ans;
	return ans;
}
int main()
{
	int s1 = 0, s2 = 0;
	sum(s2, s1);
	return 0;
}