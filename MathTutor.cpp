// MathTutor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <random>
#include <iomanip>
using namespace std;

int main()
{
    const int MIN = 0;
    const int MAX = 500;
    int value1;
    int value2;
    random_device engine;
    uniform_int_distribution<int> valuesToAdd(MIN, MAX);
    cout << "What is the sum of the following numbers?" << endl;
    value1 = valuesToAdd(engine);
    value2 = valuesToAdd(engine);
    int total = value1 + value2;
    cout << setw(5) << value1 << endl << "+ " << value2 << endl << "press Enter to see the total";
    cin.get();
    cout << total;
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
