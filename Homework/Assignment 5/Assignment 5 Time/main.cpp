/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 26, 2021, 8:25 PM
 */

#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    int curHr,
        curMin,
        waitMin,
        hr,
        min;
    char choice;
    //Declare Variables
    
    //Initialize Variables
    do {
        cout<<"Enter hour:"<<endl;
        cin>>curHr;
        cout<<endl;
        cout<<"Enter minutes:"<<endl;
        cin>>curMin;
        cout<<endl;
        cout<<"Enter A for AM, P for PM:"<<endl;
        cin>>choice;
        cout<<endl;
        cout<<"Enter waiting time:"<<endl;
        cin>>waitMin;
        cout<<endl;
        hr=curHr;
        min=curMin+waitMin;
            if (hr>12){
                hr=hr-12;
                if (min>=60){
                    hr++;
                    min=min-60;
                }
            }
        cout<<"Current time = "<<curHr<<":"<<curMin<<" "<<choice<<"M"<<endl;
        cout<<"Time after waiting period = "<<hr<<":"<<min<<" "<<choice<<"M"<<endl;
        cout<<endl;
        cout<<"Again:"<<endl;
        cin>>choice;
    }
        while (choice=='y' || choice== 'Y');
    
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    
    
    //Exit the Program - Cleanup
    return 0;
}
