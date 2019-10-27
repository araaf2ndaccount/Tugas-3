#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>

/*
    Nama : Mamet Adil Araaf
    Nim  : A11.2017.10656
*/

using namespace std;

int main()
{
    string kata;
    int in_rand,temp;

    cout << "--- Tebak Kata ---" << endl ;

    cout << "Masukkan Kata : ";
    cin >> kata;

    string awal= kata;

    for (int i=0; i<awal.size(); i++){
        in_rand = rand() % kata.size();
        temp = kata[i];
        kata[i] = kata[in_rand];
        kata[in_rand] = temp;
    }
    cout << "Kata Setelah Diacak : " << kata <<endl;


    cout << "--- Tebak Kata ---"<< endl;
    string jwb;

    cout << "Masukkan tebakan : " ;
    cin >> jwb;

    if(awal.compare(jwb)==0){
        cout << "Selamat anda benar !!";
    }
    else{
        cout << "Anda Salah !!";

    }
    return 0;
}
