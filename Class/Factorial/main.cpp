/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 2nd, 2019, 11:46 AM
 * Purpose:  Factorial
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int nFact,fact;
    
    //Initialize or input i.e. set variable values
    nFact=12;
    fact=1;
    
    //Map inputs -> outputs
    for(int i=1;i<=nFact;i++){
        fact*=i;
    }
    
    //Display the outputs
    cout<<nFact<<"! = "<<fact<<endl;

    //Exit stage right or left!
    return 0;
}