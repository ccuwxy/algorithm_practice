#include<iostream>
using namespace std;

struct Card {
	char suit;
	char value;
};

void buttle(struct Card A[], int N)
{
	for (int i = N - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (A[j].value > A[j + 1].value)
			{
				swap(A[j], A[j + 1]);
			}
		}
	}
}

void selection(struct Card A[], int N)
{
	int min;
	for (int i = 0; i < N; i++)
	{
		min = i;
		for (int j = i; j < N; j++)
		{
			if (A[min].value > A[j].value)
			{
				min = j;
			}
		}
		swap(A[min], A[i]);
	}
}

void print(struct Card A[], int N)
{
	for (int i = 0; i < N; i++)
	{
		if (i) cout << " ";
		cout << A[i].suit << A[i].value;
	}
	cout << endl;
}

bool isStable(struct Card C1[], struct Card C2[], int N)
{
	for (int i = 0; i < N; i++)
	{
		if (C1[i].suit != C2[i].suit)
			return false;
	}
	return true;
}

int main()
{
	Card C1[100], C2[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> C1[i].suit >> C1[i].value;
		C2[i] = C1[i];
	}

	buttle(C1, n);
	selection(C2, n);

	print(C1, n);
	cout << "Stable" << endl;
	print(C2, n);
	cout << (isStable(C1, C2, n) == true ? "Stable" : "Not Stable") << endl;
	return 0;
}

