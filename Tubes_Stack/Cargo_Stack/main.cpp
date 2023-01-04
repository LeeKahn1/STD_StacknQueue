#include <iostream>
#include "stack.h"


using namespace std;

int main()
{
    Stack S,Ohio;
    createStack(S);
    createStack(Ohio);
    infotype cargo;
    string look;
    cout << " ===== Selamat Datang di Penyimpanan Cargo ===== " << endl;
    cout << " ======== Berikut Barang Cargo AIR-3269 ======== " << endl;

    cargo.noBarang = 111;
    cargo.namaBarang = "TV";
    cargo.jenisBarang = "Furniture";
    Push(S,cargo);
    cargo.noBarang = 222;
    cargo.namaBarang = "Motor";
    cargo.jenisBarang = "Kendaraan";
    Push(S,cargo);
    cargo.noBarang = 333;
    cargo.namaBarang = "Sepeda";
    cargo.jenisBarang = "Kendaraan";
    Push(S,cargo);
    cargo.noBarang = 444;
    cargo.namaBarang = "Alat Militer";
    cargo.jenisBarang = "Classified";
    Push(S,cargo);
    cargo.noBarang = 555;
    cargo.namaBarang = "Mobil";
    cargo.jenisBarang = "Kendaraan";
    Push(S,cargo);
    printStack(S);
    cout << endl;

    cout << " ========== Pengambilan Barang ========== " << endl;
    cout << "^^Petugas mengambil barang yang terakhir^^" << endl;
    Pop(S,cargo);
    Push(Ohio,cargo);
    cout << "Barang setelah diambil:" << endl;
    printStack(S);

    cout << "^^Petugas mengambil barang yang keempat^^" << endl;
    Pop(S,cargo);
    Push(Ohio,cargo);
    cout << "Barang setelah diambil:" << endl;
    printStack(S);

    cout << "^^Petugas mengambil barang yang ketiga^^" << endl;
    Pop(S,cargo);
    Push(Ohio,cargo);
    cout << "Barang setelah diambil:" << endl;
    printStack(S);

    cout << "\nBarang yang tersimpan di Ohio :" <<endl;
    printStack(Ohio);

    cout << "\nSisa Barang yang akan didrop ke destinasi selanjutnya :" << endl;
    printStack(S);

    cout << "\nMencari jenis barang: ";
    cin >> look;
    cout << "Jenis barang yang dicari :" <<endl;
    lookForStuff(Ohio,look);

    return 0;
}
