#include <iostream>
#include<string>
using namespace std;
int main(){
	int n1=67;
	int n2=78;
	char ch;
	cout<<"ENTER A CHARACTER:";
	cin>>ch;
	switch (ch){
	
	case'+':
		cout<<"addition: "<<n1+n2;
		break;
		case'-':
			cout<<"subtraction: "<<n1-n2;
			break;
			case'/':
			cout<<"Division: "<<n1/n2;
			break;
			case'*':
			cout<<"Multiplication: "<<n1*n2;
			break;
				case'%':
		cout<<"remainder: "<<n1%n2;
		break;
}
}