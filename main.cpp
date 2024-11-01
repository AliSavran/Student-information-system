#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char islem;
    string ad, soyad;
    int okul_no, gun_sayisi;
    float ilk_sinav, ikinci_sinav, ucuncu_sinav, ortalama;
    bool tekrar = true;

    while (tekrar)
    {

        cout << "Ogrenci Bilgi Sistemi" << endl;
        cout << "Ogrenci adi ve soyadini giriniz:";
        cin >> ad >> soyad;
        cout << "Ogrenci okul no giriniz:";
        cin >> okul_no;
        cout << "1. Devamsizlik sonucu" << endl;
        cout << "2. ortalama hesaplama" << endl;
        cout << "Hangi islemi yapmak istiyorsunuz?";
        cin >> islem;

        switch (islem)
        {

        case '1':
            srand(time(0));
            gun_sayisi = rand() % 20 + 1;
            if (gun_sayisi > 10)
            {
                cout << "Uzgunuz " << gun_sayisi << " gun devamsizlik yaptiginiz icin devamsizlik hakki asildi..." << endl;
            }
            else
            {
                cout << "Devamsizliginiz " << gun_sayisi << "gun kadari asilmistir" << endl;
            }
            break;

        case '2':
            srand(time(0));
            ilk_sinav = rand() % 100 + 1;
            ikinci_sinav = rand() % 100 + 1;
            ucuncu_sinav = rand() % 100 + 1;
            ortalama = (((ilk_sinav * 30) / 100) + ((ikinci_sinav * 30) / 100) + ((ucuncu_sinav * 40) / 100)) / 3;

            cout << "Sinav sonuclariniz: " << ilk_sinav << " " << ikinci_sinav << " " << ucuncu_sinav << endl;
            cout << "Ortalamaniz: " << ortalama << endl;
            break;

        default:
            cout << "Gecersiz bir islem gerceklestirdiniz. Lutfen tekrar deneyiniz..." << endl;
        }

        char secim;
        cout << "Baska bir islem yapmak istiyor musunuz? (E/H): ";
        cin >> secim;
        if (secim == 'H' || secim == 'h'){
            tekrar = false;
            cout<<"Program sonlandiriliyor...";
        }

        else if(secim == 'E' || secim == 'e'){
            tekrar = true;
        }
    }
    return 0;
}
