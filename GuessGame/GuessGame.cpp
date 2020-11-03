#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

int main() 
{
	srand(time(NULL));
	int number = rand() % 100;

	int guess = -1;
	std::cout << "Guess the number between 1 and 100. You have three tries: " << endl;
	int guessCount = 0; 

	while (guessCount < 8 && guess != number) {
		cout << "Guess a number:" << endl;
		cin >> guess;
		
		if (guess < number) {
			cout << "Too low! You tried " << guessCount+1 << " times." << endl;

		}
		else if (guess > number){
			cout << "Too high You tried " << guessCount + 1 << " times." << endl;
		}
		guessCount++;
	}

	if (guess == number) {
		cout << "Nice one! You guessed it!" << endl;
	}
	else {
		cout << "Unlucky, the number was " << number << endl;
	}
	return 0;
}