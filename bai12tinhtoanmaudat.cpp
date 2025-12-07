#include <iostream>
using namespace std;

int main() {
    double squareFeetPerAcre = 43560;
    double landSize = 391876;
    double acres = landSize / squareFeetPerAcre;
    cout << "So mau dat: " << acres;
    return 0;
}
