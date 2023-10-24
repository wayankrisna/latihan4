#include <iostream>

using namespace std;

int main()
{
    float bil1, bil2, hasil;
    cout << "======= BILANGAN =======" <<endl;
    cout << "Masukkan Bilangan 1 : ";
    cin >> bil1;
    cout <<"Masukkan Bilangan 2 : ";
    cin >> bil2;
    cout <<endl;
    cout <<"------------------------" <<endl;
    cout <<"Hasil Penjumlahan" <<endl;
    hasil=bil1+bil2;
    cout <<bil1 <<" + "<<bil2 <<" = " <<hasil <<endl;
    cout <<"------------------------" <<endl;
    cout <<"Hasil Pengurangan" <<endl;
    hasil=bil1-bil2;
    cout <<bil1 <<" - "<<bil2 <<" = " <<hasil <<endl;
    cout <<"------------------------" <<endl;
    cout <<"Hasil Perkalian" <<endl;
    hasil=bil1*bil2;
    cout <<bil1 <<" * "<<bil2 <<" = " <<hasil <<endl;
    cout <<"------------------------" <<endl;
    cout <<"Hasil Pembagian" <<endl;
    hasil=bil1/bil2;
    cout <<bil1 <<" / "<<bil2 <<" = " <<hasil <<endl;
    return 0;
}
