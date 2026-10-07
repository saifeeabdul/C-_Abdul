#include <iostream>
using namespace std;


int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    result = add(num1, num2);

    cout << "Sum = " << result << endl;

    return 0;
}

