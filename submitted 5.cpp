#include<iostream>
using namespace std;
int main(){
	int no;
	cout<<"Enter the number of weekend";
	cin>>no;
	switch(no)
	{
		case 1:
			cout<<"Start of the workweek";
			break;
			case 2:
			     cout<<"It's Tuesday, stay productive";
			     break;
			     case 3:
			         cout<<"Midweek motivation";
			         break;
			         case 4:
			             cout<<"Almost the weekend";
		             	 break;
			             case 5:
			                 cout<<"TGIF!";
		              	     break;
			                 case 6:
			                     cout<<"Relax, it's Saturday";
			                     break;
			                     case 7:
			                     cout<<"Enjoy your Sunday!";
			                       break;
			                       default:
			                       	cout<<"Invalid day selection";
				
	}
}