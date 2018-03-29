/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 20, 2018, 10:01 AM
 * Purpose: Minimum / Maximum
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>    //ceiling function
#include <string>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float num1, num2; //first and second number entered by the user

    //Initial Variables
    cout<<"Please enter a real number: ";
    cin>>num1;
    cout<<"Please enter a different real number: ";
    cin>>num2;
    
    //Map/Process Inputs to Outputs
    
    //Display Outputs
    if (num1<num2)
        cout<<num1<<" is smaller than "<<num2<<endl;
    else if (num1>num2)
        cout<<num1<<" is larger than "<<num2<<endl;
    else
        cout<<num1<<" is equal to "<<num2<<endl;
    
    //Exit program!
    return 0;
}