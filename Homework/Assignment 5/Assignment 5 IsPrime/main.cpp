/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 26, 2021, 11:25 PM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    //Initialize Variables
    cout<<"Input a number to test if Prime."<<endl;
    cin>>num;
    
    //Process/Map inputs to outputs
    if (isPrime(num))
        cout<<num<<" is prime.";
    else
        cout<<num<<" is not prime.";
    
    return 0;
}
bool isPrime(int num){
    bool status;
    if (num % 2==1)
    status=true;
    else
    status=false;
    return status;
}

