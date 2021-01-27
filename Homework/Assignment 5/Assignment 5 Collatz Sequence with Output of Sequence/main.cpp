/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 26, 2021, 11:27 PM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int printCollatz(int);
int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    cout<<printCollatz(n)<<endl;
    
    cout<<"Sequence start of "<<n<<" cycles to 1 in ";
    cout<<collatz(n)<<" steps";
    
    //Exit stage right!
    return 0;
}
int printCollatz(int n) {
    int i=1;
    while (n!=1) {
        cout<<n<<", ";
        if (n&1){
            n=(n*3)+1;
        }else n=n/2;
    }
    return i;
}
int collatz(int n) {
    int i=1;
    while (n>1){
        if (n%2==0){
            n=n/2;
        }
        else {
            n=(n*3)+1;
        }
        i++;
    }
    return i;
}
