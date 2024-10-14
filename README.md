# repo-commits-practice
komal zahid
###############FUNCTION##############
void String::trimLeft()
{
	int i =0;
	while (data[i] == '\n' || data[i] == '\t' || data[i] == ' ')
	{
		i++;
	}
	if (i != 0)
	{
		int k = 0;
		while (i < size)
		{
			data[k] = data[i];
			i++;
			k++;
		}
		this->resize(k);
	}
}

###############FUNCTION##############
void String:: trimRight()
{
	int i = size - 1;
	int check = 0;
	while (data[i] == '\n' || data[i] == '\t' || data[i] == ' ')
	{
		check++;
		i--;
	}
	if (check != 0)
	{
		size = size - check;
		this->resize(size);
	}
}
