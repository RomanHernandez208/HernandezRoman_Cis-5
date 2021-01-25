
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Roman Hernandez 
 * Created on January 6, 2021, 11:59 AM
 * Purpose: Gaddis Problem 10 
 * Chapter 2 Miles Per Gallon
 */

#include <iostream> //I/O Library
using namespace std;

//User Libraries 

//Global Constants 
//Math, Science, Universal, Conversions, High Dimensioned Arrays 

//Function Prototypes  

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
    short Gallons, //Gallons of Gasoline that can be stored
          Distance,//Max Distance Car can travel before refueling
          MPG; //Miles per Gallon car has
          
    //Initialize Variables 
          Gallons = 15,
          Distance = 375,
          MPG = Distance/Gallons;
    
    //Map Inputs to Outputs -> Process

    //Display Input/Outputs 
    cout<<" The car can get "<<MPG<<" Miles Per Gallon "<<endl;
    //Exit the Program - Cleanup 

    return 0;
}

