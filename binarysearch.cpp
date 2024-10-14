int FirstOccurence(int arr[], int size, int key)
{
	int start = 0;
	int end = size - 1;
	int mid = start + (end - start) / 2;
	while (start <= end)
	{
		if ((arr[mid] == key && arr[mid - 1] != key)|| (arr[mid] == key && mid==start))
		{
			return mid;
		}
		if (arr[mid] < key)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
		mid = start + (end - start) / 2;
	}
	return -1;
}