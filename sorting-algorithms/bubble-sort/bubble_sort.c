#include <stdio.h>

void bubble_sort(int arr[], int size);
void print_array(int arr[], int size);
void swap(int *a, int *b);
int arrsize(int arr[]);

int main() 
{
	int small[10] = {1,5,2,7,9,6,4,3,8};
	int medium[50] = {63,47,48,96,86,75,49,10,3,94,25,68,56,82,19,13,81,35,58,12,95,28,11,69,54,24,100,85,44,32,26,84,92,27,60,23,38,39,14,57,79,88,91,7,99,30,36,4,21,16};
	int smallsize = sizeof(small) / sizeof(small[0]);
	int mediumsize = sizeof(medium) / sizeof(medium[0]);
	printf("Small Unsorted Array: ");
	print_array(small, smallsize);
	bubble_sort(small, smallsize);
	printf("\nSmall Sorted Array: ");
	print_array(small, smallsize);
	printf("\nMedium Unsorted Array: ");
	print_array(medium, mediumsize);
	bubble_sort(medium, mediumsize);
	printf("\nMedium Sorted Array: ");
	print_array(medium, mediumsize);
	return 0;
}

void bubble_sort(int arr[], int size) 
{
	int i;
	int swapped = 1;
	while(swapped)
	{
		swapped = 0;
		for(i = 0; i < size-1; ++i)
		{
			if(arr[i] > arr[i+1]) 
			{
				swap(&arr[i], &arr[i+1]);
				swapped = 1;
			}
		}
	}
}

void swap(int *ap, int *bp) 
{
	int *tmp = *ap;
	*ap = *bp;
	*bp = tmp;
}

void print_array(int arr[], int size) 
{
	int i;
	for(i=0;i<size;i++) 
	{
		printf("%d ", arr[i]);
	}
}


