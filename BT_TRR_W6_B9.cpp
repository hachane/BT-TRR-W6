#include <bits/stdc++.h>
using namespace std;
// an : so luong bit thoa man co do dai n ket thuc bang chu so 0
// bn : so luong bit thoa man co do dai n ket thuc bang chu so 1
int bit_end_with_0(int n)
{
	if (n == 1) return 0;
	if (n == 2) return 1;
	return bit_end_with_0(n - 1) + bit_end_with_0(n - 2);
}
int good_bit(int n)
{
	if (n == 3) return 2;
	return ( good_bit(n - 1) + bit_end_with_0(n - 1) );
}
int main ()
{
	int n; cin >> n;
	cout << bit_end_with_0(n) << endl;
	cout << good_bit(n) << endl;
	int a2 = 1, b2 = 0;
	int an, bn;
	while (n - 2)
	{
		an = a2 + b2;
		bn = a2;
		a2 = an;
		b2 = bn;
		n--;
	}
	cout << an + bn << endl;
	return 0;
}
