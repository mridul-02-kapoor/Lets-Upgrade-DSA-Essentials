//Day 3 //DSA Essentials 
//MRIDUL KAPOOR //mridul.kapoor2002@gmail.com

#include <iostream>
using namespace std;

//declare function//
float Area_Of_Circle(float circle_radius);

int main() 
{
   float radius;

   // taking radius as input//
   cout << "Enter the value of radius of circle: ";
   cin >> radius;

   cout << "Area of circle: " << Area_Of_Circle(radius) << endl;

   return 0;
}

// function definition to calculate area of circle//
float Area_Of_Circle(float circle_radius)

{
   float area_circle;
   area_circle = 3.14159265 * circle_radius * circle_radius;

   return area_circle;        //return area//
 }

 //code ends//