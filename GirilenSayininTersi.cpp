#include <iostream>

using namespace std;
int main() {
    int sayi;
    cout << "Tersi hesaplanacak sayiyi giriniz: ";
    cin >> sayi;
    int tersi = 0;
    while(sayi!=0){
        int kalan = sayi%10;
        tersi = tersi*10 + kalan;
        sayi = sayi/10;
    }
    cout << "Girilen sayinin tersi: " << tersi;
    return 0;
}
