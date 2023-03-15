#include<iostream>
using namespace std;
int x[100];
int ans = 0;
bool check() {
	int dem0 = 0;
	int dem1 = 0;
	for (int i = 1; i <= 12; i++) {
		if (x[i] == 1) {
			dem1++;

		}
		else {
			dem0++;
		}
	}
	return dem1 > dem0;
}
void init() {
	for (int i = 1; i <= 12; i++)
	{
		cout << x[i];
	}
	cout << endl;
}
void thu(int i) {
	for (int j = 0; j <= 1; j++) {
		x[i] = j;
		if (i == 12) {
			if (check())
			{
				init();
				ans++;
			}

		}
		else {
			thu(i + 1);
		}
	}
}
int main() {
	thu(1);
	cout << ans;
}
