/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 17, 2021, 9:00 PM
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
   float preSal,//previous salary before increase 
         newSal,//new salary post increase 
         newMont,//new monthly salary 
         rtroPay,//retroactive pay increase 
         payInc;//pay increase 
    //Initialize or input i.e. set variable values
    cout<<"Input previous annual salary."<<endl;
    cin>>preSal;
    payInc = 0.076f;
    //Map inputs -> outputs
    newSal=preSal+(preSal*payInc);
    newMont=newSal/12 ;
    rtroPay=(payInc*preSal)/2;
    //Display the outputs
cout<<fixed;
cout<<"Retroactive pay    = $"<<setw(7)<<setprecision(2)<<rtroPay<<endl;
cout<<"New annual salary  = $"<<setw(7)<<setprecision(2)<<newSal<<endl;
cout<<"New monthly salary = $"<<setw(7)<<setprecision(2)<<newMont;

    //Exit stage right or left!
    return 0;
}

