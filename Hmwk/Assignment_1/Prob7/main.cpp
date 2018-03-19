/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 4th, 2018, 12:25 PM
 * Purpose: Number of Acres 
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>    //ceiling function
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   acreInSquareFeet,//Number of square feet in acre
            tractSize,       //Tract size
            numAcres;        //Number of Acres

    //Initial Variables
    tractSize=869*360;
    acreInSquareFeet=43450;
    
    //Map/Process Inputs to Outputs
    numAcres=tractSize/acreInSquareFeet;

    //Display Outputs
    cout<<"Number of Acres: "<<numAcres<<endl;
    
    //Exit program!
    return 0;
}