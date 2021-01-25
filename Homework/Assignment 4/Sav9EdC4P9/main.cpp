/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 23, 2021, 9:50 PM
 */

#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables 
    float num1,
          num2,
          num3;
    
    
    //Display the outputs
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<endl;
    cout<<"Enter Second number:"<<endl;
    cin>>num2;
    cout<<endl;
    cout<<"Enter third number:"<<endl;
    cin>>num3;
    cout<<endl;
    
    if (num1>num2){
        cout<<"Largest number from two parameter function:"<<endl<<num1<<endl<<endl;
    
    }else if(num2>num1){
        cout<<"Largest number from two parameter function:"<<endl<<num2<<endl<<endl;
    }
    if (num1>num2 && num1>num3){
        cout<<"Largest number from three parameter function:"<<endl<<num1<<endl;
    }else if (num2>num1 && num2>num3){
        cout<<"Largest number from three parameter function:"<<endl<<num2<<endl;
    }else if (num3>num1 && num3>num2){
        cout<<"Largest number from three parameter function:"<<endl<<num3<<endl;
    }
    //Exit stage right or left!
    return 0;
}

