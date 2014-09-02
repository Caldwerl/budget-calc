/*
 * Budget
 * Brian Caldwell
 * 09/01/2013
 *
 * Read in amount spent from a txt file.
 * Output the total amount spent by category and total.
 *
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdio>

using namespace std;

int main()
{
    //Declares and initializes variables to hold data
	int foodSum=0, transportSum=0, entertainmentSum=0;
	int clothingSum=0, miscSum=0, totalSum=0, temp=0, i=0;
	char categoryVar;

	//Declares the file input variable
	ifstream inputFile;
	inputFile.open("budget.txt");

	//While loop that reads in all data from
	//the input file
	while(inputFile.peek() > 0){

		//Reads in the category and amount spent
		//for a line in the input file
		inputFile >> categoryVar >> temp;

		if(categoryVar == 'f' || categoryVar == 'F'){
			foodSum += temp;
			totalSum += temp;
		}

		if(categoryVar == 'e' || categoryVar == 'E'){
			entertainmentSum += temp;
			totalSum += temp;
		}

		if(categoryVar == 't' || categoryVar == 'T'){
			transportSum += temp;
			totalSum += temp;
		}

		if(categoryVar == 'c' || categoryVar == 'C'){
			clothingSum += temp;
			totalSum += temp;
		}

		if(categoryVar == 'm' || categoryVar == 'M'){
			miscSum += temp;
			totalSum += temp;
		}

	    categoryVar = 0;
	    temp = 0;

	}

	//Prints the sub totals and total amount spent
	cout << "Food:  " << foodSum << endl;
	cout << "Transport:  " << transportSum << " || " << (transportSum/totalSum)*100 << "%" << endl;
	cout << "Clothing:  " << clothingSum << " || " << (clothingSum/totalSum)*100 << "%" << endl;
	cout << "Entertainment:  " << entertainmentSum << " || " << (entertainmentSum/totalSum)*100 << "%" << endl;
	cout << "Miscellaneous:  " << miscSum << " || " << (miscSum/totalSum)*100 << "%" << endl << endl;
	cout << "Total:  " << totalSum << endl;

	system("PAUSE");

	//Closes the input file stream
	inputFile.close();

	return 0;
}
