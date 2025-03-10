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
	return 0;
}
