#include <iostream>

using namespace std;

int main()
{
    //{ FOR DÖNGÜSÜ İLE Girilen iki sayi arasinda kalan sayiları toplayan program

    int s1,s2,toplam=0;
    cout << "2 sayi giriniz: ";
    cin >> s1 >> s2;

    if(s1==s2){ // sayi1 ile sayi2 eşit mi?
            cout << "Girilen Değerler Aynı" << endl;
    }
    else{
        if(s2==s1+1){
            cout << "Girilen iki değer arasında başka bir değer yer almamaktadır." << endl;
        }
        else if(s1==s2+1){
            cout << "Girilen iki değer arasında başka bir değer yer almamaktadır." << endl;
        }
            else if(s2>s1){
                for(int i=s1+1; i<s2; i++){
                    toplam+=i;
                    }
                        cout << "Toplam = " << toplam << endl;
                else{ // sayi1 sayi2'den büyükse
                    for(int i=s2+1; i<s1; i++){
                        toplam+=i;
                        }
                            cout << "Toplam = " << toplam << endl;
            }
    
}

    //}

    //{ While Döngüsü İle

    int sayi1,sayi2,i,toplam=0;
    cout << "2 sayi giriniz: ";
    cin >> sayi1 >> sayi2;

     i=sayi1 + 1;
     while(i<sayi2){ // girilen 2 sayı dahil değil
         toplam = toplam + i;
         i++;
     }

     cout << "Toplam = " << toplam << endl;

    //}

    //{ DO While Döngüsü İle

    int sayi1,sayi2,i,toplam=0;
    cout << "2 sayi giriniz: ";
    cin >> sayi1 >> sayi2;

     i=sayi1 + 1;
     do{
          toplam = toplam + i;
          i++;
     }
     while(i<sayi2); // girilen 2 sayı dahil değil

     printf("Sonuc : %d",toplam);

    //}

    return 0;
}
