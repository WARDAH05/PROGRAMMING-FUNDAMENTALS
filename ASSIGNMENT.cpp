#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    char op;
    cout << "Enter an operator  ";
    cin >>op;
    cout << "Enter two number  ";
    cin >>n1>>n2;


    switch(op) {
        case '+':
            cout << "result: "<<n1+n2;
            break;
        case '-':
            cout << "result: "<<n1-n2;
            break;
        case '*':
            cout << "result: "<<n1*n2;
            break;
        case '/':
        	if(n2>0)
            cout << "result: "<<n1+n2;
            else
            cout<<"ERROR IN DIVISON!";
            break;
            
        default:
            cout << "INVALID ENTRY OF OPERATION!";            
    }

    return 0;
}
