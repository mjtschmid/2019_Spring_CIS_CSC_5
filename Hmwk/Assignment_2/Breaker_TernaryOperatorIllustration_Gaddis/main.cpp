/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 5th, 2019, 12:36 PM
 * Purpose:  Illustration of Equipment Rental with Ternary Operator
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library -> Shown in Gaddis
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float rntPrc,rntChrg;//Rental Price $'s and Rental Charge $'s/hr
    int numHrs,minHrs;//Number of hours rented and Min hours rented
    
    //Initialize or input i.e. set variable values
    cout<<"Calculate Rental Charge for Breaker"<<endl;
    cout<<"Input hours to Rent"<<endl;
    cin>>numHrs;
    rntChrg=4e2f;//$400/hr
    minHrs=5;//Minimum number of hours to rent
    
    //Map inputs -> outputs
    numHrs = numHrs<minHrs?
                    minHrs:
                    numHrs;
    rntPrc=numHrs*rntChrg;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Bill = $"<<setw(7)<<rntPrc<<endl;

    //Exit stage right or left!
    return 0;
}