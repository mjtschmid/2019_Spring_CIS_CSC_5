/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 19th, 2019, 12:26 PM
 * Purpose:  Salary starting at a penny
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const double CNVPNDL=100.0f;//Convert Pennies to Dollars

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    cout<<"This program Calculates pay per day and sum"<<endl;
    cout<<"Day         Pay          Sum"<<endl;
    
    //Map inputs -> outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    for(unsigned int day=1,pay=1,sum=0;day<=31;day++,pay*=2){
        sum+=pay;
        cout<<setw(3)<<day
            <<setw(12)<<(pay/CNVPNDL)
            <<setw(13)<<(sum/CNVPNDL)<<endl;
    }
    
    //Exit stage right or left!
    return 0;
}