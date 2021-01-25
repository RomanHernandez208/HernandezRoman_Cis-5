/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 23, 2021, 8:08 PM
 */

#include <iostream> //I/O Library
#include<iomanip>
using namespace std;

//User Libraries 

//Global Constants 
//Math, Science, Universal, Conversions, High Dimensioned Arrays 

//Function Prototypes  

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
    int size;
    char choice;
    //Initialize Variables 
    cin>>size;
    cin>>choice;
    
    //Map Inputs to Outputs -> Process
    for ( int i = 0; i < size-1; i++){
        for (int j =0; j < size-1; j++)
        {
            cout<<choice;
        }
        cout<<choice<<endl;
    }
    for ( int k = 0; k < size; k++){
        cout<<choice;
    }
    //Display Input/Outputs 
    
    //Exit the Program - Cleanup 

    return 0;
}


