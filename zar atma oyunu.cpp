#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    cout << "Zar atma oyununa hoş geldiniz!" << endl;

    while (true) {
        cout << "Zar atmak için bir tuşa basın (q - çıkış): ";
        char tus;
        cin >> tus;

        if (tus == 'q' || tus == 'Q') {
            break;
        }

        int zar1 = rand() % 6 + 1;
        int zar2 = rand() % 6 + 1;

        cout << "Zarlar: " << zar1 << " ve " << zar2 << endl;

        if (zar1 == zar2) {
            cout << "İki zar da aynı, tekrar atabilirsiniz!" << endl;
        }
    }

    cout << "Oyunu bitirdiniz. İyi günler!" << endl;

    return 0;
}
