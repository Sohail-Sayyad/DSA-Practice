#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

// 1. Extract Digits
void extractDigits() {
    int n;

    cout << "Enter the number to be extracted: ";
    cin >> n;

    while (n > 0) {
        int last_digit = n % 10;
        cout << last_digit << " ";
        n = n / 10;
    }

    cout << endl;
}

// 2. Count Digits (Loop)
void countDigits1() {
    int n;
    int cnt = 0;

    cout << "Enter the number: ";
    cin >> n;

    while (n > 0) {
        cnt++;
        n /= 10;
    }

    cout << "Number of digits = " << cnt << endl;
}

// 3. Count Digits (log10)
void countDigits2() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    int cnt = (int)(log10(n) + 1);

    cout << "Number of digits = " << cnt << endl;
}

// 4. Reverse Number
void reverseNumber() {
    int n;
    int reverseNum = 0;

    cout << "Enter the number: ";
    cin >> n;

    while (n > 0) {
        int last_digit = n % 10;
        reverseNum = reverseNum * 10 + last_digit;
        n /= 10;
    }

    cout << "Reversed Number = " << reverseNum << endl;
}

// 5. Palindrome Number
void palindromeNumber() {
    int n;
    int reverseNum = 0;

    cout << "Enter the number: ";
    cin >> n;

    int original = n;

    while (n > 0) {
        int last_digit = n % 10;
        reverseNum = reverseNum * 10 + last_digit;
        n /= 10;
    }

    if (original == reverseNum)
        cout << "True" << endl;
    else
        cout << "False" << endl;
}

// 6. Armstrong Number (3-digit)
void armstrongNumber() {
    int n;
    int sum = 0;

    cout << "Enter the number: ";
    cin >> n;

    int original = n;

    while (n > 0) {
        int last_digit = n % 10;
        sum += last_digit * last_digit * last_digit;
        n /= 10;
    }

    if (original == sum)
        cout << "True" << endl;
    else
        cout << "False" << endl;
}

// 7. Divisors (Brute Force)
void divisors1() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Divisors: ";

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            cout << i << " ";
    }

    cout << endl;
}

// 8. Divisors (Optimal)
void divisors2() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    vector<int> v;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            v.push_back(i);

            if (n / i != i)
                v.push_back(n / i);
        }
    }

    sort(v.begin(), v.end());

    cout << "Divisors: ";

    for (auto x : v)
        cout << x << " ";

    cout << endl;
}

int main() {

    // Uncomment ONE function at a time.

    // extractDigits();

    // countDigits1();

    // countDigits2();

    // reverseNumber();

    // palindromeNumber();

    // armstrongNumber();

    // divisors1();

    divisors2();

    return 0;
}



   







