#include <iostream>
using namespace std;

int main() {
    int firstValue = 10, secondValue = 8;
    int temp; // Variabel tambahan

    // Menukar nilai menggunakan variabel tambahan
    temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    cout << "firstValue: " << firstValue << endl;
    cout << "secondValue: " << secondValue << endl;

    return 0;
}
