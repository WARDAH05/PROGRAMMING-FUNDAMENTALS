#include <iostream>
using namespace std;
int main(){
	float Celsius,Farenhiet;
	cout<<"Enter Temperature in Celsius: ";
	cin>>Celsius;
		Farenhiet = (Celsius * 9/5) + 32;
	cout<<"Temperature in Farenhiet: "<<Farenhiet;
	return 0;	
}