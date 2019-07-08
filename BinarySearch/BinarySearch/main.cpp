#include <iostream>
#include "binarySearch.h"
using namespace std;


int main(void)
{
	int arr[10] = { 1, 3, 4, 6, 9, 11, 13, 16, 20, 28};
	int targetIdx;

	targetIdx = BinarySearch(arr, 28, 0, 9);
	if (targetIdx == -1)
	{
		cout << "target number is not exist in array" << endl;
	}
	else
	{
		cout << "target number index: " << targetIdx << endl;
	}
	
	return 0;
}
