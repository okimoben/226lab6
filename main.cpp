#include <iostream>
using namespace std;

int recursive_sum(int n) {
    if (n == 0)
        return 0;
    return n + recursive_sum(n - 1);
}

int recursive_sum_helper(int n) {
    if (n == 0)
        return 0;
    return n + recursive_sum_helper(n - 1);
}

// Overloaded version of recursive_sum()
int recursive_sum() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;
    return n + recursive_sum_helper(n - 1);
}

int main() {
    cout << "-recursive_sum(n)" << endl;
    int num1;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Sum from 1 to " << num1 << " = " << recursive_sum(num1) << endl;

    cout << "\n recursive_sum() [overloaded] " << endl;
    int total = recursive_sum();
    cout << "Sum (overloaded function) = " << total << endl;

    return 0;
}
