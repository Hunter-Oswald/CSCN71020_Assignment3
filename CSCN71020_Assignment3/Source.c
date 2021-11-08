// soft impl - assignment 3 - rock paper scissors
// Hunter Oswald

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "RPSGame.h"
#define MAX_WORD_LEN 15

int main(void) {

	char* playerOne = "Rock";
	char* playerTwo = "Scissors";
	char expected[MAX_WORD_LEN] = "Player1";

	char* actual = RPS(playerOne, playerTwo);
	printf("%s\n", actual);

	return (0);
}

char* RPS(char* playerOneChoice, char* playerTwoChoice) {
	if ((playerOneChoice == "Rock") && (playerTwoChoice == "Scissors")) {
		return "Player1";
	}
	else if ((playerTwoChoice == "Rock") && (playerOneChoice == "Scissors")) {
		return "Player2";
	}
	else if ((playerOneChoice == "Scissors") && (playerTwoChoice == "Paper")) {
		return "Player1";
	}
	else if ((playerTwoChoice == "Scissors") && (playerOneChoice == "Paper")) {
		return "Player2";
	}
	else if ((playerOneChoice == "Paper") && (playerTwoChoice == "Rock")) {
		return "Player1";
	}
	else if ((playerTwoChoice == "Paper") && (playerOneChoice == "Rock")) {
		return "Player2";
	}
	else if ((playerOneChoice == "Rock") && (playerTwoChoice == "Rock")) {
		return "Draw";
	}
	else if ((playerOneChoice == "Scissors") && (playerTwoChoice == "Scissors")) {
		return "Draw";
	}
	else if ((playerOneChoice == "Paper") && (playerTwoChoice == "Paper")) {
		return "Draw";
	}
	else {
		return "Invalid";
	}
}