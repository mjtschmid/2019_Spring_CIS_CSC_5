/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 2nd, 2019, 11:46 AM
 * Purpose:  e to the X
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int nFact,fact,nTerms;
    float term,etoX,x;
    
    //Initialize Values
    nTerms=13;
    etoX=1;
    term=1;
    x=2;
    
    //Initialize or input i.e. set variable values
    for(int nFact=1;nFact<nTerms;term*=(x/nFact),etoX+=term,nFact++){}
    
    //Display the outputs
    cout<<"Exact       e^"<<x<<" = "<<exp(x)<<endl;
    cout<<"Approximate e^"<<x<<" = "<<etoX<<endl;
    cout<<"Number of terms in the approximation = "<<nTerms<<endl;

    //Exit stage right or left!
    return 0;
}