/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 7th, 2019, 12:36 PM
 * Purpose:  Solution to the Paycheck Problem
 *           using the ternary operator
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //System Libraries compiled under the std namespace

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float payRate,  //Pay Rate in $'s/hr
          hrsWrkd,  //Hours worked in a week
          payChk;   //Gross paycheck with overtime in $'s
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Map inputs -> outputs i.e. solve for gross paycheck
    //Example of using the ternary operator
    payChk  = payRate*hrsWrkd;  //Straight time for all hours worked
    payChk += (hrsWrkd<=40)?    //Are the hours worked <= 40
                         0 :    //If so add nothing else
       payRate*(hrsWrkd-40);    //Add the additional pay for overtime > 40 hours
    
    //Display the outputs -- Fixed 2 decimals and set the width for the numeric values
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<setw(7)<<payChk;

    //Exit stage right or left!
    return 0;
}