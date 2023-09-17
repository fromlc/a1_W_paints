//------------------------------------------------------------------------------
// a1_W_Paints.cpp
//
// Assignment 1
//  - greets user W by name
//  - asks W whether they are tired and accepts console input
//  - asks W how many square feet of surface they needs to paint
//  - calculates how many hours the job will take W to complete,
//      given that they're tired or not tired
//------------------------------------------------------------------------------
#include "ansi_colors.h"

#include <iomanip>
#include <iostream>

using namespace std;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {
    // greet user W by name
    cout << "\nHello W!\n";

    // determine tired state, use white console text
    cout << "\nAre you tired? (y/n) " << FG_WHITE;
    char ch;
    cin >> ch;
    // force keyboard input to upper case
    ch = toupper(ch);

    // determine area to paint
    cout << RESET << "How many square feet will you paint? " << FG_WHITE;
    double area;
    cin >> area;

    // painting how fast?
    double sqfeet_perhour;

    // not tired => 400 sq feet / hour
    if (ch == 'N')
    {
        sqfeet_perhour = 400;
    }
    // any other response assumes tired => 200 sq feet / hour
    else
    {
        sqfeet_perhour = 200;
    }

    // calculate time needed for painting
    double hours = area / sqfeet_perhour;

    // output one place to right of decimal point, green console text
    cout << fixed << setprecision(1) << FG_GREEN;
    cout << "\Painting " << area << " square feet will take you "
        << hours << " hours.\n";
    // set console text back to user's color
    cout << RESET;

    return 0;
}