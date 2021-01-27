/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 26, 2021, 11:19 PM
 */

#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
void getScre(int&, int&, int&, int&, int&);
void calcAvg (int, int, int, int, int);
int findLow (int, int, int, int, int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables 
    int num1,
        num2,
        num3,
        num4,
        num5;
    
    //Initialize Variables
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"by removing the lowest value."<<endl;
    getScre(num1, num2, num3, num4, num5);
    calcAvg(num1, num2, num3, num4, num5);
    return 0;
}

void getScre(int& num1, int& num2, int& num3, int& num4, int& num5){
    cout<<"Input 5 test scores"<<endl;
    cin>>num1>>num2>>num3>>num4>>num5;
}

void calcAvg (int num1, int num2, int num3, int num4, int num5){
    float average = num1 + num2 + num3 + num4 + num5 - findLow(num1, num2, num3, num4, num5);
    average /= 4;
    cout<<"The average test score = "<<setprecision(1)<<fixed<<average;
}
int findLow(int num1, int num2, int num3, int num4, int num5){
    if (num1<num2 && num1<num3 && num1<num4 && num1< num5)
        return num1;
    if (num2<num1 && num2<num3 && num2<num4 && num2< num5)
        return num2;
    if (num3<num1 && num3<num2 && num3<num4 && num3< num5)
        return num3;
    if (num4<num1 && num4<num2 && num4<num3 && num4< num5)
        return num4;
    if (num5<num1 && num5<num2 && num5<num3 && num5< num4)
        return num5;
}

