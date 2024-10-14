void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void sortArray(int a[], int size)
{
	for (int i = size - 1; i > 0; i--)
	{
		bool check = false;
		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				check = true;
			}
		}
		if (check == false)
		{
			break;
		}
	}
}