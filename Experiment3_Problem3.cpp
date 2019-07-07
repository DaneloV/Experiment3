#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
int main()
{
	cout << "This program will print the letters in a char array in a reverse order, and shows the size of the array." << endl;

	char array[50];
	int size;

	cout << "\nEnter a char array:\n" << endl;
	cin >> array;
	
	size = 0;
	while (array[size] !='\0')
	size++;
	
	for (int j = size - 1; j >= 0; j--)
	{
	cout << array[j];
	}
	cout << "\nThe array size is: " << size << endl;


getch();
return 0;
}
