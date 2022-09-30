////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Title                : Lab 1 "Hello World! using for and cin"                                               //
//Author               : Wellington Verduga Macias                                                            //
//Version and Date     : V0.1 09/23/2022                                                                      //
//Copyright disclaimer :                                                                                      //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int i;
int user_input;

int main()
{
    //Iteration to print Hello World! 5 times
    for (int i=0; i < 5; i++) 
    {
        cout << "Hello World!\n";
    }
    
    //Printing rquest of user input
    cout << "Please input a number between 2-5\n";
    //Taking the user input
    cin >> uinput;
    
    //Iteration to use the user input and print Hello World for
    //the ammount of times equal to the number the user inputted
    for (i = 0; i < uinput; i++)
    {
        cout << "Hello World!\n";
    }

    return 0;
}
