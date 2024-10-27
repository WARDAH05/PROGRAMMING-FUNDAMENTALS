#include<iostream>
using namespace std;
int main(){
	char choise;
	double balance,amount,charges,NewBalance;
	cout<<"ENTER YOUR BALANCE $: ";
	cin>>balance;
	//display the menu
	cout<<"MENU:\n";
	cout<<"D=Deposite\n";
	cout<<"W=Widraw\n";
	cout<<"T=Transfer\n";

	cout<<"enter your choise: ";
	cin>>choise;
	switch(choise)
	{
		case 'D':
		case 'd':
		    cout<<"Enter the amount of deposit $: ";
			cin>>amount;
			charges=0.005*amount;
			NewBalance=balance+amount-charges;
			break;
			case 'W':
		    case 'w':
		        cout<<"Enter the amount of widraw $: ";
			    cin>>amount;
			    charges=0.015*amount;
			    NewBalance=balance-amount-charges;
			    break;
			    case 'T':
		        case 't':
		            cout<<"Enter the amount you want to transfer $: ";
			        cin>>amount;
			        charges=0.025*amount;
			        NewBalance=balance-amount-charges;
			        break;
			        default:
			        	cout<<"invalid choise!";
			        	
				
	}
	cout<<"CHARGES:"<<charges<<endl;
	cout<<"NewBalance:<<NewBalance: "<<NewBalance<<endl;
	
	
}