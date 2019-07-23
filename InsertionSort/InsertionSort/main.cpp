#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;
 
const int N = 10000;

void InsertionSort(int a[], int N)
{
	int i, j, v;
	for (i = 2; i <= N; i++)
	{
		v = a[i];
		j = i;
		while (a[j - 1] > v)
		{
			a[j] = a[j - 1];
			j--;
		}
		a[j] = v;
	}
}
void CheckSort(int a[], int n)
{
	int i;
	bool Sorted = true;
	for (i = 1; i < n; i++)
	{
		if (a[i] > a[i + 1])
		{
			Sorted = false;
			if (!Sorted)
				break;
		}

	}
	if (Sorted)
	{
		cout << "정렬 완료" << endl;
	}
	else
	{
		cout << "정렬 오류 발생" << endl;
	}
}

int main(void)
{
	int i, a[N + 1];
	double start_time;
	a[0] = -1;
	srand((unsigned)time(NULL));

	for (i = 1; i <= N; i++)
	{
		a[i] = rand();
	}
	start_time = clock();
	InsertionSort(a, N);
	cout << "삽입 정렬의 실행 시간(N = " << N << ") :" << clock() - start_time << endl;

	CheckSort(a, N);

	return 0;
}