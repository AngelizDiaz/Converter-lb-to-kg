/*
Program that converts pounds (lb) to kilograms (kg).

Author: Angeliz Diaz Sierra
Date: 04/06/2021
*/

#include <iostream>
using namespace std;

int main()
{
    double lb, kg;                              // lb: pounds
                                                // kg: kilograms
    
    //Enter weight in pounds (lb)
    cout<<"Enter weight in pounds (lb): ";
    cin>>lb;
    
    //Convert pounds (lb) to kilogram(kg)
    kg= 2.2 * lb;
    
    //Print weight result in kilograms(kg)
    cout<<lb<<" pounds (lb) are equal to "<<kg<<" kilograms (kg)\n";
    
    return 0;
    
}

/*
 Enter weight in pounds (lb): 86
 86 pounds (lb) are equal to 189.2 kilograms (kg)
 Program ended with exit code: 0
*/
