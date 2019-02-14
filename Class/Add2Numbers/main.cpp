/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 14th, 2019, 11:30 AM
 * Purpose:  Add 2 Numbers
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
    //Set the random number seed
    
    //Declare Variables
    short op1,op2,result;
    
    //Initialize or input i.e. set variable values
    cout<<"This program adds 2 numbers"<<endl;
    cout<<"Input 2 integer values"<<endl;
    cin>>op1>>op2;
    
    //Map inputs -> outputs
    result=op1+op2;
    
    //Display the outputs
    cout<<op1<<" + "<<op2<<" = "<<result<<endl;

    //Exit stage right or left!
    return 0;
}