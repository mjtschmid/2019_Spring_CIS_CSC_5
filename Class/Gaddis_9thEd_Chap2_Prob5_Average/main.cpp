/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 11th, 2019, 12:36 PM
 * Purpose:  Calculate the Average
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
    unsigned short x1,x2,x3,x4,x5;
    float average;
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the average of 5, 1-2 Digit integers"<<endl;
    cout<<"Input 5, 1-2 Digit Integers"<<endl;
    cin>>x1>>x2>>x3>>x4>>x5;
    
    //Map inputs -> outputs
    //average=(x1+x2+x3+x4+x5)/5.0f;
    average=static_cast<float>(x1+x2+x3+x4+x5)/5;
    
    //Display the outputs
    cout<<"The average of ("<<x1<<","<<x2<<","
            <<x3<<","<<x4<<","<<x5<<") = "<<average<<endl;

    //Exit stage right or left!
    return 0;
}