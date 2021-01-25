/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 17, 2021, 3:56 PM
 */

#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
      float fhrH,//degrees Fahrenheit
            celS;//degrees Celsius
          
          
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>> fhrH ;
    
    celS =(fhrH - 32.0)*(5.0/9.0);
    cout<<showpoint<<setprecision(1)<<fixed;
    cout<<fhrH<<" Degrees Fahrenheit = "<<celS<<" Degrees Centigrade";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

