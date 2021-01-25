/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 16, 2021, 5:26 PM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int ckBag, //cookies per bag 
        srvBag, //servings per bag of cookies 
        numCks,//number of cookies eaten
        srvCks ; //cookies per serving (4)
    float numCals,//number of calories per serving   
          ttlCals,//total number of calories 
          indCals;//calories per individual cookie
    //Initialize or input i.e. set variable values
    ckBag = 40, //40 cookies per bag
    srvBag = 10,//10 servings per bag
    numCals = 300;//300 calories per serving
    srvCks = ckBag/srvBag; //cookies per serving (4)
    indCals = numCals/srvCks;//calories per individual cookie
     
    
    
    
    //Map inputs -> outputs
    cout<<"This program calculates the total amount of calories consumed."<<endl;
    cout<<"Input the number of cookies consumed."<<endl;
    cin>>numCks;
    
    
    //Calculate the total number of calories 
    ttlCals = numCks * indCals;
    cout<<"The amount of calories consumed is = "<<ttlCals<<" calories "<<endl;
    
    
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

