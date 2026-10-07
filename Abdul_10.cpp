#include <iostream>
using namespace std;

int main() {
    float s1, s2, s3, s4, s5, average;

    cout << "Enter marks of 5 subjects: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    average = (s1 + s2 + s3 + s4 + s5) / 5;

    cout << "Average = " << average << endl;

    return 0;
}

