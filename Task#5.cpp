#include <iostream>
using namespace std;
int main(){
	float PF,ICT,Discrete,Marks;
	cout<<"Enter PF marks: ";
	cin>>PF;
	cout<<"Enter ICT marks: "<<endl;
	cin>>ICT;
	cout<<"Enter Discrete marks: "<<endl;
	cin>>Discrete;
	Marks=(PF+ICT+Discrete)/3;
	if (Marks>=90){
		cout<<"Grade A ";
	}
	else if(Marks >= 80){
		cout<<"Grade B ";
	}
	else if(Marks >= 70){
		cout<<"Grade C ";
	}
	else if(Marks >= 60){
		cout<<"Grade D ";
	}
	else{
		cout<<"Grade F ";
	}
	return 0;
}