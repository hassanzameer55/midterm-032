#include<iostream>
using namespace std;
int main(){
	int userspend,points,reedempoint,discount,choice;
	do
	{
		cout << "\nHow much you spend ($) today ? " << endl; //
		cin >> userspend;
		
		// calculating points
		
		points = userspend /10;
		cout << "\nYou have a loyalty points " << points ;
		
		char alp; // 
	
		cout << "\nDo you want to reedeem points (Y/N) ?";
		cin >> alp;
		if(alp == 'Y' || alp == 'y' )
		{
			cout << "\nEnter the amount of reedeem ";	
			cin >> reedempoint;
			
			discount = (userspend/10)*0.5;
			cout << "\nYou got a discount of " << discount << "$";
			
			cout << "\nDo you want another purchase (Y/N) ?";
			cin >> choice ;
		
		}
		
	}while(choice == 'Y' || choice == 'y');
	
	cout << "Thank you for shopping !";
}
