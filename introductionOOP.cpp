#include <iostream>
using namespace std;

class mahasiswa{ // blue print atau cetakan 
    public:
    int nim;
    string nama;
    float niali;

    void prinData(){
        cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }

}