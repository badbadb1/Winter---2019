//Assignment 2
//Created by Cesar Hernandez Lopez
//January 20th 2019
//Sources: None.
//This Program will calculate the voltage needed to supple a circuit and output the results.

#include <iostream>

using namespace std;

int main() {
    char answer = ' ';
    string name = " ";

    double num1, num2, voltproduct;
    cout << "Enter the current in Amps: ";
    cin >> num1;
    cout << "Enter resistance measured in Ohns: ";
    cin >> num2;

    voltproduct = num1 * num2;

    cout << "You will need " << voltproduct;
    cout << " volts to supply the circuit.";

    return 0;
}

cout << "ENter the averga espeed of Car A and then alsoANswer the average speed of Car B. Next, you will get the outout, which will be at least the least disstance of the two cars after the set amoutn of elapsed time. THe input you, the user, will enter, will be the elapsed ti"