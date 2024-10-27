#include <iostream>
using namespace std;
int main(){
	int n,sum=0,i;
do{
	cout<<"enter a no.";
	cin>>n;
    sum+=(n*n);
	i++;
	}
while(n<10);
	cout<<"SUM OF SQUARE of Num: "<<sum;
}