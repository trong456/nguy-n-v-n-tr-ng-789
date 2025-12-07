#include <iostream>
using namespace std;

int main() {
    double coverage = 340;
    double height = 6, length = 100;

    double area = height * length * 2;  // hai l?p
    double gallons = area / coverage;

    cout << "So gallon son can: " << gallons;
    return 0;
}
