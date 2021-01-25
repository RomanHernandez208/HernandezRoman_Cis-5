
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Roman Hernandez 
 * Created on January 6, 2021, 11:59 AM
 * Purpose: Gaddis Chapter 2 Problem 17 Stock Commission
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
    short StckShrs;// Shares of Stock Purchased
    float StckPrce,// Price of individual Stock per Share
          CmmsPrc,// Percentage Of Commission
          StckSum,//Amount Paid for Stock Alone
          CmmsSum,//The amount of the Commission 
          Total;//Total Amount paid for the Stock
    
    //Initialize Variables 
    StckShrs = 750,
    StckPrce = 35.00,
    CmmsPrc = 0.02f,
            
    //Map Inputs to Outputs -> Process
   
    StckSum = StckShrs * StckPrce,
    CmmsSum = (StckShrs * StckPrce) * CmmsPrc,
    Total = ((StckShrs * StckPrce) + CmmsSum);
    
    //Display Input/Outputs 
    cout<<" The Amount Kathy Paid for the Stock Alone (without commission) is: $"<<StckSum<<endl;
    cout<<" The Amount Kathy Owes for Commission is : $"<<CmmsSum<<endl;
    cout<<"The Total Amount Kathy Will Pay is : $ "<<Total<<endl;
    //Exit the Program - Cleanup 

    return 0;
}

