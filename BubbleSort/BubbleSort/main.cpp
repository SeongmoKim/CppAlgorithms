#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "sort.h"
using namespace std;

const int N = 10;

void BubbleSort(int a[], int N);

int main(void)
{
	int i;
	int a[N + 1];
	double start_time;

	srand((unsigned)time(NULL));
	for (i = 1; i < N + 1; i++)
	{
		a[i] = rand();
	}
	start_time = clock();
	BubbleSort(a, N);
	cout << "버블 정렬의 실행 시간 (N = " << N << ") : " << clock() - start_time << endl;
	
	CheckSort(a, N);

	for (i = 0; i < N + 1; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}


void BubbleSort(int a[], int N)
{
	int i, j;
	for (i = N; i > 0; i--)
	{
		for (j = 1; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a, j, j + 1);
			}
		}
	}
}
