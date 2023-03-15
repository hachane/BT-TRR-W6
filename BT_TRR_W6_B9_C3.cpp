#include<iostream>
using namespace std;
int N;
int x[1000];
int dem = 0;
void init() 
{
    for (int i = 1; i <= N; i++) 
	{
        cout << x[i];
    }
    cout << endl;
}
void thu(int i,int k) 
{
    for (int j = 0; j <= k; j++) 
	{
        x[i] = j;
        if (i == N) 
		{
            dem++;
            init();
        }
        else if (x[i] == 0) 
		{
            thu(i + 1, 1);
        }
        else if (x[i] == 1) 
		{
            thu(i + 1, 0);
        }
    }
}
int main()
{
	cin >> N;
    x[1] = 1;
    thu(2,0);
    cout << dem;
}
