#include<iostream>
#include<algorithm>
using namespace std;
static const int MAX = 200000;
int main()
{
	/*int R[MAX] = { 0 }, n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> R[i];
	}
	int maxv = R[1] - R[0];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (R[j] - R[i] > maxv)
			{
				maxv = R[j] - R[i];
			}
		}
	}
	cout << maxv;*/
	int R[MAX] = { 0 }, n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> R[i];
	}
	int maxv = -2000000000;
	int minv = R[0];
	for (int i = 1; i < n; i++)
	{
		maxv = max(maxv, R[i] - minv);
		minv = min(minv, R[i]);
	}
	cout << maxv;
	return 0;
}