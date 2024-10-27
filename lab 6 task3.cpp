#include <iostream>
using namespace std;
int main(){
	char choise;
	int i=0;
	int avg;
	double temperature;
	double sum=0.0;

	do{
		cout<<"Enter a temperatur : ";
		cin>>temperature;
		
		sum+=temperature;
		i++;
		cout<<"enter your choise:";
		cin>>choise;
	}
	while(choise=='y');
	avg=sum/i;
	cout<<"AVERAGE OF TEMPERATURE:"<<avg;
	return 0;
}