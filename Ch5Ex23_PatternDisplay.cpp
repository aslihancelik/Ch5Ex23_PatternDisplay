// Ch5Ex23_PatternDisplay.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// This program consists of two functions that displays different patterns using loops.
// 
// 
// Programmer: Aslihan Aria Celik

#include <iostream>
using namespace std;

//function to print the specified pattern A in the question
void printPatternA(){

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << "+" ;
        }
        cout << endl;
    }
}

//function to print the specified pattern B in the question
void printPatternB(){

    for (int i = 0; i < 10; i++) {
        for (int j = 10; j > i ; j--) {
            cout << "+";
        }
        cout << endl;
    }

}

int main()
{
    //calling the function to print the pattern A
    cout << "Pattern A" << endl << endl;
    printPatternA();

    cout << endl;

    //calling the function to print the pattern B
    cout << "Pattern B" << endl << endl;
    printPatternB();

    return 0;
}

