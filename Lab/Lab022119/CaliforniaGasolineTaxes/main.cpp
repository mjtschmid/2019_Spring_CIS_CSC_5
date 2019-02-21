/* 
 * File:   main.cpp
 * Author: Bekelian, Sage
 * Purpose: Calculate the Base Price and Percent of tax paid Per Gallon of gas
 * Created on February 21, 2019, 11:21 AM
 */

//User Libraries
#include <iostream>
using namespace std;

//Global Constants
const int  PERCENT=100;    //Percent Conversion
const float CNVDLP=100.0f; //Conversion from Dollars to Pennies

int main(int argc, char** argv) {
    //Set Variables and Declare them 
    float prcPmp, bsPrc, pcntTx, fedTax, stTax, repTax;
        prcPmp = 2.95f,//Price at the pump in $'s
        stTax = .3f,   //State Tax in $'s
        repTax = .173f,//Replacement to the Sales Tax in $'s
        fedTax = .184f;//Federal Excise tax in $'s
    //Calculate Values for the Declared Variables    
        bsPrc = prcPmp-stTax-repTax-fedTax;//Base Price in $'s
        int ibsPrc=bsPrc*CNVDLP;//Shift Left convert to pennies
        bsPrc=ibsPrc/CNVDLP;    //Shift back Right to $'s
        pcntTx = ((fedTax+stTax+repTax)/bsPrc)*PERCENT;//Percent Tax
    //Add Declared Variables to statements with I/O    
        cout<<"The Base Price of Gas Per Gallon is: $"<<bsPrc<<endl;
        cout<<"The Percent of taxes paid Per Gallon is: "<<pcntTx<<"%"<<endl;
        
        return 0;
}

