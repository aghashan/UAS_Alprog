#include <iostream>
using namespace std;

int film, jam, bayar, total, kembalian, mami, hargamenu, totalmenu, i, jmltiket; //mami = makan minum
char ulang, tambahan, cetak;
string cinema, username, password, namafilm, tayang,mami2;
int hargatiket = 35000;
int cocacola = 25000;
int pepsi = 25000;
int tea = 20000;
int saltpopcorn = 35000;
int caramelpopcorn = 43000;
int honeybutterpopcorn = 55000;
int airmineral = 15000;

void login(){
    cout << "==== Selamat Datang di Aplikasi Kasir Bioskop ==== " << endl;
    cout << "Username : ";
    cin >> username;
    cout << "Password : ";
    cin >> password;
}

void dftrfilm(){
    cout << "======== Pilih Film  ========" << endl;
    cout << "1.Pamali : Dusun pocong" << endl;
    cout << "2.Di Ambang Kematian" << endl;
    cout << "3.Kisah Tanah Jawa : Pocong Gundul" << endl;
    cout << "4.Sijjin" << endl;
    cout << "5.Perjamuan Iblis" << endl;
    cout << "6.Saranjana" << endl;
    cout << "=============================" << endl;
}
void dftrmenu(){
    cout << "==========  Makanan & Minuman ==========" << endl;
    cout << " 1. 2 coca-cola & salt popcorn" << endl;
    cout << " 2. 2 pepsi & salt popcorn" << endl;
    cout << " 3. 2 tea & salt popcorn" << endl;
    cout << " 4. 2 coca-cola & caremel popcorn" << endl;
    cout << " 5. 2 pepsi & caremel popcorn" << endl;
    cout << " 6. 2 tea & caremel popcorn" << endl;
    cout << " 7. 2 coca-cola & honey butter popcorn" << endl;
    cout << " 8. 2 pepsi & honey butter popcorn" << endl;
    cout << " 9. 2 tea & honey butter popcorn" << endl;
    cout << " 10. coca cola & honey butter popcorn" << endl;
    cout << " 11. pepsi & honey butter popcorn" << endl;
    cout << " 12. tea & honey butter popcorn" << endl;
    cout << " 13. coca-cola & salt popcorn" << endl;
    cout << " 14. pepsi & salt popcorn" << endl;
    cout << " 15. tea & salt popcorn" << endl;
    cout << " 16. coca-cola & caramel popcorn" << endl;
    cout << " 17. pepsi & caramel popcorn" << endl;
    cout << " 18. tea & caramel popcorn" << endl;
    cout << " 19. coca-cola" << endl;
    cout << " 20. pepsi" << endl;
    cout << " 21. tea" << endl;
    cout << " 22. air mineral" << endl;
    cout << " 23. caramel popcorn" << endl;
    cout << " 24. honey butter popcorn" << endl;
    cout << " 25. salt popcorn" << endl;
    cout << "========================================" << endl;
}

void jam1(){
    cout << "==== Pilih Jam Tayang  ======" << endl;
    cout << "1.10.20 WIB" << endl;
    cout << "2.14.10 WIB" << endl;
    cout << "3.16.30 WIB" << endl;
    cout << "4.18.10 WIB" << endl;
    cout << "5.19.40 WIB" << endl;
    cout << "=============================" << endl;
}

void jam2(){
    cout << "==== Pilih Jam Tayang  ======" << endl;
    cout << "1.11.20 WIB" << endl;
    cout << "2.15.10 WIB" << endl;
    cout << "3.17.30 WIB" << endl;
    cout << "4.19.10 WIB" << endl;
    cout << "5.21.40 WIB" << endl;
    cout << "=============================" << endl;
}

void jam3(){
    cout << "==== Pilih Jam Tayang  ======" << endl;
    cout << "1.09.20 WIB" << endl;
    cout << "2.12.10 WIB" << endl;
    cout << "3.14.30 WIB" << endl;
    cout << "4.16.10 WIB" << endl;
    cout << "5.20.40 WIB" << endl;
    cout << "=============================" << endl;
}

