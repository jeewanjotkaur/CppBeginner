/*-----------------------------------
Program: Hello World!
Problem Qustion: Create a program that prints out the string "Hello World!"
Desc: Prints out a string
Date: May 17, 2016

----------------------------------- */
#include <iostream> // Preprocessor Directive
using namespace std; // without this i would have to type "std:cout, std:cin,std: end..each time"

int main()
{
    cout << "Hello World!" << endl;
    // Output: Hello World!

    /*
        - endl is called a manupilator
        - endl -> starts a new line

    */

    // Alternate way 2

    cout << "Hello "; // a space is also a character
    cout << "World!";
    cout << endl;

    //Alternate way 3

    cout << "Hello "
         << "World!"
         << endl;

    // or

    cout << "Hello " << "World!"<< endl;    

}
