#include<iostream>
using namespace std;

int bubbleSort(int A[], int N);
int main()
{
	int a[105] = { 0 };
	int n, sw = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sw = bubbleSort(a, n);
	for (int i = 0; i < n; i++)
	{
		if (i)
			cout << " ";
		cout << a[i];
	}
	cout << endl;
	cout << sw;
	return 0;
}

int bubbleSort(int A[], int N)
{
	int sw = 0;
	/*for (int i = 0; i < N; i++)
	{
		for (int j = N - 1; j > i; j--)
		{
			if (A[j] < A[j - 1])
			{
				swap(A[j], A[j - 1]);
				sw++;
			}
		}
	}*/
	for (int i = N - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (A[j] > A[j + 1])
			{
				swap(A[j], A[j + 1]);
				sw++;
			}
		}
	}
	return sw;
}
