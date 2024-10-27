#include <iostream>
using namespace std;
int main(){
	int secreteNo;
	int guess,i;
	cout<<"THE SECRETE NO IS:";
	cin>>secreteNo;
	do{
		cout<<"GUESS THE NO: ";
		cin>>guess;
		i++;
	}
	while(guess!=secreteNo);
	
	cout<<"The secrete no is :"<<secreteNo;
	
	
	
}