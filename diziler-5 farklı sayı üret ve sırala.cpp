#include <iostream>

using namespace std;

int main() {
    int sayilar[5];
    int uretilenSayilar = 0;

    srand(time(NULL)); // Rastgele sayılar için seed değerini ayarla

    // 5 farklı rastgele sayı üret
    while (uretilenSayilar < 5) {
        int rastgeleSayi = rand() % 50 + 1; // Örnek olarak 1 ile 50 arasında sayılar üret

        bool varMi = false;
        for (int i = 0; i < uretilenSayilar; ++i) {
            if (sayilar[i] == rastgeleSayi) {
                varMi = true;
                break;
            }
        }

        if (!varMi) {
            sayilar[uretilenSayilar] = rastgeleSayi;
            uretilenSayilar++;
        }
    }

    // Üretilen sayıları ekrana yazdır
    cout << "Uretilen sayilar: ";
    for (int i = 0; i < 5; ++i) {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    // El ile küçükten büyüğe sıralama
    for (int i = 0; i < 5 - 1; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            if (sayilar[i] > sayilar[j]) {
                // Swap işlemi
                int geciciSayi = sayilar[i];
                sayilar[i] = sayilar[j];
                sayilar[j] = geciciSayi;
            }
        }
    }

    // Sıralanmış sayıları ekrana yazdır
    cout << "Sirali sayilar: ";
    for (int i = 0; i < 5; ++i) {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    return 0;
}
