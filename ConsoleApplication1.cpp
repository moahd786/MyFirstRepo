#include <iostream>
using namespace std;
int main()
{
	int arr[5] = { 1,9,6,4,8 };
	cout << "{ ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ",";
	}
	cout << " }\n\n\n";
	for (int i = 0; i < 5; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			if (arr[i] > arr[j]) 
			{
				swap(arr[i], arr[j]);
			}
		}
	}
	cout << "{ ";
	for (int i = 0; i < 5; i++)
	{	
		cout << arr[i] << ",";
	}
	cout << " }";

	string stringArray[4] = { "apple", "orange", "banana", "grape" };

	cout << "\n\n{ ";
	for (int i = 0; i < 4; i++)
	{
		cout << stringArray[i] << ",";
	}
	cout << " }";


	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (stringArray[i] > stringArray[j])
			{
				swap(stringArray[i], stringArray[j]);
			}
		}
	}


	cout << "\n\n{ ";
	for (int i = 0; i < 4; i++)
	{
		cout << stringArray[i] << ",";
	}
	cout << " }";

	return 0;
}
