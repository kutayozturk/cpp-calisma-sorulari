#pragma region while döngüsü ile
//While döngüsünü kullanarak Armstrong sayısını kontrol eden program
//
//Armstrong sayısı nedir ?
//N haneli bir sayının basamaklarının n’inci üstlerinin toplamı, sayının kendisine eşitse, böyle sayılara Armstrong sayı denir.
//
//Örneğin 407 sayısını ele alalım. (4 ^ 3) + (0 ^ 3) + (7 ^ 3) = 64 + 0 + 343 = 407 sonucunu verir.Bu da 407 sayısının armstrong bir sayı olduğunu gösterir.
//
//371 değerini deneyebilirsiniz.
#pragma endregion

#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    int sayi, geciciDeger, basamakSayisi = 0, sonuc = 0, kalan, kuvvet, i;
    cout << "Bir Sayı Giriniz: ";
    cin >> sayi;
    geciciDeger = sayi;
    while (sayi > 0)
    {
        sayi = sayi / 10;
        basamakSayisi++;
    }
    sayi = geciciDeger;
    while (sayi > 0)
    {
        kalan = sayi % 10;
        kuvvet = 1;
        i = 0;
        while (i < basamakSayisi)
        {
            kuvvet = kuvvet * kalan;
            i++;
        }
        sonuc = sonuc + kuvvet;
        sayi = sayi / 10;
    }
    if (sonuc == geciciDeger)
        cout << "\nBu bir Armstrong Sayısıdır";
    else
        cout << "\nBu bir Armstrong Sayısı değildir";
    cout << endl;
    return 0;
}

#pragma region for döngüsü ile

#pragma endregion

//#include<iostream>
//using namespace std;
//int main()
//{
//    setlocale(LC_ALL, "Turkish");
//    int sayi, geciciDeger, basamakSayisi = 0, sonuc = 0, kalan, kuvvet, i;
//    cout << "Bir Sayı Giriniz: ";
//    cin >> sayi;
//    for (geciciDeger = sayi; geciciDeger > 0; geciciDeger = geciciDeger / 10)
//        basamakSayisi++;
//    for (geciciDeger = sayi; geciciDeger > 0; geciciDeger = geciciDeger / 10)
//    {
//        kalan = geciciDeger % 10;
//        kuvvet = 1;
//        for (i = 0; i < basamakSayisi; i++)
//            kuvvet = kuvvet * kalan;
//        sonuc = sonuc + kuvvet;
//    }
//    if (sonuc == sayi)
//        cout << "\nBu bir Armstrong Sayısıdır";
//    else
//        cout << "\nBu bir Armstrong Sayısı değildir";
//    cout << endl;
//    return 0;
//}
