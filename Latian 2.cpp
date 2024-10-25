#include <iostream>
using namespace std;

int main() {
    int TotalBebek = 20;
    int JumlahTeman = 13;
    int BebekPerOrang, SisaBebek;

    cout << "Total Bebek "<< TotalBebek<<endl;
    cout << "Jumlah Teman "<< JumlahTeman<<endl;

    BebekPerOrang = TotalBebek / JumlahTeman;
    SisaBebek = TotalBebek % JumlahTeman;

    cout << "Jumlah Bebek per Orang "<<BebekPerOrang<<endl;
    cout << "Sisa Bebek "<<SisaBebek<<endl;
    cout << "Jadi Pak Tatang akan memberikan " <<BebekPerOrang<< " ekor bebek kepada 13 temannya." <<endl;
    cout << "Dan Sisa bebek yang tidak terbagi adalah " << SisaBebek << " ekor." << endl;

    return 0;
}
