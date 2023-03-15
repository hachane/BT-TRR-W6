#include <bits/stdc++.h>
using namespace std;
int number_of_palindrome(int n)
{
	if(n == 1) return 2;
	if(n == 2) return 2;
	if (n % 2 == 0) return number_of_palindrome(n - 2) * 2;
	return number_of_palindrome(n - 2) * 2;
}
int main ()
{
	int n; cin >> n;
	cout << number_of_palindrome(n);	
}
