#include <iostream>
using namespace std;

int main() {
    int totalBebek = 20;
    int teman = 13;

    int bebekPerTeman = totalBebek / teman;
    int sisaBebek = totalBebek % teman;

    cout << "yang di dapat setiap teman: " << bebekPerTeman << "bebek" << endl;
    cout << "sisaBebek: " << sisaBebek << endl;

    return 0;
}