#include <iostream>
using namespace std;
int main(){
	int num,sum=0;
	do{
		cout<<"Enter a no. ";
		cin>>num;
		sum+=num;
	}
	while(num!=0);
	cout<<"Sum is :"<<sum;
	return 0;
}