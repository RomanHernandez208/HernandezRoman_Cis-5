/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 23, 2021, 9:17 PM
 */

#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//conversion Constant liters to gallons
const float cnvtLTG = 0.264179f;

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
float conver1(float gasLit1, float gasGal1, float mpg1, int milsDrv1 );
float conver2(float gasLit2, float gasGal2, float mpg2, int milsDrv2 );
int fuelEf(float mpg1, float mpg2);
 
//Initial input to output

//declare variables
int main(int argc, char** argv) {
  
    float gasLit1,
          gasLit2,
          gasGal1,
          gasGal2,
          mpg1,
          mpg2;
    int   milsDrv1,
          milsDrv2;
    char choice; 
          
          
          
    
    //Initialize or input i.e. set variable values
    
    //Car1
   do {
       cout<<"Car 1"<<endl;
       cout<<"Enter number of liters of gasoline:"<<endl;
       cin>>gasLit1;
       cout<<"Enter number of miles traveled:"<<endl;
       cin>>milsDrv1;
    
       mpg1=conver1(gasLit1,gasGal1,mpg1,milsDrv1);
       
       cout<<"miles per gallon: ";
       cout<<fixed<<setprecision(2)<<mpg1<<endl;
       cout<<endl;
       
       //car 2
       cout<<"Car 2"<<endl;
       cout<<"Enter number of liters of gasoline:"<<endl;
       cin>>gasLit2;
       cout<<"Enter number of miles traveled:"<<endl;
       cin>>milsDrv2;
       
       mpg2= conver2(gasLit2,gasGal2,mpg2,milsDrv2);
       
       cout<<"miles per gallon: ";
       cout<<fixed<<setprecision(2)<<mpg2<<endl;
       cout<<endl;
       
       fuelEf(mpg1,mpg2);   
       
       cout<<"Again:"<<endl;
       cin>>choice;
       if (choice=='y' || choice=='Y'){
           cout<<endl;
       }
   }while(choice=='y' || choice=='Y');

    return 0;
}
int fuelEf(float mpg1, float mpg2){
    if(mpg1>mpg2){                                  //car 1 is more effiecient 
        cout<<"Car 1 is more fuel efficient"<<endl;
        cout<<endl;
    }
    if(mpg2>mpg1){                                  //car 2 is more effiencent 
        cout<<"Car 2 is more fuel efficient"<<endl;
        cout<<endl;
    }
}
float conver1(float gasLit1, float gasGal1, float mpg1, int milsDrv1){
    gasGal1=gasLit1*cnvtLTG;
    mpg1=milsDrv1/gasGal1;
    return mpg1;
}

float conver2(float gasLit2, float gasGal2, float mpg2, int milsDrv2){
    gasGal2=gasLit2*cnvtLTG;
    mpg2=milsDrv2/gasGal2;
    return mpg2;
}

