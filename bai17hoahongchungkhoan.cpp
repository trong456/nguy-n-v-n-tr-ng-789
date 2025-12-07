#include <iostream>
using namespace std;

int main() {
    int shares = 750;
    double price = 35.00;
    double commissionRate = 0.02;

    double stockCost = shares * price;
    double commission = stockCost * commissionRate;
    double total = stockCost + commission;

    cout << "Tien mua co phieu: " << stockCost << endl;
    cout << "Tien hoa hong: " << commission << endl;
    cout << "Tong thanh toan: " << total;
    return 0;
}
