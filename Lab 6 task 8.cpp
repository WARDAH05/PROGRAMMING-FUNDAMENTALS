#include <iostream>
using namespace std;
int main(){
	int choise,i;
	cout<<"MENU"<<endl;
		cout<<"1:Hello"<<endl;
			cout<<"2:World"<<endl;
				cout<<"3:exit"<<endl;
				  
		do{
		cout<<"enter your choise: ";
			      cin>>choise;
		switch (choise)	  
		{
			case 1:
				cout<<"Hello"<<endl;
				break;
				case 2:
					cout<<"World"<<endl;
					break;
					case 3:
						cout<<"Exiting the program";
						break;
						default:
							cout<<"Invalid Entery!";
			}    
		
		}
	while(choise<3 );

}