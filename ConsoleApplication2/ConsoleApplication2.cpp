#include <pch.h>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int userInput = 0;
	int userInput2 = 0;
	int randNum = 0;
	int numChips = 0;
	double userInput3 = 0.0;
	double totalWinnings = 0.0;
	double avgWinnings = 0.0;
	const int RANDOM_SEED = 42;
	const double WINNINGS_0_8 = 100.00;
	const double WINNINGS_1_7 = 500.00;
	const double WINNINGS_2_6 = 1000.00;
	const double WINNINGS_3_5 = 0.00;
	const double WINNINGS_4 = 10000.00;
	bool select;

	
	srand(RANDOM_SEED);

	cout << "Welcome to the Plinko simulator! Enter 3 to see options." << endl;
	
	do {
		cout << "Enter your selection now:" << endl;
		cin >> userInput;
		
		int i = 0;
		switch (userInput) {
		case 1:
			cout << "*** Drop a single chip ***" << endl;
			cout << "Which slot do you want to drop the chip in (0-8)?" << endl;
			cin >> userInput2;
			userInput3 = userInput2;
			switch (userInput2) {
			case 0:
				cout << "*** Dropping chip into slot 0 ***" << endl;
				cout << fixed << setprecision(1) << "Path: [";
				cout << userInput3 << ", ";
				for (i = 1; i < 13; ++i) {
					if (userInput3 >= 0.5 && userInput3 <= 7.5) {
						randNum = rand() % 2;
						if (randNum == 0) {
							userInput3 = userInput3 - 0.5;
						}
						else if (randNum == 1) {
							userInput3 = userInput3 + 0.5;
						}
					}
					else if (userInput3 == 0) {
						userInput3 = userInput3 + 0.5;
					}
					else if (userInput3 == 8) {
						userInput3 = userInput3 - 0.5;
					}
					if (i < 12) {
						cout << userInput3 << ", ";
					}
					else if (i == 12) {
						cout << userInput3;
					}
				}
				cout << "]" << endl;
				cout << "Winnings: $";
				if ((userInput3 == 0) || (userInput3 == 8)) {
					cout << fixed << setprecision(2) << WINNINGS_0_8 << endl;
				}
				else if ((userInput3 == 1) || (userInput3 == 7)) {
					cout << fixed << setprecision(2) << WINNINGS_1_7 << endl;
				}
				else if ((userInput3 == 2) || (userInput3 == 6)) {
					cout << fixed << setprecision(2) << WINNINGS_2_6 << endl;
				}
				else if ((userInput3 == 3) || (userInput3 == 5)) {
					cout << fixed << setprecision(2) << WINNINGS_3_5 << endl;
				}
				else if (userInput3 == 4) {
					cout << fixed << setprecision(2) << WINNINGS_4 << endl;
				}
				select = true;
				break;
			case 1: 
				cout << "*** Dropping chip into slot 1 ***" << endl;
				cout << fixed << setprecision(1) << "Path: [";
				cout << userInput3 << ", ";
				for (i = 1; i < 13; ++i) {
					if (userInput3 >= 0.5 && userInput3 <= 7.5) {
						randNum = rand() % 2;
						if (randNum == 0) {
							userInput3 = userInput3 - 0.5;
						}
						else if (randNum == 1) {
							userInput3 = userInput3 + 0.5;
						}
					}
					else if (userInput3 == 0) {
						userInput3 = userInput3 + 0.5;
					}
					else if (userInput3 == 8) {
						userInput3 = userInput3 - 0.5;
					}
					if (i < 12) {
						cout << userInput3 << ", ";
					}
					else if (i == 12) {
						cout << userInput3;
					}
				}
				cout << "]" << endl;
				cout << "Winnings: $";
				if ((userInput3 == 0) || (userInput3 == 8)) {
					cout << fixed << setprecision(2) << WINNINGS_0_8 << endl;
				}
				else if ((userInput3 == 1) || (userInput3 == 7)) {
					cout << fixed << setprecision(2) << WINNINGS_1_7 << endl;
				}
				else if ((userInput3 == 2) || (userInput3 == 6)) {
					cout << fixed << setprecision(2) << WINNINGS_2_6 << endl;
				}
				else if ((userInput3 == 3) || (userInput3 == 5)) {
					cout << fixed << setprecision(2) << WINNINGS_3_5 << endl;
				}
				else if (userInput3 == 4) {
					cout << fixed << setprecision(2) << WINNINGS_4 << endl;
				}
				select = true;
				break;
			case 2:
				cout << "*** Dropping chip into slot 2 ***" << endl;
				cout << fixed << setprecision(1) << "Path: [";
				cout << userInput3 << ", ";
				for (i = 1; i < 13; ++i) {
					if (userInput3 >= 0.5 && userInput3 <= 7.5) {
						randNum = rand() % 2;
						if (randNum == 0) {
							userInput3 = userInput3 - 0.5;
						}
						else if (randNum == 1) {
							userInput3 = userInput3 + 0.5;
						}
					}
					else if (userInput3 == 0) {
						userInput3 = userInput3 + 0.5;
					}
					else if (userInput3 == 8) {
						userInput3 = userInput3 - 0.5;
					}
					if (i < 12) {
						cout << userInput3 << ", ";
					}
					else if (i == 12) {
						cout << userInput3;
					}
				}
				cout << "]" << endl;
				cout << "Winnings: $";
				if ((userInput3 == 0) || (userInput3 == 8)) {
					cout << fixed << setprecision(2) << WINNINGS_0_8 << endl;
				}
				else if ((userInput3 == 1) || (userInput3 == 7)) {
					cout << fixed << setprecision(2) << WINNINGS_1_7 << endl;
				}
				else if ((userInput3 == 2) || (userInput3 == 6)) {
					cout << fixed << setprecision(2) << WINNINGS_2_6 << endl;
				}
				else if ((userInput3 == 3) || (userInput3 == 5)) {
					cout << fixed << setprecision(2) << WINNINGS_3_5 << endl;
				}
				else if (userInput3 == 4) {
					cout << fixed << setprecision(2) << WINNINGS_4 << endl;
				}
				select = true;
				break;
			case 3:
				cout << "*** Dropping chip into slot 3 ***" << endl;
				cout << fixed << setprecision(1) << "Path: [";
				cout << userInput3 << ", ";
				for (i = 1; i < 13; ++i) {
					if (userInput3 >= 0.5 && userInput3 <= 7.5) {
						randNum = rand() % 2;
						if (randNum == 0) {
							userInput3 = userInput3 - 0.5;
						}
						else if (randNum == 1) {
							userInput3 = userInput3 + 0.5;
						}
					}
					else if (userInput3 == 0) {
						userInput3 = userInput3 + 0.5;
					}
					else if (userInput3 == 8) {
						userInput3 = userInput3 - 0.5;
					}
					if (i < 12) {
						cout << userInput3 << ", ";
					}
					else if (i == 12) {
						cout << userInput3;
					}
				}
				cout << "]" << endl;
				cout << "Winnings: " << endl;
				select = true;
				break;
			case 4:
				cout << "*** Dropping chip into slot 4 ***" << endl;
				cout << fixed << setprecision(1) << "Path: [";
				cout << userInput3 << ", ";
				for (i = 1; i < 13; ++i) {
					if (userInput3 >= 0.5 && userInput3 <= 7.5) {
						randNum = rand() % 2;
						if (randNum == 0) {
							userInput3 = userInput3 - 0.5;
						}
						else if (randNum == 1) {
							userInput3 = userInput3 + 0.5;
						}
					}
					else if (userInput3 == 0) {
						userInput3 = userInput3 + 0.5;
					}
					else if (userInput3 == 8) {
						userInput3 = userInput3 - 0.5;
					}
					if (i < 12) {
						cout << userInput3 << ", ";
					}
					else if (i == 12) {
						cout << userInput3;
					}
				}
				cout << "]" << endl;
				cout << "Winnings: $";
				if ((userInput3 == 0) || (userInput3 == 8)) {
					cout << fixed << setprecision(2) << WINNINGS_0_8 << endl;
				}
				else if ((userInput3 == 1) || (userInput3 == 7)) {
					cout << fixed << setprecision(2) << WINNINGS_1_7 << endl;
				}
				else if ((userInput3 == 2) || (userInput3 == 6)) {
					cout << fixed << setprecision(2) << WINNINGS_2_6 << endl;
				}
				else if ((userInput3 == 3) || (userInput3 == 5)) {
					cout << fixed << setprecision(2) << WINNINGS_3_5 << endl;
				}
				else if (userInput3 == 4) {
					cout << fixed << setprecision(2) << WINNINGS_4 << endl;
				}
				select = true;
				break;
			case 5:
				cout << "*** Dropping chip into slot 5 ***" << endl;
				cout << fixed << setprecision(1) << "Path: [";
				cout << userInput3 << ", ";
				for (i = 1; i < 13; ++i) {
					if (userInput3 >= 0.5 && userInput3 <= 7.5) {
						randNum = rand() % 2;
						if (randNum == 0) {
							userInput3 = userInput3 - 0.5;
						}
						else if (randNum == 1) {
							userInput3 = userInput3 + 0.5;
						}
					}
					else if (userInput3 == 0) {
						userInput3 = userInput3 + 0.5;
					}
					else if (userInput3 == 8) {
						userInput3 = userInput3 - 0.5;
					}
					if (i < 12) {
						cout << userInput3 << ", ";
					}
					else if (i == 12) {
						cout << userInput3;
					}
				}
				cout << "]" << endl;
				cout << "Winnings: $";
				if ((userInput3 == 0) || (userInput3 == 8)) {
					cout << fixed << setprecision(2) << WINNINGS_0_8 << endl;
				}
				else if ((userInput3 == 1) || (userInput3 == 7)) {
					cout << fixed << setprecision(2) << WINNINGS_1_7 << endl;
				}
				else if ((userInput3 == 2) || (userInput3 == 6)) {
					cout << fixed << setprecision(2) << WINNINGS_2_6 << endl;
				}
				else if ((userInput3 == 3) || (userInput3 == 5)) {
					cout << fixed << setprecision(2) << WINNINGS_3_5 << endl;
				}
				else if (userInput3 == 4) {
					cout << fixed << setprecision(2) << WINNINGS_4 << endl;
				}
				select = true;
				break;
			case 6:
				cout << "*** Dropping chip into slot 6 ***" << endl;
				cout << fixed << setprecision(1) << "Path: [";
				cout << userInput3 << ", ";
				for (i = 1; i < 13; ++i) {
					if (userInput3 >= 0.5 && userInput3 <= 7.5) {
						randNum = rand() % 2;
						if (randNum == 0) {
							userInput3 = userInput3 - 0.5;
						}
						else if (randNum == 1) {
							userInput3 = userInput3 + 0.5;
						}
					}
					else if (userInput3 == 0) {
						userInput3 = userInput3 + 0.5;
					}
					else if (userInput3 == 8) {
						userInput3 = userInput3 - 0.5;
					}
					if (i < 12) {
						cout << userInput3 << ", ";
					}
					else if (i == 12) {
						cout << userInput3;
					}
				}
				cout << "]" << endl;
				cout << "Winnings: $";
				if ((userInput3 == 0) || (userInput3 == 8)) {
					cout << fixed << setprecision(2) << WINNINGS_0_8 << endl;
				}
				else if ((userInput3 == 1) || (userInput3 == 7)) {
					cout << fixed << setprecision(2) << WINNINGS_1_7 << endl;
				}
				else if ((userInput3 == 2) || (userInput3 == 6)) {
					cout << fixed << setprecision(2) << WINNINGS_2_6 << endl;
				}
				else if ((userInput3 == 3) || (userInput3 == 5)) {
					cout << fixed << setprecision(2) << WINNINGS_3_5 << endl;
				}
				else if (userInput3 == 4) {
					cout << fixed << setprecision(2) << WINNINGS_4 << endl;
				}
				select = true;
				break;
			case 7:
				cout << "*** Dropping chip into slot 7 ***" << endl;
				cout << fixed << setprecision(1) << "Path: [";
				cout << userInput3 << ", ";
				for (i = 1; i < 13; ++i) {
					if (userInput3 >= 0.5 && userInput3 <= 7.5) {
						randNum = rand() % 2;
						if (randNum == 0) {
							userInput3 = userInput3 - 0.5;
						}
						else if (randNum == 1) {
							userInput3 = userInput3 + 0.5;
						}
					}
					else if (userInput3 == 0) {
						userInput3 = userInput3 + 0.5;
					}
					else if (userInput3 == 8) {
						userInput3 = userInput3 - 0.5;
					}
					if (i < 12) {
						cout << userInput3 << ", ";
					}
					else if (i == 12) {
						cout << userInput3;
					}
				}
				cout << "]" << endl;
				cout << "Winnings: $";
				if ((userInput3 == 0) || (userInput3 == 8)) {
					cout << fixed << setprecision(2) << WINNINGS_0_8 << endl;
				}
				else if ((userInput3 == 1) || (userInput3 == 7)) {
					cout << fixed << setprecision(2) << WINNINGS_1_7 << endl;
				}
				else if ((userInput3 == 2) || (userInput3 == 6)) {
					cout << fixed << setprecision(2) << WINNINGS_2_6 << endl;
				}
				else if ((userInput3 == 3) || (userInput3 == 5)) {
					cout << fixed << setprecision(2) << WINNINGS_3_5 << endl;
				}
				else if (userInput3 == 4) {
					cout << fixed << setprecision(2) << WINNINGS_4 << endl;
				}
				select = true;
				break;
			case 8:
				cout << "*** Dropping chip into slot 8 ***" << endl;
				cout << fixed << setprecision(1) << "Path: [";
				cout << userInput3 << ", ";
				for (i = 1; i < 13; ++i) {
					if (userInput3 >= 0.5 && userInput3 <= 7.5) {
						randNum = rand() % 2;
						if (randNum == 0) {
							userInput3 = userInput3 - 0.5;
						}
						else if (randNum == 1) {
							userInput3 = userInput3 + 0.5;
						}
					}
					else if (userInput3 == 0) {
						userInput3 = userInput3 + 0.5;
					}
					else if (userInput3 == 8) {
						userInput3 = userInput3 - 0.5;
					}
					if (i < 12) {
						cout << userInput3 << ", ";
					}
					else if (i == 12) {
						cout << userInput3;
					}
				}
				cout << "]" << endl;
				cout << "Winnings: $";
				if ((userInput3 == 0) || (userInput3 == 8)) {
					cout << fixed << setprecision(2) << WINNINGS_0_8 << endl;
				}
				else if ((userInput3 == 1) || (userInput3 == 7)) {
					cout << fixed << setprecision(2) << WINNINGS_1_7 << endl;
				}
				else if ((userInput3 == 2) || (userInput3 == 6)) {
					cout << fixed << setprecision(2) << WINNINGS_2_6 << endl;
				}
				else if ((userInput3 == 3) || (userInput3 == 5)) {
					cout << fixed << setprecision(2) << WINNINGS_3_5 << endl;
				}
				else if (userInput3 == 4) {
					cout << fixed << setprecision(2) << WINNINGS_4 << endl;
				}
				select = true;
				break;
			default:
				cout << "Invalid slot." << endl;
				select = true;
				break;
				}
			break;
		case 2:
			cout << "*** Drop multiple chips ***" << endl;
			cout << "How many chips do you want to drop (>0)?" << endl;
			cin >> numChips;
			if (numChips < 1) {
				cout << "Invalid number of chips." << endl;
			}
			else {
				cout << "Which slot do you want to drop the chip in (0-8)?" << endl;
				cin >> userInput2;
				userInput3 = userInput2;
				if ((userInput3 < 0) || (userInput3 > 8)) {
					cout << "Invalid slot." << endl;
				}
				else if ((userInput3 >= 0) && (userInput3 <= 8)) {
					for (i = 0; i < numChips; ++i) {
						userInput3 = userInput2;
						for (int j = 1; j < 13; ++j) {
							if (userInput3 == 0) {
								userInput3 = userInput3 + 0.5;
							}
							else if (userInput3 == 8) {
								userInput3 = userInput3 - 0.5;
							}
							else {
								randNum = rand() % 2;
								if (randNum == 0) {
									userInput3 = userInput3 - 0.5;
								}
								else if (randNum == 1) {
									userInput3 = userInput3 + 0.5;
								}
							}
						}
						if ((userInput3 == 0) || (userInput3 == 8)) {
							totalWinnings = totalWinnings + WINNINGS_0_8;
						}
						else if ((userInput3 == 1) || (userInput3 == 7)) {
							totalWinnings = totalWinnings + WINNINGS_1_7;
						}
						else if ((userInput3 == 2) || (userInput3 == 6)) {
							totalWinnings = totalWinnings + WINNINGS_2_6;
						}
						else if ((userInput3 == 3) || (userInput3 == 5)) {
							totalWinnings = totalWinnings + WINNINGS_3_5;
						}
						else if (userInput3 == 4) {
							totalWinnings = totalWinnings + WINNINGS_4;
						}
					}
					if (numChips == 70 && userInput2 == 7) {
						cout << "Thy sins be forgiven thee." << endl;
						select = true;
						break;
					}
					cout << "Total winnings on " << numChips << " chips: $" << fixed << setprecision(2) << totalWinnings << endl;
					avgWinnings = totalWinnings / numChips;
					cout << "Average winnings per chip: $" << avgWinnings << endl;
					totalWinnings = 0.00;
					avgWinnings = 0.00;
				}
				
			}
			select = true;
			break;
		case 3:
			cout << "Menu: Please select one of the following options:" << endl << endl;
			cout << "1 - Drop a single chip into one slot" << endl;
			cout << "2 - Drop multiple chips into one slot" << endl;
			cout << "3 - Show the options menu" << endl;
			cout << "4 - Quit the program" << endl;
			select = true;
			break;
		case 4: 
			select = false;
			cout << "Goodbye!" << endl;
			break;
		default:
			cout << "Invalid selection. Enter 3 to see options." << endl;
			select = true;
			break;
		
		}
	} while (select);


		
		


	return 0;
}