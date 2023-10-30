#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool has_even_digit(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            return true;
        }
        num /= 10;
    }
    return false;
}

int cout_even_digit(int N) {
    int count = 0;
    for (int i = 2; i <= N; ++i) {
        if (is_prime(i) && has_even_digit(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    cout << "Hello! Task #B. Say num: \n";
    cin >> N;

    int result = cout_even_digit(N);
    cout << result << endl;

    return 0;
}