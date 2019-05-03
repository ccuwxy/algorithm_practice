#include<stdio.h>

void insertionSort(int A[], int N);
void trace(int A[], int N);

int main()
{
	int n;
	int a[101] = { 0 };
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	insertionSort(a, n);
	
	return 0;
}

void insertionSort(int A[], int N)
{
	int v, j;
	for (int i = 1; i < N; i++)
	{
		v = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > v)
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
		trace(A, N);
	}
}

void trace(int A[], int N)
{
	for (int i = 0; i < N; i++)
	{
		if (i > 0)
			printf(" ");
		printf("%d", A[i]);
	}
	printf("\n");
}
