/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 17, 2021, 6:44 PM
 */

#include <iostream>  //Input/Output Library
#include <iomanip>
#include <math.h>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float half =3.14159265 / 180;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float sinDgr,//sin
          cosDgr,//cos
          tanDgr;//tan 
    int   angDgr;//angle
    
            
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>angDgr;

    //Map inputs -> outputs
    sinDgr = sin(angDgr* half);
    cosDgr = cos(angDgr* half);
    tanDgr = tan(angDgr* half);
    //Display the outputs
cout<<fixed;
cout<<"sin("<<angDgr<<") = "<<setprecision(4)<<sinDgr<<endl;
cout<<"cos("<<angDgr<<") = "<<setprecision(4)<<cosDgr<<endl;
cout<<"tan("<<angDgr<<") = "<<setprecision(4)<<tanDgr;
    //Exit stage right or left!
    return 0;
}

