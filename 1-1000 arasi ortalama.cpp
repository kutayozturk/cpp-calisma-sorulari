#include <iostream>

using namespace std;

int main()
{
    float toplam=0, ortalama=0, sayac=0;
    for (int i=1;i<=1000;i++){
        toplam+=i;
        sayac++;
    }
    cout << "Ortalama = " << toplam/sayac;
    return 0;
}
