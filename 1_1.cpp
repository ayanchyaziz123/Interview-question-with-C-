#include<bits/stdc++.h>
using namespace std;

bool bruteForce(string s)
{
	for(int i = 0; i < s.size(); ++i)
	{
		for(int j = 0; j < s.size(); ++j)
		{
			if(i != j && s[i] == s[j])
				return false;
		}
	}
	return true;
}

bool opt(string s)
{
	int n = s.size();
	map<char, int> m;
	for(int i = 0; i < n; ++i)
	{
		m[s[i]]++;
	}
	bool flag = true;
	for(auto i : m)
	{
		cout << i.second << endl;
		if(1 < i.second)
			return false;
	}
	return true;
}

bool opt2(string s)
{
	int n = s.size();
	sort(s.begin(), s.end());
	for(int i = 0; i < n-1; ++i)
	{
		if(s[i] == s[i+1])
		{
			return false;
		}
	}
	return true;
}


int main()
{
	string s;
	cin >> s;
	//cout << bruteForce(s) << endl;
	//cout << opt(s) << endl;
	cout << opt2(s) << endl;
}