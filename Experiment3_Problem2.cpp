#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	cout << "This program stores temperature of Provinces A, B, and C for a week and displays it." << endl;

	int const a = 3, b = 7;
    char Province;
    int temperature [a][b];

    cout << "\nEnter all the temperature for a week of Province A, Province B and Province C.\n" << endl;
   
	for (int i = 0; i < a; ++i)
    {
	for (int j = 0; j < b; ++j)
    {
		if (i + 1 == 1) 
		Province = 'A'; 

		else if (i + 1 == 2) 
		Province = 'B';

		else if (i + 1 == 3) 
		Province = 'C';

    cout << "Province " << Province << ", Day " << j + 1 << " : ";
    cin >> temperature[i][j];
	} 
}

    cout << "\n\nDisplaying Values: \n" << endl;
    for (int i = 0; i < a; ++i)
    {
    	if (i + 1 == 1) 
		Province = 'A'; 

		else if (i + 1 == 2) 
		Province = 'B';

		else if (i + 1 == 3) 
		Province = 'C';

        for(int j = 0; j < b; ++j)
		{
        cout << "Province " << Province << ", Day " << j + 1 << " = " << temperature[i][j] << endl;    
        }
	}

getch ();
return 0;
}