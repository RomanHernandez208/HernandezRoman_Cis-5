/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 18, 2021, 6:56 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Set the random number seed
    string n1, //input for name1
           n2,//input for name 2
           n3;//input for name 3
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>n1>>n2>>n3;
    
    //Map inputs -> outputs
    if (n1<=n2 && n1<=n3 && n2<=n3) {
    cout<<n3<<endl;
    cout<<n1<<endl;
    cout<<n2;
    }
    else if (n1<=n2 && n1<=n3&& n3<=n2) {
    cout<<n1<<endl;
    cout<<n3<<endl;
    cout<<n2;
    }
    else if (n2<=n1 && n2<=n3&& n1<=n3) {
    cout<<n2<<endl;
    cout<<n1<<endl;
    cout<<n3;
    }
    else if (n2<=n1 && n2<=n3&& n3<=n1) {
    cout<<n2<<endl;
    cout<<n3<<endl;
    cout<<n1;
    }
    else if (n3<=n1 && n3<=n2&& n1<=n2) {
    cout<<n3<<endl;
    cout<<n1<<endl;
    cout<<n2;
    }
    else {
        cout<<n3<<endl;
        cout<<n2<<endl;
        cout<<n1;
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

