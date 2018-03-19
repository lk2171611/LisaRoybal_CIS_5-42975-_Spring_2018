/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 4th, 2018, 12:25 PM
 * Purpose: Sum of Two Numbers  
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
    int     fifty,  //50
            hundred,//100
            sum;    //sum of two above

    //Initial Variables
    fifty=50;
    hundred=100;
    
    //Map/Process Inputs to Outputs
    sum=fifty+hundred;

    //Display Outputs
    cout<<"Total of "<<hundred<<" + "<<fifty<<" is "<<sum<<endl;
    
    //Exit program!
    return 0;
}