//Temperature Converter Lockwood and Hawkins
//22 Jan 2020
#include <iostream>
#include <iomanip>
#include "Input_Validation_Extended.h"

using namespace std;

int main() 
{
  //Declaration of the variables
  int decision;
  double tempF = 0.0, tempC = 0.0;
  
  //Creating the loop to continually ask for the temperature type process until -1 is input
  while(decision != -1)
  {
    //User Input
    cout << "\nIs this Farenheit or Celcius (1 or 2)" << endl;
    decision = validateInt(decision);

    //if decision for farenheit to celcius
    if(decision == 1 && decision != -1)
      {
        //prompt the user to input farenheit and receive input
        cout << "\nWhat is the temperature?" << endl;
        cin >> tempF;
  
        //processing
        tempC = (tempF - 32.0) * (5.0/9.0);

        //Output and setting the precision of the output to 3 decimal places
        cout << fixed << setprecision(3) << "\nYour converted temperature is "<< tempC;
        cout << "\nTo exit this program, input -1 at temperature type" << endl;
      }  
      else if(decision == 2 && decision != -1)
      {
        //prompt the user to input celcius and receive input
        cout << "\nWhat is the temperature?" << endl;
        cin >> tempC;
  
        //processing
        tempF = (tempC * (9.0/5.0)) + 32.0;

        //Output
        cout << fixed << setprecision(3) << "\nYour converted temperature is "<< tempF;
        cout << "\nTo exit this program, input -1 at temperature type" << endl;
      }
    else if(decision == -1)
      {
        cout << "\nExited program";
      } 
    else 
      {
        cout << "\nInvalid Input";
      }
  }
  
  return 0;
}