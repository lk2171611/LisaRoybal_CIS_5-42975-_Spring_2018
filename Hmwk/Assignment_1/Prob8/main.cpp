/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 4th, 2018, 12:25 PM
 * Purpose: Land Calculation 
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
            landSize,        //Land size
            squareMeterConv, //Conversion of Square feet to meters
            numSquareFeet,
            numSquareMeter;

    //Initial Variables
    landSize=0.5;
    acreInSquareFeet=43560;
    squareMeterConv=10.7639;
    
    //Map/Process Inputs to Outputs
    numSquareFeet=landSize*acreInSquareFeet;
    numSquareMeter=numSquareFeet/squareMeterConv;

    //Display Outputs
    cout<<"Number of Square Feet: "<<numSquareFeet<<endl;
    cout<<"Number of Square Meters: "<<numSquareMeter<<endl;
    
    //Exit program!
    return 0;
}