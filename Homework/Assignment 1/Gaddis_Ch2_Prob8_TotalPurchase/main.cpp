/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Roman Hernandez 
 * Created on January 10, 2021, 11:59 AM
 * Purpose: Gaddis Chapter 2 Total Purchase Problem 8
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
  float     item1price = 15.95,
            item2price = 24.95,
            item3price = 6.95,
            item4price = 12.95,
            item5price = 3.95;
    
    float subtotal;
          subtotal = item1price + item2price + item3price + item4price + item5price;
    
    float tax;
    tax= subtotal * 0.07;
    
    float total;
    total = subtotal + tax;
    //Initialize Variables 
    std::cout <<"The price of item 1 is: $ "<<item1price; 
    std::cout <<"The price of item 2 is: $ "<<item2price; 
    std::cout <<"The price of item 3 is: $ "<<item3price; 
    std::cout <<"The price of item 4 is: $ "<<item4price; 
    std::cout <<"The price of item 5 is: $ "<<item5price; 
    
    //Map Inputs to Outputs -> Process
    std::cout <<"subtotal amount is: $" <<subtotal;
    
    std::cout <<"Tax is: $ " << tax;
    
    std::cout <<"total amount is: $"<<total;
       
    //Display Input/Outputs 
    
    //Exit the Program - Cleanup 

    return 0;
}




