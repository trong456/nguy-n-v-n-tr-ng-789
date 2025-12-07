#include <iostream>
using namespace std;

int main() {
    double meal = 88.67;
    double tax = meal * 0.0675;
    double totalAfterTax = meal + tax;
    double tip = totalAfterTax * 0.20;
    double total = totalAfterTax + tip;

    cout << "Chi phi bua an: " << meal << endl;
    cout << "Tien thue: " << tax << endl;
    cout << "Tien tip: " << tip << endl;
    cout << "Tong hoa don: " << total;
    return 0;
}
