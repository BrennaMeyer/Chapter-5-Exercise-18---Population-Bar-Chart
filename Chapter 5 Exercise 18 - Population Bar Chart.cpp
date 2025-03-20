// Chapter 5 Exercise 18 - Population Bar Chart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programmer :Brenna Meyer 
//Date: March 20th,2025
//Requirements:Write a program that produces a bar chart showing the population growth of Prairieville, a small town in the Midwest,
// at 20-year intervals during the past 100 years. The program should read in the population figures 
// (rounded to the nearest 1,000 people) for 1900, 1920, 1940, 1960, 1980, and 2000 from a file. For each year, 
// it should display the date and a bar consisting of one asterisk for each 1,000 people. The data can be found in the People.txt file.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inputFile;
	string years;

	cout << "PRAIRIEVILLE POPULATION GROWTH\n";
	cout << "(each * represents 1,000 people)\n";

	inputFile.open("People.txt");
	if (inputFile)
	{
		while (getline(inputFile, years))
		{
			cout << years << endl;
		}
	}
	else
	{
		cout << "Error opening file." << endl;
	}

	inputFile.close();

	return 0;
}


