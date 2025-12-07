#include <iostream>
using namespace std;

int main() {
    double tank = 20;
    double city = 23.5;
    double highway = 28.9;

    cout << "Di chuyen trong thanh pho: " << tank * city << " miles\n";
    cout << "Di chuyen tren cao toc: " << tank * highway << " miles\n";
    return 0;
}