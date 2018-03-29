/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 11th, 2018, 5:46 PM
 * Purpose: Body Mass Index
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
    double weight,height; //User input
    double bmi; //Output
    string bmiType;

    //Initial Variables
    cout<<fixed<<setprecision(1);
    cout<<"Please enter your weight in pounds: ";
    cin>>weight;
    cout<<"Please enter your height in inches: ";
    cin>>height;
    
    //Map/Process Inputs to Outputs
    bmi=weight*703/(height*height);
    
    if (bmi<18.5)
        bmiType="underweight";
    else if (bmi>25)
        bmiType="overweight";
    else
        bmiType="optimal";
    
    //Display Outputs
    cout<<"You have a BMI of "<<bmi<<" and are "<<bmiType<<endl;
    
    //Exit program!
    return 0;
}