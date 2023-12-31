//------------------------------------------------------------------------------
// cs181-a2-W-Paints.cpp
//
// Assignment 2
//  - greets user W by name
//  - asks W whether she is tired and accepts W's input
//  - asks W how many square feet of surface she needs to paint
//  - calculates how many hours the job will take W to complete,
//      given that she's tired or not tired
//------------------------------------------------------------------------------
#include "ansi_colors.h"

#include <iomanip>
#include <iostream>

using namespace std;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main()
{
    // greet user W by name
    cout << "\nHello W!\n";

    // determine tired state
    cout << "\nAre you tired? (y/n) ";
    char ch;
    cin >> ch;
    ch = toupper(ch);

    // determine area to paint
    cout << "\nHow many square feet will you paint? ";
    int area;
    cin >> area;

    // painting how fast?
    int sqfeet_perhour;

    // not tired, 400 sq feet / hour
    if (ch == 'N')
    {
        sqfeet_perhour = 400;
    }
    // any other response assumes tired 200 sq feet / hour
    else
    {
        sqfeet_perhour = 200;
    }

    // prevent integer division
    double hours = (double) area / (double) sqfeet_perhour;

    cout << fixed << setprecision(1) << FG_GREEN;
    cout << "\Painting " << area << " square feet will take you "
        << hours << " hours.\n";
    cout << RESET;

    return 0;
}