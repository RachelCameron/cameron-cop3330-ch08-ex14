/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Rachel Cameron
 */

#include "header.h"
const double pi = 3.14159265;

double calcArea(const double radius){
    //radius is passed as a constant, meaning I cannot reassign it
    //it's also not a reference, meaning it was completely copied into a new variable
    //this is not done often because it is inefficient; if it's going to be declared 
    //const it might as well also reference the old variable instead of passing a whole new variable.
    //the only reason to do this would be to signify to others that may read or modify this code
    //that our parameter (radius, in this case) should not be modified.
    //it is functionally no different from not declaring it const in this case...
    //it would just cause an error if I tried to do something silly like reassign radius to another value
    return pi * radius * radius;
}
int main()
{
    double r;
    cout << "Enter the radius of a circle: " << endl;
    cin>>r;
    cout << "The area of the circle is " << calcArea(r);
}