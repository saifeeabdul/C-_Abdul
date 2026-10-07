#include <iostream>
using namespace std;

int main() {
    float radius, volume;
    const float PI = 3.14159;

    cout << "Enter radius: ";
    cin >> radius;

    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    cout << "Volume of Sphere = " << volume << endl;

    return 0;
}

