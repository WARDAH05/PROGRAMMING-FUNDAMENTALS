#include <iostream>
using namespace std;
int main ()
{
    int b,sb,w;
    while (true)
    {
    cout <<"enter ur balance=";
    cin>>b;
    cout <<"how much u want to withdraw=";
    cin>>w;
    if (w==0)
    break;
    (sb=b-w);
    }
    cout <<" sufficient balance" <<sb;
    return 0;
}
