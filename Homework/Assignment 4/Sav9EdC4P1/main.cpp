/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 23, 2021, 5:26 PM
 */

#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//conversion Constant liters to gallons
const float cnvtLTG = 0.264179f;

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
int conver(float gasLit, float gasGal, float mpg, int milsDrv){
    gasGal=gasLit*cnvtLTG;
    mpg = milsDrv/gasGal;
           
//Initial input to output
    cout<<"miles per gallon:"<<endl;
    cout<<fixed<<setprecision(2)<<mpg<<endl;
}
//declare variables
int main(int argc, char** argv) {
  
    float gasLit,//liters of gas consumed
          gasGal,//gallons of gas consumed
          mpg;   //miles per gallon
    int   milsDrv;//miles driven
    char choice; 
          
          
          
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
   do {
       cout<<"Enter number of liters of gasoline:"<<endl;
       cin>>gasLit;
       cout<<endl;
       cout<<"Enter number of miles traveled:"<<endl;
       cin>>milsDrv;
       cout<<endl;
    
       conver(gasLit, gasGal, mpg, milsDrv);
       
       cout<<"Again:"<<endl;
       cin>>choice;
       if(choice == 'y' || choice== 'Y'){
           cout<<endl;
       }
       }while(choice == 'y' || choice== 'Y');
       
          
       

    //Exit stage right or left!
    return 0;
}
