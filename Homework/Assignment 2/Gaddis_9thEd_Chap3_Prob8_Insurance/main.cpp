/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 17, 2021, 3:37 PM
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
    
    //Declare Variables
    float intlPrc,//initial price of property (before insurance charge)
          insChrg,//insurance rate (0.80) cost of initial price
          finlPrc;//final price after the insurance charge 
    
    
    //Initialize or input i.e. set variable values
    insChrg = 0.80f,
            
            
    //Map inputs -> outputs
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    
    cin>>intlPrc;//input the original price of the structure
    
    finlPrc = (intlPrc * insChrg);//initial price * the 80% insurance rate
    
    cout<<"You need $"<<finlPrc<<" of insurance.";
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

