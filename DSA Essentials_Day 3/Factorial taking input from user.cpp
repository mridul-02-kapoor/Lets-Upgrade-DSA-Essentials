//Day 3 //DSA Essentials 
//MRIDUL KAPOOR //mridul.kapoor2002@gmail.com

#include <iostream>
using namespace std;

int main()
{
    // taking number as input//
    int number,factorial=1;
    cout << "Enter Number To Find Its Factorial: "; cin>>number;

    // defining for loop to calculate factorial//
    for(int i=1;i<=number;i++)
    {
        factorial=factorial*i;
    }

    //return factorial of number provided by user//
    cout<<"Factorial of Given Number is: " << factorial << endl;
    return 0;
}

//code ends//
//IMP: Code works only till 15, for numbers greater than 15, it shows wrong value due to large values//