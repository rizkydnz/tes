#include <iostream>

using namespace std;

int main() {
    int jenis_tiket;
    int jumlah_tiket;
    int harga_tiket;

    cout << "Jenis tiket Kereta" << endl;
    cout << "1. Ekonomi" << endl;
    cout << "2. Bisnis" << endl;
    cout << "3. Eksekutif" << endl;
    cout << "Pilih Jenis Tiket Pesanan Kereta : ";
    cin >> jenis_tiket;
    cout << "Jumlah tiket: ";
    cin >> jumlah_tiket;
    switch (jenis_tiket){

    case 1:
    harga_tiket = 100000;
    break;
        
    case 2:
    harga_tiket = 200000;
    break;
        
    case 3:
    harga_tiket = 300000;
    break;
    
    }
    
    int total_harga = harga_tiket * jumlah_tiket;

    if(total_harga > 500000) {
        total_harga -= total_harga * 10 / 100;
    } else if (total_harga > 300000) {
        total_harga -= total_harga * 5 / 100;
    } else if (total_harga > 200000) {
        total_harga -= total_harga * 2 / 100;
    }

    cout << "Total harga tiket: " << total_harga << " rupiah\n";

    return 0;
}