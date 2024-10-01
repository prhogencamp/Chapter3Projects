// CookiesProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float cupsSugar = 1.5;
    float cupsButter = 1.0;
    float cupsFlour = 2.75;
    int cookiesPerBatch = 48;
    float sugarPerCookie = cupsSugar / cookiesPerBatch;
    float butterPerCookie = cupsButter / cookiesPerBatch;
    float flourPerCookie = cupsFlour / cookiesPerBatch;
    float cookiesRequested;

    cout << "How many cookies would you like to make?";
    cin >> cookiesRequested;
    float butterNeeded = cookiesRequested * butterPerCookie;
    float sugarNeeded = cookiesRequested * sugarPerCookie;
    float flourNeeded = cookiesRequested * flourPerCookie;
    cout << "To make " << cookiesRequested << setprecision(1) << " cookies, you will need " << sugarNeeded << " cups of sugar, " << butterNeeded << " cups of butter, and " << flourNeeded << " cups of flour.";
}


