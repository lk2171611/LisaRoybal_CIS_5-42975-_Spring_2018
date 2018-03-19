/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 4th, 2018, 12:25 PM
 * Purpose: Miles per Gallon 
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
    float   tankSize,   //Gas tank size
            travelDist, //Number of miles can travel on tank
            mpg;        //MPG

    //Initial Variables
    tankSize=16; //16 gallons
    travelDist=312;//312 miles
    
    //Map/Process Inputs to Outputs
    mpg=travelDist/tankSize;

    //Display Outputs
    cout<<"MPG: "<<mpg<<" miles/gallon"<<endl;
    
    //Exit program!
    return 0;
}