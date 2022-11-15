#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	const int count = 5;
	string students[count];

	cout << "Enter names: ";

	for (int i = 0; i < count; i++)
	{
		cin >> students[i];
	}
	cout << "\n";

	char letters[count];

	for (int i = 0; i < count; i++) //Fill array with first letters
	{
		letters[i] = students[i][0];
		cout << letters[i] << ", ";
	}

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count - 1; j++)
		{
			if (letters[j] > letters[j + 1])
			{
				int x = letters[j];
				letters[j] = letters[j + 1];
				letters[j + 1] = x;
			}
		}
	}

	cout << "\n";

	for (int i = 0; i < count; i++)
	{
		cout << letters[i] << ", ";
	}

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count - 1; j++)
		{
			if (students[j][0] > letters[j])
			{
				string temp = students[j];
				students[j] = students[j + 1];
				students[j + 1] = temp; 
			}
		}
	}

	cout << "\n";

	for (int i = 0; i < count; i++) 
	{
		cout << students[i] << ", ";
	}
}
