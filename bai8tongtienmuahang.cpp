#include <iostream>
using namespace std;

int main() {
    double a=15.59, b=24.59, c=6.59, d=12.59, e=3.59;
    double subtotal = a + b + c + d + e;
    double tax = subtotal * 0.07;
    double total = subtotal + tax;

    cout << "Tong tam tinh: " << subtotal << endl;
    cout << "Thue: " << tax << endl;
    cout << "Tong phai tra: " << total;
    return 0;
}
