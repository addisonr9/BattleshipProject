#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int rowLength{ 30 };
	const int colLength{ 30 };

	// Initialize grids
	char hiddenGrid[rowLength][colLength]{};
	char userGrid[rowLength][colLength]{};

	// Create grid of waves for hidden grid
	for (int row = 0; row < rowLength; row++) {
		for (int col = 0; col < colLength; col++) {
			hiddenGrid[row][col] = '~';
		}
	}

	// Place one ship
	hiddenGrid[4][4] = 

	// Create grid of waves for user grid
	for (int row = 0; row < rowLength; row++) {
		for (int col = 0; col < colLength; col++) {
			userGrid[row][col] = '~';
		}
	}
	// Create ships
	 
	
	// Display user grid
	for (int row = 0; row < rowLength; row++) {
		for (int col = 0; col < colLength; col++) {
			cout << userGrid[row][col];
		}
		cout << endl;
	}

	/*for (int row = 0; row < 5; row++) {
		for (int col = 0; col < 5; col++) {
			cout << grid[row][col];
		}
		cout << endl;
	}*/
	/*grid[0][1] = '~';
	cout << grid[0][1];*/
	// Randomly place ships
	
	// Prompt user choose (x,y) coordinates

	// Take user input and find out if ship lives in coordinate

	// Tell user if hit or miss

	// Prompt user again for input



	// 


	return 0;
}