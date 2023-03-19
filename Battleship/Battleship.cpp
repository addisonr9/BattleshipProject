#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int rowLength{ 15 };
	const int colLength{ 15 };
	int x{};
	int y{};

	// Initialize grids
	char hiddenGrid[rowLength][colLength]{};
	char userGrid[rowLength][colLength]{};

	// Create grid of waves for hidden grid
	for (int row = 0; row < rowLength; row++) {
		for (int col = 0; col < colLength; col++) {
			hiddenGrid[row][col] = '~';
		}
	}

	// Create ships - need to figure out how to check ship health
	// Place one ship
	hiddenGrid[4][4] = 's';
	hiddenGrid[4][5] = 's';
	hiddenGrid[4][6] = 's';

	// Create grid of waves for user grid
	for (int row = 0; row < rowLength; row++) {
		for (int col = 0; col < colLength; col++) {
			userGrid[row][col] = '~';
		}
	}
	// hsldfjldj

	// Display user grid
	for (int row = 0; row < rowLength; row++) {
		for (int col = 0; col < colLength; col++) {
			cout << userGrid[row][col] << " ";
		}
		cout << endl;
	}

	cout << "Begin!" << endl;

	for (int turn = 0; turn < 3; turn++) {
		// Prompt user for x y coordinates
		//  Print out hit or miss
		//  Print out user grid
		cout << "Enter x coordinate: ";
		cin >> x;
		cout << "Enter y coordinate: ";
		cin >> y;

		// Check hiddenGrid to see if coordinates were a hit or miss
		if (hiddenGrid[x][y] == 's') {
			userGrid[x][y] = 'X';
			hiddenGrid[x][y] = 'X';
			cout << "HIT!" << endl;
		}
		else {
			userGrid[x][y] = 'O';
			cout << "MISS" << endl;
		}

		for (int row = 0; row < rowLength; row++) {
			for (int col = 0; col < colLength; col++) {
				cout << userGrid[row][col] << " ";
			}
			cout << endl;
		}
	}
	// Loop end

	// Randomly place ships

	// Take user input and find out if ship lives in coordinate

	// Prompt user again for input



	//


	return 0;
}