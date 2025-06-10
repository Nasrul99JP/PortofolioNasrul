#include <iostream>

using namespace std;

struct Item {
    string nama;
    float harga;
    int jumlah;
};

void tampilkanStruk(Item barang[], int totalItem) {
    float total = 0;
    cout << "Struk Belanja:" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < totalItem; i++) {
        float subtotal = barang[i].harga * barang[i].jumlah;
        cout << barang[i].nama << " (x" << barang[i].jumlah << ") : Rp " << subtotal << endl;
        total += subtotal;
    }

    cout << "======================" << endl;
    cout << "Total: Rp " << total << endl;
}

int main() {
    const int MAX_ITEMS = 100;
    Item barang[MAX_ITEMS];
    int totalItem = 0;
    char lanjut;

    do {
        if (totalItem >= MAX_ITEMS) {
            cout << "Batas item sudah tercapai!" << endl;
            break;
        }

        cout << "Masukkan nama item: ";
        cin >> barang[totalItem].nama;
        cout << "Masukkan harga item: ";
        cin >> barang[totalItem].harga;
        cout << "Masukkan jumlah item: ";
        cin >> barang[totalItem].jumlah;

        totalItem++;

        cout << "Apakah Anda ingin menambahkan belanja lainnya? (y/n): ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    tampilkanStruk(barang, totalItem);

    return 0;
}
