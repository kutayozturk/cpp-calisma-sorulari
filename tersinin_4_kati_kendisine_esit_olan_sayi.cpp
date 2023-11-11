#include <iostream>

using namespace std;

int main()
{
    //{ Tersi ile 4 carpildiginda, kendisine eşit olan 4 basamaklı sayı(lar) hangisidir?

    setlocale(LC_ALL,"Turkish");

    for (int sayi=1000;sayi<10000;sayi++){
        int birler, onlar, yuzler, binler;

        birler = sayi % 10;
        onlar = (sayi / 10) % 10;
        yuzler = (sayi / 100) % 10;
        binler = sayi / 1000;

        int tersi = (birler * 1000 + onlar * 100 + yuzler * 10 + binler);
        int kat4 = tersi * 4;

        if(kat4==sayi){
            cout << "Sonuc = " << kat4 << endl;
        }
    }
    //}
    
    return 0;
}


