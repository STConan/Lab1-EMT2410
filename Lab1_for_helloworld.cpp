////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Title                : Lab 1 "Hello World! using for and cin"                                               //
//Author               : Wellington Verduga Macias                                                            //
//Version and Date     : V0.1 09/23/2022                                                                      //
//Copyright disclaimer :                                                                                      //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int i;
int uinput;

int main()
{
    for (int i=0; i < 5; i++) 
    {
        cout << "Hello World!\n";
    }
    
    cout << "Please input a number between 2-5\n";
    
    cin >> uinput;

    for (i = 0; i < uinput; i++)
    {
        cout << "Hello World!\n";
    }

    return 0;
}