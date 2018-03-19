/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 4th, 2018, 12:25 PM
 * Purpose: Distance per Tank of Gas 
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
            townMPG,    //Town MPG
            highwayMPG, //Highway MPG
            townDist,   //Distance can travel in town
            highwayDist;//Distance can travel on highway

    //Initial Variables
    tankSize=20; //20 gallons
    townMPG=23.5;//23.5 MPG
    highwayMPG=28.9;//28.9 MPG
    
    //Map/Process Inputs to Outputs
    townDist=tankSize*townMPG;
    highwayDist=tankSize*highwayMPG;

    //Display Outputs
    cout<<"Town Distance: "<<townDist<<" miles"<<endl;
    cout<<"Highway Distance: "<<highwayDist<<" miles"<<endl;
    
    //Exit program!
    return 0;
}