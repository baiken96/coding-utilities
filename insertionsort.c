#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int getsize(char*);
void insertion_sort(int[],int);

int main()
{

	char buf[256];
	printf("%s\n", "Enter the integers to sort separated by spaces: ");
	fgets(buf, 256, stdin);

	int size = getsize(buf);
	int n[size];
	int index=0;
	char *c = strtok(buf, " ");

	do
	{

		n[index] = atoi(c);
		++index;
		c = strtok(NULL, " ");

	} while (c != NULL);

	insertion_sort(n, size-1);

	for (int i=0;i<size;++i)
		printf("%d ", n[i]);
	printf("\n");

	return 0;

}

int getsize(char *c)
{

	int count=1;
	for (int i=0; i<strlen(c); ++i)
	{

		if (c[i] == ' ')
			++count;

	}
	return count;

}

void insertion_sort(int arr[], int i)
{

	if (i>0)
	{

		insertion_sort(arr, i-1);
		int x = arr[i];
		int j = i-1;
		while (j>=0 && arr[j]>x)
		{

			arr[j+1] = arr[j];
			j-=1;

		}
		arr[j+1]=x;

	}

}
