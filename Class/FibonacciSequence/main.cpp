/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 4th, 2019, 11:26 AM
 * Purpose:  Generate the Fibonacci Sequence
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
    //Declare Variables
    int fi,fim1,fim2,cnt,stop;
    
    //Initialize or input i.e. set variable values
    cnt=2;
    fim1=fim2=1;
    stop=10;
    
    //Generate the sequence
    cout<<fim2<<" ";
    cout<<fim1<<" ";
    do{
        fi=fim1+fim2;
        fim2=fim1;
        fim1=fi;
        cout<<fi<<" ";
    }while(++cnt<stop);
    cout<<endl;
 
    //Exit stage right or left!
    return 0;
}