/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 23, 2021, 8:32 PM
 */

#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int rows;
    //Initialize or input i.e. set variable values
    cin>>rows;
    //Map inputs -> outputs
    for (int i=1;i<=rows; ++i){
        for(int j=1; j<=i; ++j){
            cout<<"+";
        }
        cout<<"\n\n";
    }
    for (int i = rows; i>=2;--i){
        for(int j=1; j<=i;++j){
            cout<<"+";
        }
        cout<<"\n\n";
    }
    cout<<"+";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
