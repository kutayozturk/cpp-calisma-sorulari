#include <iostream>

int main() {
    int sayilar[5];

    // Kullanıcıdan 5 farklı sayı alınması
    std::cout << "Lutfen 5 farkli sayi giriniz:\n";

    for (int i = 0; i < 5; ++i) {
        bool gecerli = false;
        do {
            std::cout << i + 1 << ". sayiyi giriniz: ";
            std::cin >> sayilar[i];

            // Girilen sayının daha önce girilip girilmediğini kontrol etme
            gecerli = true;
            for (int j = 0; j < i; ++j) {
                if (sayilar[i] == sayilar[j]) {
                    std::cout << "Bu sayiyi daha once girdiniz, lutfen farkli bir sayi girin.\n";
                    gecerli = false;
                    break;
                }
            }
        } while (!gecerli);
    }

    // Sıralama işlemi algoritması
    for (int i = 0; i < 4; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < 5; ++j) {
            if (sayilar[j] < sayilar[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = sayilar[i];
            sayilar[i] = sayilar[minIndex];
            sayilar[minIndex] = temp;
        }
    }

    // Sıralanmış sayıların ekrana yazdırılması
    std::cout << "Siralanan sayilar: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << sayilar[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
