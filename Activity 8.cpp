/*//Author:       Christopher Parker, cjp5907, Lab Day & Time
//Class :       CMPSC121
//Experiment:   02
//File:         P:/compsc121/experiments/exp02.cpp
//Purpose:      Division modulo division

Academic Integrity Affidavit

I certify that, this program code is my work.Others may have
assited me with planningand concepts, but the coe was written,
solely, by me.

I understand that submitting code which is totally or partially
the product of other individuals is a violation of the Academic
Integrity Policy and accepted ethical precepts.falsified
execution results are also results of improper activities.Such
violations may result in zero credit for the assignment, reduced
credit for the assignment, or course failure.
*/
/*A “magic date” is a date where the month times the day equals the
two - digit year(when written mm / dd / yy - e.g., 2 / 8 / 16).Write a program
to ask the user to input a month, dayand year.Then display whether
it is a magic date or not.
*/


#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

// Write a program to ask for a cartesian coordinate x,y. Your program should read in an x 
// value and a y value and then inform the user whether it is the origin (0,0), on the y 
// axis, eg (0,10), on the x axis


int main()
{
    double Q1, Q2, Q3, Q4, x, y;

    //print "Enter an integer coordinate: x, y "
    cout << "Enter an integer coordinate: x, y\n";

    cin >> x >> y;

    //if product equal year
    if (Q1 = (x, y))
        //print " coordinate in 1st quadrant"
    {
        cout << "is first quadrant\n";
    }
    else if (Q2 = (-x,y))
        //print coordinate in the 2nd quadrant
    {
        cout << "is in the 2nd quadrant \n";

}
    else if (Q3 = (-x,-y))
    //print coordinate in the 3rd quadrant
    {
    cout << " is in the 3rd quadrant\n";
}
    else if (Q4 = (x, -y))
    //print coordinate in the 4th quadrant
    {
    cout << " is in the 4th quadrant \n";
    }
    //have the information entered into the computer displayed back to the user as a magic number

    return 0;
}

/*Welcome to the magic date program, please enter a date
Enter the digits of a month in mm form, Enter the digits of a month in dd form, Enter the digits of a month in yy form
02 08 16
its a magic date
*/