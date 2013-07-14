/*
 * HelloWorld.cpp
 *
 *  Created on: 14 July 2013
 *      Author: mohsin
 */



#include <iostream>
#include <unistd.h>

using namespace std;

int main (void)
{
    int i = 0;
    cout << "Hello RPi Development World !"<< endl;

    cout << "Hello RPI Development World Again !" << endl;

    while(1)
    {
        cout << "I'm in the While loop and the value of variable i is: " << i << endl;
        i++;
        usleep(1000000); 
    }

    return 0;

}
