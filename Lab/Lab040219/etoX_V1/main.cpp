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
    float etoX,x;
    
    //Initialize Values
    nTerms=12;
    etoX=1;
    x=2;
    
    //Initialize or input i.e. set variable values
    for(int nFact=1;nFact<nTerms;nFact++){
        fact=1;

        //Calculate the Factorial
        for(int i=1;i<=nFact;i++){
            fact*=i;
        }
        etoX+=(pow(x,nFact)/fact);
    }
    
    //Display the outputs
    cout<<"Exact       e^"<<x<<" = "<<exp(x)<<endl;
    cout<<"Approximate e^"<<x<<" = "<<etoX<<endl;
    cout<<"Number of terms in the approximation = "<<nTerms<<endl;

    //Exit stage right or left!
    return 0;
}