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

    // determine tired state
    cout << "\nAre you tired? (y/n) ";
    char ch;
    cin >> ch;
    // force keyboard input to upper case
    ch = toupper(ch);

    // determine area to paint
    cout << "How many square feet will you paint? ";
    double area;
    cin >> area;

    // painting how fast? use ternary equivalent to if statement
    double sqfeet_perhour = (ch == 'N') ? 400 : 200;

    // calculate time needed to complete painting
    double hours = area / sqfeet_perhour;

    // output one place to right of decimal point, green console text
    cout << fixed << setprecision(1) << FG_GREEN;
    cout << "\Painting " << area << " square feet will take you "
        << hours << " hours.\n";
    // set console text back to user's color
    cout << RESET;

    return 0;
}