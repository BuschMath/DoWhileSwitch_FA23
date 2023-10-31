#include <iostream>

using namespace std;

int main()
{
	bool again = true;
	char input;
	do
	{
		cout << "Do you want to run the loop again? (y/n): ";

		cin >> input;
		switch (input)
		{
			case 'y': again = true;
				break;

			case 'n': again = false;
				break;

			default: cout << "Invalid input. Please try again." << endl;
				break;
		}
	} while (again);

	return 0;
}