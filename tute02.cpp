/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream>
using namespace std;

int main(){
   //Creating Variables 
   double salary, netSalary;
   int etype, otHrs, otRate;

   //Get user inputs
   cout<<"Enter Employee Type : ";
   cin>> etype;

  cout << endl;
  
   cout<<"Enter Salary : ";
   cin >> salary;

  cout << endl;

   cout<<"Enter OtHrs : ";
   cin >> otHrs;

  cout << endl;
  
   //Conditions
   switch (etype) {
       case 1 : 
            otRate = 1000;
            break;
       case 2 :
            otRate = 1500;
            break;
       default :
            otRate = 1700;
            break;     
 }
   //Calculation
   netSalary = salary + otHrs* otRate;
   
   //Printing Outputs
   cout<<"Net Salary is " << netSalary <<endl;


  cout << endl;
  
  
   return 0;   
  }