#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a, b;
    cin >> a >> b;
    long long g = gcd(a, b);
    cout << a * b / g << "\n";

    return 0;
}
