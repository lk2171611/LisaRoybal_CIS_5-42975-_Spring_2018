/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 4th, 2018, 12:25 PM
 * Purpose: Sales Prediction 
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   percentTotalSales, //Percent of total sales
            sales,             //Total sales
            prediction;        //Sales prediction

    //Initial Variables
    percentTotalSales=0.58f; //58%
    sales=8600000; //8.6 million
    
    //Map/Process Inputs to Outputs
    prediction=sales*percentTotalSales;

    //Display Outputs
    cout<<"East Coast division will generate $"<<prediction<<endl;
    
    //Exit program!
    return 0;
}