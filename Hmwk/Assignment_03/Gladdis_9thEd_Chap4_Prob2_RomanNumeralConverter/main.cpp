/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 11th, 2018, 8:28 PM
 * Purpose: Roman Numeral Converter
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
    int number; //User input
    string result; // Output

    //Initial Variables
    cout<<"Please enter a number 1-10: ";
    cin>>number;
    
    //Map/Process Inputs to Outputs
    if(number<1||number>10)
    {
        cout<<"Invalid number entered. Please run the program again."<<endl;
        return 1;
    }
    
    switch(number)
    {
        case 1:
            result = "I";
            break;
        case 2:
            result = "II";
            break;
        case 3:
            result = "III";
            break;
        case 4:
            result = "IV";
            break;
        case 5:
            result = "V";
            break;
        case 6:
            result = "VI";
            break;
        case 7:
            result = "VII";
            break;
        case 8:
            result = "VIII";
            break;
        case 9:
            result = "IX";
            break;
        case 10:
            result = "X";
            break;
    }
    
    //Display Outputs
    cout<<number<<" is "<<result<<" in Roman Numerals."<<endl;
    
    //Exit program!
    return 0;
}