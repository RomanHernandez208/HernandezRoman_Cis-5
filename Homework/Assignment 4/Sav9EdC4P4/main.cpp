/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 23, 2021, 11:15 PM
 */

#include <iostream>  //Input/Output Library
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float cpr,//current
          opr,//old
          intRt;//interest rate 
    char  choice;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Enter current price:"<<endl;
    cin>>cpr;
    cout<<"Enter year-ago price:"<<endl;
    cin>>opr;
    cout<<fixed<<setprecision(2);
    intRt=((cpr-opr)/opr)*100;
    cout<<"Inflation rate: "<<intRt<<"%"<<endl<<endl;
    cout<<"Again:"<<endl<<endl;
    cin>>choice;
    
    do{
        cout<<"Enter current price:"<<endl;
        cin>>cpr;
        cout<<"Enter year-ago price:"<<endl;
        cin>>opr;
        cout<<fixed<<setprecision(2);
        intRt=((cpr-opr)/opr)*100;
        cout<<"Inflation rate: "<<intRt<<"%"<<endl<<endl;
        cout<<"Again:"<<endl;
        cin>>choice;
    }
    while (choice=='Y' || choice =='y');

    //Exit stage right or left!
    return 0;
}

