/*--------------------
Program: prints out strings using functions
Date: May 18 2016

- my solution to C++ Primer question # 3 pg 63.
---------------------*/
#include <iostream>
using namespace std;

void mice(); // <--- called a function protype
void turn();

int main()
{
    mice();
    mice();
    turn();
    turn();
}

// Another way is to move this area to a separate file (source file) with extension .cpp

//Start Functions ---------------
void turn()
{
    cout << "See how they turn" << endl;
}
void mice()
{
    cout << "Three blind mice" << endl;
}
//End Function -------------------
