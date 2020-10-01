#include <stdio.h>

int bubbleSort(int arr[], int size)
{
	int temp;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	return 0;
}

int main()
{
	int size;

	// Taking array size from the user
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	int arr[size];

	// Taking elements of the array form user
	printf("Enter the elements of the array below.\n");
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		printf("Element %d: ", count);
		scanf("%d", &arr[i]);
		count++;
	}

	bubbleSort(arr, size);

	// Printing the sorted array
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
