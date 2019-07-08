int BinarySearch(int a[], int key, int left, int right)
{
	int mid = 0;

	if (left <= right)
	{
		mid = (left + right) / 2;

		if (key == a[mid])
		{
			return mid;
		}
		else if (key < a[mid])
		{
			return BinarySearch(a, key, left, mid - 1);
		}
		else if (key > a[mid])
		{
			return BinarySearch(a, key, mid + 1, right);
		}
	}
	else
	{
		return -1;
	}
}