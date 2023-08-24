/*Date: 2023.08.10
Purpose: A console-cinema reserve program, mimics university exam*/

#include <stdio.h>


int main() 
{
	// set all array elements to specified char 

	char seat[5][5];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			seat[i][j] = '|';
		}
	}


	int seat_row = 1;
	int seat_col = 1;
	int user_column;
	int user_row = 0;


	while (1) {


		// --- Prints Column Letters
		printf("    ");
		for (int i = 0; i < 5; i++) {
			printf("%i  ", seat_col);
			seat_col++;
		}
		//printf("    A  B  C  D  E"); // Woodcutter solution to column letter print


		// --- Shows the matrix of seats
		for (int i = 0; i < 5; i++) {
			printf("\n %i", seat_row);
			seat_row++;
			for (int j = 0; j < 5; j++) {
				printf("  %c", seat[i][j]);
			}
		}

		// ---- Input from user ----

		printf("\n\nEnter the column and row number you would like to reserve: ");
		//scanf_s("%c%i", &user_column, sizeof(user_column), &user_row); // Sizeof needed because of scanf_s to ignore space
		scanf_s("%i%i", &user_column, &user_row); // Sizeof needed because of scanf_s to ignore space
		
		//changes the reserved seat to 1

		seat[user_row][user_column] = 'X';

		//Reset i and j to keep seat numbers
		seat_row = 1;
		seat_col = 1;
		system("cls"); // clear console

	}



}