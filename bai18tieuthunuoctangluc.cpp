#include <iostream>
using namespace std;

int main() {
    int customers = 16500;
    int buyEnergy = customers * 0.15;
    int orangeFlavor = buyEnergy * 0.58;

    cout << "Khach mua nuoc tang luc: " << buyEnergy << endl;
    cout << "Khach thich vi cam: " << orangeFlavor;
    return 0;
}
