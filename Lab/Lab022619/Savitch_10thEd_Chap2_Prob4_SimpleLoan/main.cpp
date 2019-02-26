/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 26th, 2019, 11:50 AM
 * Purpose:  Simple Loan
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int CNVMYR=12;//Conversion from Years to Months

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables and initialize the known values
    float loanAmt=1e3f,   //Loan Amount = $1000
          faceVal,        //Was $1000 but now we solve for this instead of input
          intRate=1.5e-1f,//Interest Rate 15%/year
          intrst,         //Interest to be paid up front in $'s
          mnPay;          //Monthly Payment in $'s
    int span=18;          //Duration of Loan = 18 months
 
    //Map inputs -> outputs
    faceVal=loanAmt/(1-intRate*span/CNVMYR);//Initial Computation
    mnPay=faceVal/span;                     //Initial Computation
    int imnPay=(mnPay+0.005)*100;           //Round up to the penny
    mnPay=imnPay/100.0f;                    //Truncate to exact pennies
    faceVal=span*mnPay;                     //New Face Value
    intrst=faceVal-loanAmt;                 //Total Interest Paid
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Revised Simple Loan Calculation for in-hand desired Loan Amount"
            <<endl;
    cout<<"Loan Amount:  $"<<setw(8)<<loanAmt<<endl;
    cout<<"Face Value :  $"<<setw(8)<<faceVal<<endl;
    cout<<"Interest Rate: "<<setw(5)<<static_cast<int>(intRate*100)
            <<" %/year"<<endl;
    cout<<"Span/Duration: "<<setw(5)<<span<<" months"<<endl;
    cout<<"Interest   :  $"<<setw(8)<<intrst<<endl;
    cout<<"Payment    :  $"<<setw(8)<<mnPay<<"/month"<<endl;

    //Exit stage right or left!
    return 0;
}