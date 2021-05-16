#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;


int main()
{
	int testOne = 0;
	int testTwo = 0;
	int testThree = 0;
	int testFour = 0;
	int testScore = 0;
	string grade;
	int studentNumber = 0;

	cout << "Please Enter the Student Number: ";
	cin >> studentNumber;
	cout << "Please enter the first test score: ";
	cin >> testOne;
	cout << "Please enter the second test score: ";
	cin >> testTwo;
	cout << "Please enter the third test score: ";
	cin >> testThree;
	cout << "Please enter the final test score: ";
	cin >> testFour;
	testScore = testOne + testTwo + testThree + testFour;
	if (testScore < 240)
	{
		grade = "F";
	}
	else if (testScore >= 240 && testScore <= 279) 
	{
		grade = "D";
	}
	else if (testScore >= 280 && testScore <= 339)
	{
		grade = "C";
	}
	else if (testScore >= 340 && testScore <= 371)
	{
		grade = "B";
	}
	else if (testScore >= 372 && testScore <= 400)
	{
		grade = "A";
	}
	cout << "Student " << studentNumber << "'s grade: " << grade << endl;
}