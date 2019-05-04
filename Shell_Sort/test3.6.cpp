#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

long long cnt;
vector<int> G;
void insertSort(int a[], int n, int g)
{
	int v, j;
	for (int i = g; i < n; i++)
	{
		v = a[i];
		j = i - g;
		while (j >= 0 && a[j] > v)
		{
			a[j + g] = a[j];
			j -= g;
			cnt++;
		}
		a[j + g] = v;
	}
}

void shellSort(int a[], int n)
{
	for (int h = 1; h <= n; )
	{
		G.push_back(h);
		h = h * 3 + 1;
	}

	for (int i = G.size() - 1; i >= 0; i--)
	{
		insertSort(a, n, G[i]);
	}
}

int main()
{
	int n;
	int A[105] = { 0 };
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &A[i]);
	cnt = 0;
	shellSort(A, n);
	printf("%d\n", G.size());
	for (int i = G.size() - 1; i >= 0; i--)
	{
		printf("%d", G[i]);
		if (i)
			printf(" ");
	}
	printf("\n");
	printf("%lld\n", cnt);
	for (int i = 0; i < n; i++)
	{
		if (i)
			printf("\n");
		printf("%d", A[i]);
	}
	return 0;
}