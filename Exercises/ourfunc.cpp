/*----------------------------------
Program: ourfunc.cpp

*Code example from "C++ Primer : 6th Edition" pg. 54

Problem Question:
Desc: Studying this example to learn about functions and its parts
Date: May 17, 2016

-----------------------------------*/


// Exact code from the book------------

// #include <iostream>
// void simon(int); //function prototype for simon
//
// int main()
// {
//     using namespace std;
//     simon(3); //calls the simon() function
//     cout << "Pick an integer: ";
//     int count;
//     cin >> count;
//     simon(count); //call it again
//     cout << "Done!" << endl;
//     return 0;
// }
//
// void simon(int n) //define the simon() function
// {
//     using namespace std;
//     cout << "Simon says touch your toes " << n << " times." << endl;
//     //void functions don't need return statements
// }

// End of code from book------------------


/* NOTES
-another alternative form is:

#include <iostream>
using namespace std;

void simon(int n)
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;
}

int main (){.........}

*/

//Applying the concepts learn from this example

#include <iostream>
using namespace std;

int addTen(int x){
    return x + 10;
}

int main()
{
    int number;

    cout << "Enter an integer: " << endl;
    cin >> number;

    cout << "Your number + 10: " << addTen(number) << endl;
}
