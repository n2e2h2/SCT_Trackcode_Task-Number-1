//C++ Program for converting celsius into fahrenheit and kelvin and vice versa.
#include<iostream>
 
 using namespace std;
 
 int main()
 {
 	double f,c,k;
 	
 	int option;
 	
 	cout<<"Choose from the following options: \n" <<endl;
 	
 	cout<<"1. Celsius to Fahrenheit." <<endl;
 	cout<<"2. Fahrenheit to Celsius." <<endl;
	cout<<"3. Celsius to Kelvin."     <<endl;
 	cout<<"4. Kelvin to Celsius."     <<endl;
 	
 	cout<< "\n\n Choose 1,2,3 or 4 from the given menu ===>";
 	cin>>option;
 	cout<< endl;
 	
 	switch(option)
 	
 	{                            //option for converting Celsius into Fahrenheit
 		case 1:
 			
 			{
 				cout<<"Enter the temperature in Celsius ::";
 				cin>> c;
 				
 			    f = (1.8*c) + 32.0;  //temperature conversion formula
				 
				 cout<<"\nTemperature in degree Fahrenheit::" <<f<<"F" <<endl;
				 
			}
			 
			 break;
			                   //option for converting Fahrenheit into Celsius       
		 case 2:
			 	
			 	{
			 		cout<<"Enter the temperature in Fahrenheit::";
			 		cin>> f;
			 		
			 		c=(f-32)/1.8;  //temperature conversion formula
			 		
			 		cout<<"\nTemperature in degree Celsius::" <<c<<"C" <<endl;
	
			 		
				}
			 break;
			                 //option for converting Celsius into Kelvin     
		 case 3:
		 
		 {
		 	cout<<"Enter the temperature in Celsius:: ";
		 	cin>>c;
		 	
		 	k=c+273.15;   //temperature conversion formula
		 	
		 	cout<<"\nTemperature in Kelvin::" <<k<<"K" << endl;
		 	
		 }	
		 break;
			                //option for converting Kelvin into Celsius
		 case 4:
		 
		 {
		 	cout<<"Enter the temperature in Kelvin:: ";
		 	cin>>k;
		 	
		 	c = k - 273.15;   //temperature conversion formula
		 	
		 	cout<<"\nTemperature in Celsius::" <<c<<"C" << endl;
		 	
		 }
		 
		 break;
		 
		 default:
		 
		 {
		 	cout<<"Wrong Input.";
		 }		 
	 }    
	 
	 return 0;
 } 
