#include <iostream>
using namespace std;

void swap(int a[], int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
void CheckSort(int a[], int n)
{
	int i;
	bool sorted = true;
	for (i = 0; i < n; i++)
	{
		if (a[i] > a[i + 1])
			sorted = false;
		if (!sorted)
			break;
	}
	if (sorted)
	{
		cout << "Sorting done" << endl;
	}
	else
	{
		cout << "Sorting error" << endl;
	}

}