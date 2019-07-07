#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	cout << "This program shows the smallest and largest integer, the total, and the average of an array that takes 15 elements only." << endl;

	int arr[15], n, i, small, large, sum = 0;
	double average;
	n = 15;

	for(i = 0; i < n; i++)
		{
			cout << "Enter number " << i + 1 << " : ";
			cin >> arr[i];
		}

	small = arr[0];
	large = arr[0];

	for (i = 1; i < n; i++)
	{
		if (arr[i] < small)
			small = arr[i];
		if (arr[i] > large)
			large = arr[i];
	}
	
	for (i = 0; i < n; i++)
	{
	sum += arr[i];
	}
	
	average = (float)sum / n;

	cout << "\nThe largest integer is: " << large << endl;
	cout << "\nThe smallest integer is: " << small << endl;
    cout << "\nThe sum is: " << sum << endl;
    cout << "\nThe average is: " << average << endl;

getch();
return 0;
}