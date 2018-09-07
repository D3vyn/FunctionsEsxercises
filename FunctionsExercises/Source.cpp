#include <iostream>
#include <algorithm>
#include <cstdlib>
# include <ctime>
using namespace std;

//1) 1122321

//void PrintInteger(int variable)
//{
//	std::cout << variable << std::endl;
//}
//int main()
//{
//	int the_variable = 1;
//	PrintInteger(the_variable);
//	{
//		PrintInteger(the_variable);
//		int the_variable = 2;
//		PrintInteger(the_variable);
//		{
//			PrintInteger(the_variable);
//			int the_variable = 3;
//			PrintInteger(the_variable);
//		}
//		PrintInteger(the_variable);
//	}
//	PrintInteger(the_variable);
//}

//2) Printing out smaller number

//int main()
//{
//	int num1, num2;
//	std::cout << "Enter 2 Numbers" << std::endl;
//	std::cin >> num1 >> num2;
//	std::cout << std::min(num1, num2) << '\n';
//	system("pause");
//}

//3) 

//int main()
//{
//	int smallest(int x, int y, int z) 
//	
//		if (int smallest = min(x, y))
//		{
//			return min(smallest, z);
//		}
//	system("pause");
//}

//4) 

//int main()
//{
//	float number = 16.721f;
//	double Half = (number / 2);
//	float result = Half;
//	std::cout << result << std::endl;
//	system("pause");
//}

//5)

//int coin()
//{
//	int flip;
//	flip = rand() % 2 + 1;// assign random numbers
//	if (flip == 1)
//		std::cout << "The flip was heads." << std::endl;
//	else
//		std::cout << "The flip was tails." << std::endl;
//	//end if
//	return (flip);
//}
//int main()
//{
//	int flips;
//	std::cout << "Enter Number of flips: " << std::endl;
//	std::cin >> flips;
//	int NUM_FLIPS = flips;
//	int count, face, heads = 0, tails = 0;
//
//	// initialize the random number generator
//	srand(static_cast<int>(time(0)));
//
//	// generate and count the number of heads and tails
//	for (int count = 1; count <= NUM_FLIPS; count++)
//	{
//		face = coin();
//		if (face == 1)
//			heads++;
//		else
//			tails++;
//		std::cout << face << std::endl;
//	}
//
//	std::cout << "The number flips: " << NUM_FLIPS << std::endl;
//	std::cout << "The number of heads: " << heads << std::endl;
//	std::cout << "The number of tails: " << tails << std::endl;
//	system("pause");
//}

//6)

//int main()
//You can't call variables inside of variables
//{
//	int sum(int x, int y)
//	{
//		int result;
//		result = x + y;
//	}
//}
//-----------------------------
//You're supposed to swap the n & 0 in the
//'if (0 == n)' to be -> 'if (n == 0)'
//int main()
//{
//	int sum(int n)
//	{
//		if (0 == n)
//			return 0;
//		else
//			n = n + n;
//	}
//}
//-----------------------------
//calling for 'int square' from int main()
//int main()
//{
//	int main()
//	{
//		double x = 13.6;
//		std::cout << "square of 13.6 = " << square(x) << std::endl;
//	}
//}
//int square(int x)
//{
//	return x * x;
//}

//7) 

//int SumTo()
//{
//	//Your function called SumTo goes here
//}
//int main()
//{
//	int result = SumTo(3); //result = 1 + 2 + 3 = 6
//	std::cout << result << std::endl;
//	result = SumTo(15); //result should now be 120
//	std::cout << result << std::endl;
//}//8)//int SumArray()//{//	//Your function called SumArray goes here
//}
//int main()
//{
//	int integer_array[5] = { 7, 3, 2, 4, 9 };
//	int result = SumArray(integer_array, 5); //result = 25
//	std::cout << result << std::endl;
//}//9)
//int MinInArray()
//{
//	//Your function called MinInArray goes here
//}
//int main()
//{
//	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
//	int result = MinInArray(integer_array, 7); //result = 4
//	std::cout << result << std::endl;
//}

