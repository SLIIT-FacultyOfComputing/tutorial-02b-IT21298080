/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream>
using namespace std;

int main()
{
  //Creat Variables
  int no;  
  long fac = 1;
  int r;

  //Getting user inputs
  cout << "Enter a number : ";   
  cin >> no;

  //Creating for loop
  for(r = no ; r >= 1 ; r--)  
    {
      fac = fac * r;
    }
  
  //Printing Factorial
cout << "Factorial of " << no << " is " << fac << endl;  
  
  return 0;
}