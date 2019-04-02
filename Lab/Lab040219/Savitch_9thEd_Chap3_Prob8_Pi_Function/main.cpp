/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 2nd, 2019, 10:06 AM
 * Purpose:  Approximate PI
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI=4*atan(1);//Trig Identity

//Function Prototypes
float aprxPI(int);//Approximate PI given number of terms

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float apprxPI;
    unsigned int nTerms;
    
    //Initialize or input i.e. set variable values
    nTerms=100;
    
    //Map inputs -> outputs
    apprxPI=aprxPI(nTerms);
    
    //Display the outputs
    cout<<"Number of terms in Pi sequence = "<<nTerms<<endl;
    cout<<"Pi              = "<<PI<<endl;
    cout<<"PI Approximated = "<<apprxPI<<endl;

    //Exit stage right or left!
    return 0;
}

float aprxPI(int nTerms){
    //Declare Variables
    float apprxPI,sign;
    
    //Initialize or input i.e. set variable values
    apprxPI=0;
    sign=-1;
    
    //Map inputs -> outputs
    for(int term=1,den=1;term<=nTerms;term++,den+=2){
        sign*=-1;
        apprxPI+=sign/den;
    }
    apprxPI*=4;
    
    //Return the results
    return apprxPI;
}