//10)

//int MultiplyByIndex()
//{
//	//Your function called MultiplyByIndex goes here
//}
//int main()
//{
//	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
//	int output_array[7] = {};
//	MultiplyByIndex(integer_array, output_array, 7);
//	//output_array should be {0, 15, 14, 12, 52, 95, 48};
//	return 0;
//}//11)//12)
//13)//14)//15)//16)//17) Rock, Paper, Scossors

int getuserchoice();
int quitORplay();
int playGame(int computermove, int usermove);
int whoWins(int result);
int playMatch(int usergames, int computergames);

//User's Choice
int getuserchoice()
{
	int userchoice;
	cout << "    =====================\n";
	cout << "    |ROCK PAPER SCISSORS|\n";
	cout << "    =====================\n\n";
	cout << "    =====================\n";
	cout << "    |      Rock (0)     |\n";
	cout << "    |     Paper (1)     |\n";
	cout << "    |    Scissors (2)   |\n";
	cout << "    =====================\n\n";
	cout << "     Enter your choice:" << endl;
	cin >> userchoice;
	return userchoice;
}
//Playing Game
int playGame(int computermove, int usermove)
{
	if (computermove == 0)
	{
		cout << "\nComputer chose rock\n" << endl;
		if (usermove == 0)
		{
			cout << "It's a draw!\n" << endl;
			return 0;
		}
		else if (usermove == 1)
		{
			cout << "You win!\n" << endl;
			return 1;
		}
		else if (usermove == 2)
		{
			cout << "Computer wins!\n" << endl;
			return -1;
		}
	}

	if (computermove == 1)
	{
		cout << "\nComputer chose paper\n" << endl;
		if (usermove == 0)
		{
			cout << "Computer wins!\n" << endl;
			return -1;
		}
		else if (usermove == 1)
		{
			cout << "It's a draw!\n" << endl;
			return 0;
		}
		else if (usermove == 2)
		{
			cout << "You win!\n" << endl;
			return 1;
		}
	}

	if (computermove == 2)
	{
		cout << "\nComputer chose scissors\n" << endl;
		if (usermove == 0)
		{
			cout << "You win!\n" << endl;
			return 1;
		}
		else if (usermove == 1)
		{
			cout << "Computer wins!\n" << endl;
			return -1;
		}
		else if (usermove == 2)
		{
			cout << "It's a draw!\n" << endl;
			return 0;
		}
	}
}

int whoWins(int result)
{
	if (result == 1)
	{
		return 1;
	}
	else if (result == -1)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}


//Play a Match
int playMatch(int usergames, int computergames)
{
	if (usergames == 2)
	{
		return 1;
	}
	else if (computergames == 2)
	{
		return -1;
	}
}

//Play Again? or Nah?
int quitORplay()
{
	int choice, keepplaying;
	cout << "     ===================\n";
	cout << "     |   Play again?   |\n";
	cout << "     |     Quit (1)    |\n";
	cout << "     |  Play again (0) |\n";
	cout << "     ===================\n";
	cout << "      Enter your choice: ";
	cin >> choice;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	if (choice == 1)
	{
		keepplaying = true;
		return keepplaying;
	}
	else
	{
		return 0;
	}
}


int main()
{
	bool keepplaying = false;
	int result;
	int UserComputerGames = 0;
	int UserComputerMatches = 0;
	int usermatches = 0, computermatches = 0, usergames = 0, computergames = 0;
	while (!keepplaying)
	{
		int computermove, usermove;
		computermove = rand() % 3; //picking computer's move
		usermove = getuserchoice();
		result = playGame(computermove, usermove);
		UserComputerGames = whoWins(result);
		if ((usergames == 2) || (computergames == 2))
		{
			usergames = 0;
			computergames = 0;
			UserComputerMatches = playMatch(usergames, computergames);
		}
		keepplaying = quitORplay();

	}
}