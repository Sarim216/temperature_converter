//Temperature Converter program - TempConverter
#include<iostream>

using namespace std;

int main()
{
 float tempC, tempF, tempK;
 int i, choice;
 char ch;
 
 do
 {
  cout<<"\t \t";
  cout<<"WELCOME TO TEMPERATURE CONVERTER MENU";
  cout<<"\n";
  for(i=0;i<80;i++)
  {
   cout<<"*";
  }
  cout<<"\n\t 1:-> Temperature in Celsius to Temperature in Fahrenheit \n \t 2:-> Temperature in Fahrenheit to Temperature in Celsius \n \t 3:-> Temperature in Celsius to Temperature in Kelvin\n";
  cout<<"\t 4:-> Temperature in Kevin to Temperature in Celsius \n";
  
  for(i=0;i<80;i++)
  {
    cout<<"*";
  }
  cout<<"\nPlease enter your choice : ";
  cin>>choice;
  switch(choice)
  {
   case 1:  {
	            cout<<"Enter the temperature in Celsius scale : ";
	            cin>>tempC;
	            tempF = (9*tempC)/5 + 32;
	            cout<<"Temperature in Fahrenheit scale is "<<tempF;
	        }
	        break;
   
   case 2:  {
	            cout<<"Enter the temperature in Fahrenheit scale : ";
	            cin>>tempF;
	            tempC = (5*(tempF-32))/9;
	            cout<<"Temperature in Celsius scale is "<<tempC;
	        }
	        break;
   
   case 3:  {
	            cout<<"Enter the temperature in Celsius scale : ";
	            cin>>tempC;
	            tempK = tempC + 273.15;
	            cout<<"Temperature in Kelvin scale is "<<tempK;
	        }
	        break;
	        
   case 4:  {
	            cout<<"Enter the temperature in Kelvin scale : ";
	            cin>>tempK;
	            tempC = tempK - 273.15;
	            cout<<"Temperature in Celsius scale is "<<tempC;
	        }
	        break;
	        
   default: cout<<"Sorry! Wrong choice entered.";
  }
  cout<<"\n\nEnter Y to continue : ";
  cin>>ch;
  
 }while(ch == 'y' || ch == 'Y');
 
 return 0;
}