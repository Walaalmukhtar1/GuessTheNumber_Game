#include <iostream>
using namespace std;

int main() {

	int num = 6;
	int guess;
	string choice;

	cout << "Guess a number between 1-10 \t";
	cin >> guess;

	while (guess!=num){

		if (guess > num) {
			cout << "The number you guessed is greater, do you want to try again?";
			cin >> choice;
			if (choice == "yes")
			{
				cout << "Guess a number between 1-10 \t";
				cin >> guess;
				continue;
			}
			if (choice == "no")
			{
				break;
			}
		}
		else if (guess < num)
		{
			cout << "The number is you guess is less than that, do you want to try again?";
			cin >> choice;
			if (choice == "yes")
			{
				cout << "Guess a number between 1-10 \t";
				cin >> guess;
				continue;
			}
			else
			{
				break;
			}
		}

	}
	if (guess == num) {
		cout << "Your guess is correct! BINGO" << endl;
	}


	return 0;
}