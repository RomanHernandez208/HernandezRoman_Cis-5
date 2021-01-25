/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 29, 2021, 9:34 PM
 */

#include <iostream>  //I/O Library
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
        string  runner1,
                runner2,
                runner3;
   
   
   
        short    time1,
                 time2,
                 time3;
            
    //Initialize Variables
    
    
    //Map Inputs to Outputs -> Process
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>runner1>>time1>>runner2>>time2>>runner3>>time3;
    
    
    
    if(time1 <time2 && time1<time3){                      
         if (time2< time3){                                 
            cout<<runner1<<"\t"<<setw(3)<<time1<<endl<<runner2<<"\t"<<time2<<endl<<runner3<<"\t"<<time3;
        }
    
    
    
    }if (time2 <time1 && time2< time3){                       
        if (time1<time3){                                
            cout<<runner2<<"\t"<<setw(3)<<time2<<endl<<runner1<<"\t"<<time1<<endl<<runner3<<"\t"<<time3;
        }
        
        
        
    }if (time3< time1 && time3< time2){                  
        if (time1<time2){                               
            cout<<runner3<<"\t"<<setw(3)<<time3<<endl<<runner1<<"\t"<<time1<<endl<<runner2<<"\t"<<time2;
        }
        
        
        
    }if (time1< time2 && time1< time3){
        if (time3 <time2){                                                                          
            cout<<runner1<<"\t"<<setw(3)<<time1<<endl<<runner3<<"\t"<<time3<<endl<<runner2<<"\t"<<time2; 
        }
    }
    
    
    
    if (time2< time1 && time2< time3){                                                             
        if (time3<time1){
            cout<<runner2<<"\t"<<setw(3)<<time2<<endl<<runner3<<"\t"<<time3<<endl<<runner1<<"\t"<<time1;
        }
    }
    
    
    
    if (time3< time1 && time3< time2){                                                             
        if (time2<time1){
            cout<<runner3<<"\t"<<setw(3)<<time3<<endl<<runner2<<"\t"<<time2<<endl<<runner1<<"\t"<<time1;
        }
    } 
    
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}
