#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if(n <= 1)
		return n;
	cout << n << endl;
	return fib(n-1) + fib(n-2);
}

int main()
{
	// 0 1 1 2 3 5
	cout << fib(5);
	return 0;
}