void invoice(){
    cout << "================ Invoice ================" << endl;
    cout << "Nama Film     : " << namafilm << endl;
    cout << "Jam           : " << tayang << endl;
    cout << "Jumlah Ticket : " << jmltiket << endl;
    cout << "Total Harga   : Rp." << total << endl;
    cout << "Total Bayar   : Rp." << bayar << endl;
    cout << "Kembalian     : Rp." << kembalian << endl;
    cout << "=========================================" << endl;
}

void Pembayaran(){
        cout << "================== Pembayaran ==================" << endl;
        cout << "Harga Tiket : " << jmltiket << " * " << hargatiket << " = Rp." << jmltiket * hargatiket << endl;
        cout << "Tambahan : Rp." << totalmenu << endl;
        total = jmltiket * hargatiket + totalmenu;
        cout << "Total Harga : Rp." << total << endl;
        cout << "Masukan Jumlah Uang Yang Dibayarkan : Rp.";
        cin >> bayar;
        kembalian = bayar - total;
}


int main() {

login:
    login();

    system("clear");

    if (username == "kasir" && password == "kasir123") {
     menu:
        dftrfilm();

        cout << "Silahkan Pilih Film : ";
        cin >> film;

     jamtayang1:
        if (film == 1 || film == 4) {
            jam1();
        }else if (film == 2 || film == 6) {
            jam2();
        }else if (film == 3 || film == 5) {
            jam3();
        }else {
            system("clear");
            cout << "Mohon Masukan Film Yang Ada!!" << endl;
            goto menu;
        }

        if (film == 1) {
            cinema = "Cinema 3";
        }else if (film == 3) {
            cinema = "Cinema 5";
        }else if (film == 6) {
            cinema = "Cinema 4";
        }else if (film == 4) {
            cinema = "Cinema 2";
        }else if (film == 2) {
            cinema = "Cinema 1";
        }else if (film == 5) {
            cinema = "Cinema 6";
        }
        
     jamtayang2:
        cout << "Silahkan Pilih Jam Tayang : ";
        cin >> jam;
        
        if(jam < 1 || jam > 5 ){
            system("clear");
            cout << "Pilih Jam Tayang Yang Ada!!"<<endl;
            goto jamtayang1;
            goto jamtayang2;
        }

        cout << "Jumlah Tiket Yang Dibeli : ";
        cin >> jmltiket;

        cout << "== Pilih 1 - 150 ==" << endl;
        int nokursi[5];
        for (i = 0; i < jmltiket; i++) {
            cout << "Kursi ke " << i + 1 << " : ";
            cin >> nokursi[i];

            
        }

        cout << "Ingin Tambah Makanan / Minuman ? ( y / t ) : ";
        cin >> tambahan;

        system("clear");

     menu2:
        if (tambahan == 'y') {

            dftrmenu();

            cout << "Masukan Pilihan : ";
            cin >> mami;

            if (mami == 1) {
                hargamenu = (2 * cocacola) + saltpopcorn;
                totalmenu = hargamenu * 0.8;
            }else if (mami == 2) {
                hargamenu = (2 * pepsi) + saltpopcorn;
                totalmenu = hargamenu * 0.8;
            }else if (mami == 3) {
                hargamenu = (2 * tea) + saltpopcorn;
                totalmenu = hargamenu * 0.8;
            }else if (mami == 4) {
                hargamenu = (2 * cocacola) + caramelpopcorn;
                totalmenu = hargamenu * 0.8;
            }else if (mami == 5) {
                hargamenu = (2 * pepsi) + caramelpopcorn;
                totalmenu = hargamenu * 0.8;
            }else if (mami == 6) {
                hargamenu = (2 * tea) + caramelpopcorn;
                totalmenu = hargamenu * 0.8;
            }else if (mami == 7) {
                hargamenu = (2 * cocacola) + honeybutterpopcorn;
                totalmenu = hargamenu * 0.8;
            } else if (mami == 8) {
                hargamenu = (2 * pepsi) + honeybutterpopcorn;
                totalmenu = hargamenu * 0.8;
            }else if (mami == 9) {
                hargamenu = (2 * tea) + honeybutterpopcorn;
                totalmenu = hargamenu * 0.8;
            }else if (mami == 10) {
                hargamenu = (cocacola)+honeybutterpopcorn;
                totalmenu = hargamenu * 0.5;
            }else if (mami == 11) {
                hargamenu = (pepsi)+honeybutterpopcorn;
                totalmenu = hargamenu * 0.5;
            }else if (mami == 12) {
                hargamenu = (tea)+honeybutterpopcorn;
                totalmenu = hargamenu * 0.5;
            }else if (mami == 13) {
                hargamenu = (cocacola)+saltpopcorn;
                totalmenu = hargamenu * 0.5;
            }else if (mami == 14) {
                hargamenu = (pepsi)+saltpopcorn;
                totalmenu = hargamenu * 0.5;
            }else if (mami == 15) {
                hargamenu = (tea)+saltpopcorn;
                totalmenu = hargamenu * 0.5;
            }else if (mami == 16) {
                hargamenu = (cocacola)+caramelpopcorn;
                totalmenu = hargamenu * 0.5;
            }else if (mami == 17) {
                hargamenu = (pepsi)+caramelpopcorn;
                totalmenu = hargamenu * 0.5;
            }else if (mami == 18) {
                hargamenu = (tea)+caramelpopcorn;
                totalmenu = hargamenu * 0.5;
            }else if (mami == 19) {
                totalmenu = cocacola;
            }else if (mami == 20) {
                totalmenu = pepsi;
            }else if (mami == 21) {
                totalmenu = tea;
            }else if (mami == 22) {
                totalmenu = airmineral;
            }else if (mami == 23) {
                totalmenu = caramelpopcorn;
            }else if (mami == 24) {
                totalmenu = honeybutterpopcorn;
            }else if (mami == 25) {
                totalmenu = saltpopcorn;
            }else {
                system("clear");
                cout << "Mohon Masukan ( y / t )!!" << endl;
                goto menu2;
            }
        }

        system("clear");

        if (film == 1){
            namafilm = "Pamali : Dusun pocong";
        }else if (film == 2) {
            namafilm = "Di Ambang Kematian";
        }else if (film == 3) {
            namafilm = "Kisah Tanah Jawa : Pocong Gundul";
        }else if (film == 4) {
            namafilm = "Sijjin";
        }else if (film == 5) {
            namafilm = "Perjamuan Iblis";
        }else if (film == 6) {
            namafilm = "Saranjana";
        }

        if (film == 1 || film == 4) {
            if (jam == 1){
                tayang = "10.20 WIB";
            }else if(jam == 2){
                tayang = "14.10 WIB";
            }else if(jam == 3){
                tayang = "16.30 WIB";
            }else if(jam == 4){
                tayang == "18.10 WIB";
            }else if(jam == 5){
                tayang = "19.40 WIB";
            }
        }

        if (film == 2 || film == 6){
            if (jam == 1){
                tayang = "11.20 WIB";
            }else if (jam == 2){
                tayang = "15.10 WIB";
            }else if (jam == 3){
                tayang = "17.30 WIB";
            }else if (jam == 4){
                tayang == "19.10 WIB";
            }else if (jam == 5){
                tayang = "21.40 WIB";
            }
        }

        if (film == 3 || film == 5){
            if (jam == 1){
                tayang = "09.20 WIB";
            }else if (jam == 2){
                tayang = "12.10 WIB";
            }else if (jam == 3){
                tayang = "14.30 WIB";
            }else if (jam == 4){
                tayang == "16.10 WIB";
            }else if (jam == 5){
                tayang = "20.40 WIB";
            }
        }

        if(mami == 1){
            mami2 = "2 coca-cola & salt popcorn";
        }else if(mami == 2){
            mami2 = "2 pepsi & salt popcorn";
        }else if(mami == 3){
            mami2 = "2 tea & salt popcorn";
        }else if(mami == 4){
            mami2 = "2 coca-cola & caremel popcorn";
        }else if(mami == 5){
            mami2 = "2 pepsi & caremel popcorn";
        }else if(mami == 6){
            mami2 = "2 tea & caremel popcorn";
        }else if(mami == 7){
            mami2 = "2 coca-cola & honey butter popcorn";
        }else if(mami == 8){
            mami2 = "2 pepsi & honey butter popcorn";
        }else if(mami == 9){
            mami2 = "2 tea & honey butter popcorn";
        }else if(mami == 10){
            mami2 = "coca cola & honey butter popcorn";
        }else if(mami == 11){
            mami2 = "pepsi & honey butter popcorn";
        }else if(mami == 12){
            mami2 = "tea & honey butter popcorn";
        }else if(mami == 13){
            mami2 = "coca-cola & salt popcorn";
        }else if(mami == 14){
            mami2 = "pepsi & salt popcorn";
        }else if(mami == 15){
            mami2 = "tea & salt popcorn";
        }else if(mami == 16){
            mami2 = "coca-cola & caramel popcorn";
        }else if(mami == 17){
            mami2 = "pepsi & caramel popcorn";
        }else if(mami == 18){
            mami2 = "tea & caramel popcorn";
        }else if(mami == 19){
            mami2 = "coca-cola";
        }else if(mami == 20){
            mami2 = "pepsi";
        }else if(mami == 21){
            mami2 = "tea";
        }else if(mami == 22){
            mami2 = "air mineral";
        }else if(mami == 23){
            mami2 = "caramel popcorn";
        }else if(mami == 24){
            mami2 = "honey butter popcorn";
        }else if(mami == 25){
            mami2 = "salt popcorn";
        }       
        
        cout << "========================================" << endl;
        cout << "film         : " << namafilm << endl;
        cout << "jam          : " << tayang << endl;
        cout << "Jumlah Tiket : " << jmltiket << endl;
        cout << "Nomor Kursi  :| ";
        for (i = 0; i < jmltiket; i++) {
            cout << nokursi[i] << " | ";
        }
        cout << endl;
        cout << "tambahan     : " << mami2 << endl;
        cout << "========================================" << endl;
        cout << "Apakah Pilihan Sudah Sesuai ? ( y / t ) : ";
        cin >> ulang;

        if (ulang == 't') {
            system("clear");
            goto menu;
        }

        system("clear");

        bayar:
         Pembayaran();

        if (bayar < total){
            system("clear");
            cout << "Uang Anda Kurang "<< total - bayar << endl;
            goto bayar;
        }
         
        system("clear");
        
        invoice();

     cetak:
        cout << "Klik (y) Untuk Cetak Tiket : ";
        cin >> cetak;

        system("clear");

        if (cetak == 'y') {
            cout << "================ TIKET ================" << endl;
            cout << "Nama Film     : " << namafilm << endl;
            cout << "Jam           : " << tayang << endl;
            cout << "Jumlah Ticket : " << jmltiket << endl;
            cout << "Tempat        : " << cinema << endl;
            cout << "Nomor Kursi   : | ";
            for (i = 0; i < jmltiket; i++) {
                cout << nokursi[i] << " | ";
            }
            cout << endl;
            cout << "========================================" << endl;
        }else {
            system("clear");
            cout << "Jangan Lupa Cetak Tiket!!" << endl;
            goto cetak;
        }

    }else {
        system("clear");
        cout << "Sandi / Username Salah!!" << endl;
        goto login;
    }
} 