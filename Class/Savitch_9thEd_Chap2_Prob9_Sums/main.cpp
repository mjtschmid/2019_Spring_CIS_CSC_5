/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 2, 2019, 12:36 PM
 * Purpose:  Ternary Operator and Shortcut Operator Review
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int num,negSum,posSum,sum;
    
    //Initialize or input i.e. set variable values
    negSum=posSum=sum=0;
    
    //Map inputs -> outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    
    cin>>num;
    negSum+=num<0?num:0;
    posSum+=num>0?num:0;
    
    cin>>num;
    negSum+=num<0?num:0;
    posSum+=num>0?num:0;
    
    cin>>num;
    negSum+=num<0?num:0;
    posSum+=num>0?num:0;
    
    cin>>num;
    negSum+=num<0?num:0;
    posSum+=num>0?num:0;
    
    cin>>num;
    negSum+=num<0?num:0;
    posSum+=num>0?num:0;
    
    cin>>num;
    negSum+=num<0?num:0;
    posSum+=num>0?num:0;
    
    cin>>num;
    negSum+=num<0?num:0;
    posSum+=num>0?num:0;
    
    cin>>num;
    negSum+=num<0?num:0;
    posSum+=num>0?num:0;
    
    cin>>num;
    negSum+=num<0?num:0;
    posSum+=num>0?num:0;
    
    cin>>num;
    negSum+=num<0?num:0;
    posSum+=num>0?num:0;
    
    //Display the outputs
    cout<<"Negative sum ="<<setw(4)<<negSum<<endl;
    cout<<"Positive sum ="<<setw(4)<<posSum<<endl;
    cout<<"Total sum    ="<<setw(4)<<sum;

    //Exit stage right or left!
    return 0;
}