#include <iostream>
using namespace std;
int main(){
	double length,Width,Area,Perimeter;
	cout<<"Enter lenght of a rectangle: ";
	cin>>length;
	cout<<"Enter width of a rectangle: ";
	cin>>Width;
		Area = length * Width;
	
	cout<<"The Area of rectangle is: "<<Area<<endl;
		Perimeter = 2 * (length + Width);
	cout<<"The Perimeter of rectangle is: "<<Perimeter;
	return 0;
		
}