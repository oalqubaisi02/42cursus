#include <stdio.h>

int max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int temp = tab[i];
	if (len == 0)
		return 0;
	while (i < len)
	{
		if (temp < tab[i])
			temp = tab[i];
		i++;
	}
	return (temp);
}

int main()
{
	int arr[] = {300, -75, 8, 200, 11, -85, 10, 5, 45, 90, 250, 95, 100, 500};
	unsigned int arr_len = sizeof(arr) / sizeof(int);

	int maximum = max(arr, arr_len);

	printf("The maximum value in the array is: %d\n", maximum);

	return 0;
}