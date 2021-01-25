/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 20, 2021, 10:05 PM
 */

#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string  r,
         s,
         p,
         R,
         P,
         S,
         play1,
         play2;
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>play1>>play2;

    //Map inputs -> outputs
    
    //Display the outputs
if (play1==r || play1==R){

    
    if (play2==P || play2==p){
    
        cout<<"Paper covers rock.";
    
    
    }else if (play2==S || play2==s){
    
        cout<<"Rock breaks scissors";
    

    }else if (play1==r|| play1==R &&play2==R || play2==r){
        
        cout<<"Nobody wins.";
    }
    
    //next segment
}else if (play1 ==P || play1==p){
    
        if (play2==s || play2==S){
        
            cout<<"Scissors cuts paper.";
           
        }else if (play2==R || play2==r){
        
            cout<<"Paper cuts rock.";
        
        }else if (play1==p || play1==P && play2==p || play2==P){
        
            cout<<"Nobody wins.";
        }
    
    
}else if (play1==S || play1==s){

            if (play2==P || play2==p){
            
                cout<<"Scissors cuts paper";
            
            }else if (play2 ==R || play2==r){
            
                cout<<"Rock breaks scissors";
            
            }else if (play1==s ||play1==S && play2==s || play2==S){
            
                cout<<"Nobody wins.";
            }
        
}

    

    //Exit stage right or left!
    return 0;
}
