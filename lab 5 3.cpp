#include <iostream>
using namespace std;
int main ()
{
    int a,i,sum=0;
    while (true)
   
   {
        cout <<"enter the number";
        cin>>a;
        if (a<0)
        break;
        sum=sum+a;
    
    }
    cout <<"sum=" <<sum;
}
