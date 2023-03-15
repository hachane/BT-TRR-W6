#include <iostream>
using namespace std;
// n la do dai string s dang xet
int ones(string s, int n)
{
	if(n == 1 && s[0] == '1') return 1;
	if (n == 1 && s[0] == '0') return 0;
	int temp = 1 ? s[n - 1] == '1' : 0;
	return temp + ones(s, n - 1);
}
int main ()
{
	int n; cin >> n;
	string s; cin >> s;
	cout << ones(s, n);
	return 0;
}
