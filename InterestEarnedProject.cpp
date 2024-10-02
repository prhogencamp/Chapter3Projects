// InterestEarnedProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double principal;
    double interestRate;
    double percentToDec;
    int timesCompounded;
    double interestAccrued;
    double totalSavings;
    double interestCompounded;
    double interestBeforePower;


    cout << "What is your starting principal?";
    cin >> principal;
    cout << "What is your interest rate?";
    cin >> interestRate;
    percentToDec = interestRate / 100;
    cout << "How many times has your interest compounded?";
    cin >> timesCompounded;
    interestBeforePower = (1 + (percentToDec / timesCompounded));
    interestCompounded = pow(interestBeforePower, timesCompounded);
    totalSavings = principal * interestCompounded;
    cout << "Interest Rate:" << setw(25) << interestRate << "%" << endl;
    cout << "Time Compounded:" << setw(22) << timesCompounded << endl;
    cout << "Principal:" << setw(25) << "$" << principal << endl;
    cout << "Interest:" << setw(26) << "$" << interestCompounded << endl;
    cout << "Amount in Savings:" << setw(15) << "$" << totalSavings << endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
