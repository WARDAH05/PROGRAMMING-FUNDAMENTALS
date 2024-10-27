#include <iostream>
using namespace std;
int main(){
	int score;
	cout<<"Enter your score out of 100: ";
	cin>>score;
	if(score>=90)
	cout<<"GRADE A";
	else{
		if(score>=80&& score<=98)
		if (score>=85)
		cout<<"GRADE B+";
		else{
			cout<<"GRADE B";
		}
		if(score>=70&& score<=79)
		if (score>=75)
		cout<<"GRADE C+";
		else{
			cout<<"GRADE C";
	}
	if(score>=60&& score<=69)
		cout<<"GRADE D";
       else{
			cout<<"GRADE F";
}
return 0;
}
}
