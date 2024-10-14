void swap(int & x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void sortArray(int a[], int size)
{
	for(int i=0;i<size;i++)
	{
		int min = i;
		for (int j = i; j < size; j++)
		{
			if (a[j]<a[min])
			{
				min = j;
			}
		}
		swap(a[min], a[i]); 
	}
}