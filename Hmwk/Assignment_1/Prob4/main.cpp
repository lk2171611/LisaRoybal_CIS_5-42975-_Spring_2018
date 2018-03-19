/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 4th, 2018, 12:25 PM
 * Purpose: Restaurant Bill 
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
    float   mealCharge, //Base price
            taxPer,     //tax %
            tipPer,     //tip %
            taxAmt,     //Calculated Tax
            tipAmt,     //Calculated Tip
            total;      //entire price

    //Initial Variables
    mealCharge=44.50f;
    taxPer=0.0675;
    tipPer=0.15;
    
    //Map/Process Inputs to Outputs
    taxAmt=mealCharge*taxPer;
    tipAmt=(mealCharge+taxAmt)*tipPer;
    total=mealCharge+taxAmt+tipAmt;

    //Display Outputs
    cout<<"Meal Cost: $"<<mealCharge<<endl;
    cout<<"Tax: $"<<taxAmt<<endl;
    cout<<"Tip: $"<<tipAmt<<endl;
    cout<<"Total: $"<<total<<endl;
    
    //Exit program!
    return 0;
}