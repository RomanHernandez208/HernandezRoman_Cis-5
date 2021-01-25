/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 17, 2021, 8:02 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Set the random number seed
    int maxCap,//max capacity
        numPpl,//number of people
        numPplX;//number of people to be added or removed from the room
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>maxCap>>numPpl;
    
    
    //Map inputs -> outputs
    if (maxCap>=numPpl) {
        numPplX=maxCap-numPpl;
        cout<<"Meeting can be held."<<endl;
        cout<<"Increase number of people by "<<numPplX<<" will";
        cout<<" be allowed without violation.";
    }
    else {
    numPplX = numPpl - maxCap;
    cout<<"Meeting cannot be held."<<endl;
    cout<<"Reduce number of people by "<<numPplX<<" to ";
    cout<<"avoid fire violation.";
}
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

