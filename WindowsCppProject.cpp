// WindowsCppProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

void fun() {
    for (int i = 0; i < 10; i++) {
    
            i = i - 1; // Noncompliant
       
    }

    //for (int i = 0; i < getMaximumNumber(); i++) {  // Noncompliant
    //}
}

int getMaximumNumber() {
    return 1;
}