// Course:  CS213 - Programming II  - 2018
// Title:   Assignment II - Task 2 - problem 1
// purpose: Print sequence of a string
// Author:  Kerolos Farah Adeeb 20170201
// Date:    27 October 2018
// Version: 1.0


#include <iostream>
#include <string>
#include <sstream>
#include "labelgen.h"
using namespace std;

int main()
{
    string word; // the string that will be sequenced
    int firstNum , numOfS; // the start number , number of sequence
    cout << "Enter the word you need : ";
    cin >> word; cout << " " << endl; // the user will enter the string

    cout << "Enter the number you want to start the sequence with it : ";
    cin >> firstNum; cout << endl; // the user will enter the number to start the sequence with it

    cout << "Enter the number of sequence you want to print : ";
    cin >> numOfS; cout << endl; // the user will enter the number of sequence

    LabelGenerator figureNumbers(word , firstNum); // create an object
    cout << word << " numbers: ";
    for (int i = 0 ; i < numOfS ; i++)
    {
        if (i > 0) cout << " , ";
            cout << figureNumbers.nextLabel(); // print the sequence
    }
    cout << endl;
    return 0;
}
