/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 12th, 2018, 4:45 PM
 * Purpose: Male and Female Percentages  
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
    double numMale, numFemale; //User input
    double perMale, perFemale; //Output
    double totalStudents; //Total number of students
    const double PERCENT_MULTIPLIER=100.0;

    //Initial Variables
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Please enter the number of male and female students in a class."<<endl;
    cout<<"Number of Male: ";
    cin>>numMale;
    cout<<"Number of Female: ";
    cin>>numFemale;
    
    //Map/Process Inputs to Outputs
    totalStudents=numMale+numFemale;
    perMale=numMale/totalStudents*PERCENT_MULTIPLIER;
    perFemale=PERCENT_MULTIPLIER-perMale;
    
    //Display Outputs
    cout<<"Percent of Students Who Are Male: "<<perMale<<"%"<<endl;
    cout<<"Percent of Students Who Are Female: "<<perFemale<<"%"<<endl;
    
    //Exit program!
    return 0;
}