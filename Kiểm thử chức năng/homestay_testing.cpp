#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;


double calculateHomestayCost(int soDem, int soKhach) {
    if (soDem < 1 || soKhach < 1 || soKhach > 4) {
        return -1.0; 
    }
    double pricePerNight = 500000.0;
    if (soKhach > 2) {
        pricePerNight += (soKhach - 2) * 150000.0;
    }
    double total = pricePerNight * soDem;
    if (soDem >= 3 && soDem <= 6) {
        total = total * 0.90; 
    } else if (soDem >= 7) {
        total = total * 0.80; 
    }


    return total;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int soDem, soKhach;
    cin >> soDem >> soKhach;
    double cost = calculateHomestayCost(soDem, soKhach);
    if (cost == -1.0) {
        cout << "Invalid input\n";
    } else {
        cout << fixed << setprecision(0) << cost << " VND\n";
    }

    return 0;
}