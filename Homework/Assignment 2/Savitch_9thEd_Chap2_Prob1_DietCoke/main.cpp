/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 17, 2021, 9:13 PM
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
    float   death,
            wghtLb,
            wghtG,
            perCan,
            swtnr;
    int     ttlCans;
    //Initialize or input i.e. set variable values
    death = 5.0f/35.0f;//the amount of sweetner per gram of body mass that results in death
    swtnr = 350 * 0.001f;//total amount of sweetner in a can
    //Map inputs -> outputs
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>wghtLb;
    wghtG = wghtLb * 453.59237f;//pounds to grams conversion equation
    ttlCans = (wghtG * death) /swtnr;
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<ttlCans<<" cans";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

