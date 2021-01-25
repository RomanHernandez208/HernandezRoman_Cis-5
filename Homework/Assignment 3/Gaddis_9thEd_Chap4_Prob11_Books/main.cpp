/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 19, 2021, 10:50 PM
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
   short bkPrch,//number of books purchased 
         pntErn;//points earned 
    //Declare Variables
    cout<< "Book Worm Points"<<endl;
    cout<< "Input the number of books purchased this month."<<endl;
    cin>>bkPrch;
    //Initialize or input i.e. set variable values
    pntErn = bkPrch > 3 ? 60:
             bkPrch > 2 ? 30:
             bkPrch > 1 ? 15: 0;
             
    //Map inputs -> outputs
    
    //Display the outputs
cout<< "Books purchased = "<<setw(2)<<bkPrch<<endl;
cout<< "Points earned   = "<<setw(2)<<pntErn;

    //Exit stage right or left!
    return 0;
}

