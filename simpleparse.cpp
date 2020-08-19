#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{

	string line;
	
	ifstream file("simpleparse.txt");

	if (file.is_open())
	{

		while (getline(file, line))
		{

			stringstream sstream(line);
			string elem;
			vector<string> data;
			while (getline(sstream, elem, ' '))
			{

				data.push_back(elem);

			}

			int len = data.size();
			int nums[len];
			for (int i=0; i<len; ++i)
			{

				nums[i] = stoi(data[i]);

			}

			int sum=0;
			for (int j=0; j<len; ++j)
			{

				sum += nums[j];

			}

			cout << sum << endl;

		}

		file.close();

	}
	else
		cout << "Failed to open file" << endl;

	return 0;

}
