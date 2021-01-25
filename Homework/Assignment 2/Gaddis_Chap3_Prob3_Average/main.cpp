
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Roman Hernandez 
 * Created on January 14, 2021, 11:59 AM
 * Purpose: Gaddis Chapter 3 Problem 3 
 */

#include <iostream> //I/O Library
#include <iomanip>
using namespace std;

//User Libraries 

//Global Constants 
//Math, Science, Universal, Conversions, High Dimensioned Arrays 

//Function Prototypes  

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
    float test1, // Score for test 1
          test2, //Score for test 2
          test3, // Score for test 3
          test4, // Score for test 4
          test5, // Score for test 5
          avg;// Average score for all tests
    //Initialize Variables 
    cout<<"Input Each Test Score "<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;
    
    //Map Inputs to Outputs -> Process
    avg=(test1+test2+test3+test4+test5)/5;
    //Display Input/Outputs 
    cout<<" The Average = "<<fixed<<setprecision(1)<<avg;
    //Exit the Program - Cleanup 

    return 0;
}

