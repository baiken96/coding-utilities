#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int getsize(string);
void insertion_sort(int[], int);

int main()
{

	string input;

	cout << "Enter the integers to sort separated by spaces: " << endl;
	getline(cin, input);

	int size = getsize(input);
	int n[size];
	stringstream sstream(input);
	string s;
	int index=0;
	while (getline(sstream, s, ' '))
	{
		n[index]=stoi(s);
		++index;
	}

	insertion_sort(n, size-1);

	for (int i=0;i<size;++i)
	{
		cout << n[i] << " ";
	}
	cout << endl;

	return 0;

}

int getsize(string s)
{

	int count = 1;
	for (int i=0; i<s.length(); ++i)
	{

		if (s[i] == ' ')
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
