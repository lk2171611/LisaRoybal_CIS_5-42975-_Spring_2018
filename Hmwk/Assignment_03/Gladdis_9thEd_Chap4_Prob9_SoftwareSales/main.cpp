/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 12th, 2018, 8:37 PM
 * Purpose: Software Sales  
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
    int numUnits; //User input
    double discountPer,discountAmt; //Output
    double originalTot,finalTot;
    const int COST=199;

    //Initial Variables
    cout<<fixed<<setprecision(2);
    discountPer=0.0f;
    cout<<"Please enter the number of units sold: ";
    cin>>numUnits;
    
    //Map/Process Inputs to Outputs
    if (numUnits<0)
    {
        cout<<"Invalid input."<<endl;
        return 1;
    }
    else if (numUnits>=10&&numUnits<=19)
        discountPer=0.20;
    else if (numUnits>=20&&numUnits<=49)
        discountPer=0.30;
    else if (numUnits>=50&&numUnits<=99)
        discountPer=0.40;
    else if (numUnits>=100)
        discountPer=0.50;
    
    originalTot=numUnits*COST;
    discountAmt=originalTot*discountPer;
    finalTot=originalTot-discountAmt;
    
    //Display Outputs
    cout<<"Total Cost: "<<finalTot<<endl;
    
    //Exit program!
    return 0;
}