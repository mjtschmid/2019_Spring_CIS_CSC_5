/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 19th, 2019, 12:10 PM
 * Purpose:  How to make a banner, test with Big C
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string sp1=" ",  //1 space
           sp2="  ", //2 space
           sp3="   ";//3 space
    char l;            //Letter used in Banner Characters
    
    //Initialize or input i.e. set variable values
    cout<<"What letter would you like to use in Big Banner C"<<endl;
    cout<<"Input your preference"<<endl;
    cin>>l;
 
    //Display the outputs
    cout<<sp2<<sp2<<l<<l<<l<<endl;
    cout<<sp3<<l<<sp3<<l<<endl;
    cout<<sp2<<l<<endl;
    cout<<sp2<<l<<endl;
    cout<<sp2<<l<<endl;
    cout<<sp2<<l<<endl;
    cout<<sp2<<l<<endl;
    cout<<sp3<<l<<sp3<<l<<endl;
    cout<<sp2<<sp2<<l<<l<<l<<endl;

    //Exit stage right or left!
    return 0;
}