/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 12th, 2018, 9:16 AM
 * Purpose: Test Average  
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
    double test1Score, test2Score, test3Score, test4Score, test5Score; //User input
    double avgTestScore; //Output
    const double NUMBER_OF_TESTS=5.0;

    //Initial Variables
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"Please enter scores for 5 tests"<<endl;
    cout<<"Test 1: ";
    cin>>test1Score;
    cout<<"Test 2: ";
    cin>>test2Score;
    cout<<"Test 3: ";
    cin>>test3Score;
    cout<<"Test 4: ";
    cin>>test4Score;
    cout<<"Test 5: ";
    cin>>test5Score;
    
    //Map/Process Inputs to Outputs
    avgTestScore=(test1Score+test2Score+test3Score+test4Score+test5Score)/NUMBER_OF_TESTS;
    
    //Display Outputs
    cout<<"Average Test Score: "<<avgTestScore<<endl;
    
    //Exit program!
    return 0;
}