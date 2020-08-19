#include "stdlib.h"
#include "stdio.h"
#include "string.h"

# define SIZE 256

int main()
{

	char line[SIZE];
	FILE *file = fopen("simpleparse.txt", "r");

	int *nums = (int*)malloc(sizeof(int));
	int index = 0;
	while (fgets(line, SIZE, (FILE*)file) != NULL)
	{

		char *token = strtok(line, " ");
		do
		{

			if (index==0)
			{

				nums[index] = atoi(token);
				++index;
				token = strtok(NULL, " ");

			}
			else
			{

				nums = (int*)realloc(nums, (sizeof(nums)*sizeof(int))+sizeof(int));
				nums[index] = atoi(token);
				++index;
				token = strtok(NULL, " ");

			}

		} while (token != NULL);

		int sum=0;
		for (int i=0; i<index; ++i)
		{

			sum+=nums[i];

		}

		printf("%d\n", sum);

	}

	fclose(file);

	return 0;

}
