#include<iostream>
using namespace std;

int selectionSort(int A[], int N);
int main()
{
	int a[105] = { 0 };
	int n, sw = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sw = selectionSort(a, n);
	for (int i = 0; i < n; i++)
	{
		if (i) cout << " ";
		cout << a[i];
	}
	cout << endl;
	cout << sw;
	return 0;
}

int selectionSort(int A[], int N)
{
	int sw = 0;
	int min;
	for (int i = 0; i < N; i++)
	{
		min = i;
		for (int j = i; j < N; j++)
		{
			if (A[j] < A[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(A[min], A[i]);
			sw++;
		}

	}
	return sw;
}
