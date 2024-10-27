#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"enter AGE: ";
	cin>>age;
	if(age<0){
	cout<<"Invalid ENTERY";
	}
	else
	{
		if(age>0&&age<=12)
		cout<<"CHILD";
		if(age>=13&&age<=19)
		
			if (age==13)
			cout<<"JUST A TEEN";
		else {
		cout<<"TEENAGER";
		}
		if (age>=20&&age<=60)
			cout<<"ADULT";
			
		else {
			cout<<"SENIOR CITIZEN";
		}
	}
	
	
}