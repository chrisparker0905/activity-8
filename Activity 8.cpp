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
/*// Write a program to ask for a cartesian coordinate x,y. Your program should read in an x 
// value and a y value and then inform the user whether it is the origin (0,0), on the y 
// axis, eg (0,10), on the x axis
*/


#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;




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
        cout << "(x, y) is first quadrant\n";
    }
    else if (Q2 = (-x,y))
        //print coordinate in the 2nd quadrant
    {
        cout << "(-x, y) is in the 2nd quadrant \n";

}
    else if (Q3 = (-x,-y))
    //print coordinate in the 3rd quadrant
    {
    cout << "(-x, -y) is in the 3rd quadrant\n";
}
    else if (Q4 = (x, -y))
    //print coordinate in the 4th quadrant
    {
    cout << "(x, -y) is in the 4th quadrant \n";
    }
    //have the information entered into the computer displayed back to the user as a magic number

    return 0;
}

