/*
Electrical resistance of a Wire Calculator
Author John Lucey
Created on 26-9-2017
Last Edited 26-9-17
*/


//preprocessr directives
#include <iostream>
#include <math.h>

using namespace std;

//Function Declared
double output(double,double,double);

//Main Function
int main()
{
    //Variables Declared
    double radius=0, length=0, res=0, ER;

    //Purpose of program displayed
     cout << "Electrical Resistance of a Wire Calulator!" <<endl<<endl;

    //While loop to ensure value > 0 entered
    while(radius<=0)
    {
        //User promted to enter value
        cout << "Enter a Value for Radius in M (Greater than 0) = " <<endl;

        //value entered by user stored
        cin>>radius;
    }

    //While loop to ensure value < 0 entered
     while(length<=0)
    {
        //User promted to enter value
        cout << "Enter a Value for Length in M (Greater than 0) = " <<endl;

        //value entered by user stored
        cin>>length;
    }

    //While loop to ensure value entered
     while(res<=0)
    {
        //User promted to enter value
        cout << "Enter a Value for Resistivity in Ohms (Greater than 0) = " <<endl;

        //value entered by user stored
        cin>>res;
    }

    //Function invoked
    ER = output(radius, length, res);

    //Result displayed to user
    cout << "Wire Electrical Resistance = " << ER;



    return 0;
}


//Calulcation function
double output(double radius,double length,double res)
{
    //variables declared
    double returned, A;

    //equation
    A = M_PI * (radius * radius);

    //result assigned to returned
    returned = res * (length/A);

    //result returned to main function
    return returned;
}


