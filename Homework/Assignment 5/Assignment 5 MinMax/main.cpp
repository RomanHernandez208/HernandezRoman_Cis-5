/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 26, 2021, 7:19 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int num1, int num2, int num3, int &min, int &max );//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short num1, num2, num3;
    int min, max;
    //Initialize Variables
    cout<<"Input 3 numbers"<<endl;
    cin>>num1>>num2>>num3;
    min = max =num1;
    //Process/Map inputs to outputs
    minmax(num1, num2, num3, min, max);
    //Output data
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
    //Exit stage right!
    return 0;
}

void minmax(int num1, int num2, int num3, int &min, int &max)
{
    if (num2 < min)
    min = num2;
    if (num3 < min)
    min = num3;
    if (num1 < min)
    min = num1;
    if(num3 > max)
    max = num3;
     if(num2 > max)
    max = num2;
     if(num1 > max)
    max = num1;
}

