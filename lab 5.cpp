 #include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    int i = 1;

    
    cout << "Enter a positive number (N): ";
    cin >> n;
 while (n <= 0) {
        cout << "Please enter a positive number: ";
        cin >> n;
    }

    while (i <= n) {
        if (i % 2 != 0) {  // Check if number is odd
            sum += i;
        }
        i++;
    }
  cout << "Sum of odd numbers from 1 to " << n << ": " << sum << endl;
   return 0;
}
