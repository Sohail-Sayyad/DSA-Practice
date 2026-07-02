#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// 1. Prime Number (Brute Force)
void prime1() {

    int n;
    int cnt = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            cnt++;
    }

    if (cnt == 2)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
}

// 2. Prime Number (Better)
void prime2() {

    int n;
    int cnt = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= sqrt(n); i++) {

        if (n % i == 0) {

            cnt++;

            if (n / i != i)
                cnt++;
        }
    }

    if (cnt == 2)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
}

// 3. GCD (Brute Force)
void gcd1() {

    int n1, n2;
    int gcd = 1;

    cout << "Enter the two numbers: ";
    cin >> n1 >> n2;

    for (int i = 1; i <= min(n1, n2); i++) {

        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    cout << "GCD = " << gcd << endl;
}

// 4. GCD (Better)
void gcd2() {

    int n1, n2;
    int gcd = 1;

    cout << "Enter the two numbers: ";
    cin >> n1 >> n2;

    for (int i = min(n1, n2); i >= 1; i--) {

        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
            break;
        }
    }

    cout << "GCD = " << gcd << endl;
}

// 5. Euclidean Algorithm (Optimal)
void gcd3() {

    int a, b;

    cout << "Enter the two numbers: ";
    cin >> a >> b;

    while (a > 0 && b > 0) {

        if (a > b)
            a = a % b;
        else
            b = b % a;
    }

    if (a == 0)
        cout << "GCD = " << b << endl;
    else
        cout << "GCD = " << a << endl;
}

int main() {

    // Uncomment ONE function at a time.

    // prime1();

    // prime2();

    // gcd1();

    // gcd2();

    gcd3();

    return 0;
}