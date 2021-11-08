
#include "pch.h"
#include "CppUnitTest.h"
#define MAX_WORD_LEN 15

extern "C" {
#define _CRT_SECURE_NO_WARNINGS
#include "RPSGame.h"
#include <stdio.h>
#include <string.h>
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Assignment3tests
{
	TEST_CLASS(Assignment3tests)
	{
	public:
		
		TEST_METHOD(T001_RPSGame_rockVsScissors)
		{
			char* playerOne = "Rock";
			char* playerTwo = "Scissors";
			char* expected = "Player1";

			// assert
			Assert::AreEqual(expected, RPS(playerOne, playerTwo));
		}

		TEST_METHOD(T002_RPSGame_scissorsVsPaper)
		{
			char* playerOne = "Scissors";
			char* playerTwo = "Paper";
			char* expected = "Player1";

			// assert
			Assert::AreEqual(expected, RPS(playerOne, playerTwo));
		}
	};
}
