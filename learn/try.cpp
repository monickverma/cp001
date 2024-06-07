#include <iostream>
using namespace std;
int main() {
    int m=10,n=10;
    long long x = 1;  // Initialize x to 1. This will store the factorial of the number.
for (int i = 2; i <= n; i++) {
    x = (x * i) % m;  // Calculate factorial and take modulo m at each step to prevent overflow.
}
cout << x % m << "\n";  // Output the result, which is x mod m.

    }