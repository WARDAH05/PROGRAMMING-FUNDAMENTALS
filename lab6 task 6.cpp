#include <iostream>
using namespace std;
int main(){
	int password;
	int i=1;
	
	do{
		cout<<" ENTER A PASSWORD: ";
		cin>>password;
		i++;
	}
	while (password>0 && i<=3);
	if (password>0)
	cout<<"Access Granted:";
	else{
		cout<<"INCORRECT PASSWORD";
	}
}