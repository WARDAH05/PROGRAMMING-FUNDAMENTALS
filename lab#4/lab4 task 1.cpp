#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter an integer: ";
	cin>>num;
	if(num!=0)
	{
		if(num%2==0){
			cout<<"Number is Even";
			
		}
		else{
			cout<<"Numbr is odd";
			
		}
		
	}
	else
	{
		cout<<"Nither Even nor Odd";
	}
	return 0;
}