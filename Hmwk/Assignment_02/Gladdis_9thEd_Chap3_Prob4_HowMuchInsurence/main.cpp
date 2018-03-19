/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 12th, 2018, 6:25 AM
 * Purpose: How Much Insurance? 
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>    //ceiling function
#include <string>
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    double replacementCostOfBuilding; //User input
    double minAmountInsurance; //Output
    const float REPLACEMENT_COST_PERCENT=0.80; //Replacement cost percent

    //Initial Variables
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Please enter the amount it would cost to replace the home or building in dollars: ";
    cin>>replacementCostOfBuilding;
    
    //Map/Process Inputs to Outputs
    minAmountInsurance=replacementCostOfBuilding*REPLACEMENT_COST_PERCENT;
    
    //Display Outputs
    cout<<"Minimum Amount of Insurance that should be purchased: $"<<minAmountInsurance<<endl;
    
    //Exit program!
    return 0;
}