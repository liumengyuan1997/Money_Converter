/*
Student's Name: Mengyuan Liu
Class: CS2A
Date: 5/21/2022
Instructor: Dave Harden
Name of the File: a2_1.cpp
Purpose and Usage of the Program: The assignment a2_1 is written to ask the user for an amount of money (entered in cents) and then tells the user how to make a change for that amount using only quarters, dimes, nickels, and pennies.
*/

#include <iostream>
using namespace std;

const int QUARTER_TO_CENT_RATE = 25;
const int DIME_TO_CENT_RATE = 10;
const int NICKEL_TO_CENT_RATE = 5;

int main()
{
    int cent;
    int penny;
    int nickel;
    int dime;
    int quarter;
    int amountLeft;
    
    cout << "enter number of cents: ";
    cin >> cent;
    quarter = cent / QUARTER_TO_CENT_RATE;
    amountLeft = cent % QUARTER_TO_CENT_RATE;
    
    dime = amountLeft / DIME_TO_CENT_RATE;
    amountLeft = amountLeft % DIME_TO_CENT_RATE;
    
    nickel = amountLeft / NICKEL_TO_CENT_RATE;
    amountLeft = amountLeft % NICKEL_TO_CENT_RATE;
    
    penny = amountLeft;
    
    cout << "pennies: " << penny << endl
         << "nickels: " << nickel << endl
         << "dimes: " << dime << endl
         << "quarters: " << quarter << endl;
}

/*
enter number of cents: 119
pennies: 4
nickels: 1
dimes: 1
quarters: 4
*/

