#include <iostream>
using namespace std;

int film,jam,kursi,jmltiket,hargatiket = 70000,bayar,total,kembalian,mami,hargamenu,totalmenu; //mami = makan minum
char ulang = 't',tambahan = 'y',cetak = 'y';
string cinema;
int cocacola = 25000;
int pepsi = 25000;
int tea = 20000;
int saltpopcorn = 35000;
int caramelpopcorn = 43000;
int honeybutterpopcorn = 55000;
int airmineral = 15000;
string username,password;
int main(){

    login :
    cout << "==== Selamat Datang Di Aplikasi Kasir Bioskop ===="<<endl;
    cout << "Username : ";
    cin >> username;
    cout << "Password :";
    cin >> password;

    if(username == "kasir" && password == "kasir123"){
    do{
    menu : 
    cout << "======== Pilih Film  ========"<<endl;
    cout << "1.Pamali : Dusun pocong"<<endl;
    cout << "2.Di Ambang Kematian"<<endl;
    cout << "3.Kisah Tanah Jawa : Pocong Gundul"<<endl;
    cout << "4.Sijjin"<<endl;
    cout << "5.Perjamuan Iblis"<<endl;
    cout << "6.Saranjana"<<endl;
    cout << "============================="<<endl;

    cout << "Silahkan Pilih Film : ";
    cin >> film;

    if(film == 1 || film ==  4 ){
    cout << "==== Pilih Jam Tayang  ======"<<endl;
    cout << "1.10.20 WIB"<<endl;
    cout << "2.14.10 WIB"<<endl;
    cout << "3.16.30 WIB"<<endl;
    cout << "4.18.10 WIB"<<endl;
    cout << "5.19.40 WIB"<<endl;
    cout << "============================="<<endl;
    }else if(film == 2 || film ==  6 ){
    cout << "==== Pilih Jam Tayang  ======"<<endl;
    cout << "1.11.20 WIB"<<endl;
    cout << "2.15.10 WIB"<<endl;
    cout << "3.17.30 WIB"<<endl;
    cout << "4.19.10 WIB"<<endl;
    cout << "5.21.40 WIB"<<endl;
    cout << "============================="<<endl;
    }else if(film == 3 || film == 5 ){
    cout << "==== Pilih Jam Tayang  ======"<<endl;
    cout << "1.9.20 WIB"<<endl;
    cout << "2.12.10 WIB"<<endl;
    cout << "3.14.30 WIB"<<endl;
    cout << "4.16.10 WIB"<<endl;
    cout << "5.20.40 WIB"<<endl;
    cout << "============================="<<endl;
    }else{
        system("clear");
        cout << "Mohon Masukan Film Yang Ada !!"<<endl;
        goto menu;
        
    }

    if(film == 1){
        cinema = "Cinema 3";
    }else if(film == 2){
        cinema = "Cinema 5";
    }else if(film == 3){
        cinema = "Cinema 2";
    }else if(film == 4){
        cinema = "Cinema 4";
    }else if(film == 5){
        cinema = "Cinema 6";
    }else if(film == 6){
        cinema = "Cinema 1";
    }

    cout << "Silahkan Pilih Jam Tayang : ";
    cin >> jam;

    kursi :
    cout << "Pilih Nomor Kursi 1-50 : ";
    cin >> kursi;
    if(kursi < 1 || kursi > 50 ){
        system("clear");
        cout << "Pilih Nomor Kursi Yang Sesuai!!"<<endl;
        goto kursi;
    }
    
    cout << "Ingin Tambah Makanan / Minuman ? (y/t) : ";
    cin >> tambahan;

    system("clear");

    menu2 : 
    if(tambahan == 'y'){
            cout << "==========  Makanan & Minuman =========="<<endl;
            cout << " 1. 2 coca-cola & salt popcorn"<<endl;
            cout << " 2. 2 pepsi & salt popcorn"<<endl;
            cout << " 3. 2 tea & salt popcorn"<<endl;
            cout << " 4. 2 coca-cola & caremel popcorn"<<endl;
            cout << " 5. 2 pepsi & caremel popcorn"<<endl;
            cout << " 6. 2 tea & caremel popcorn"<<endl;
            cout << " 7. 2 coca-cola & honey butter popcorn"<<endl;
            cout << " 8. 2 pepsi & honey butter popcorn"<<endl;
            cout << " 9. 2 tea & honey butter popcorn"<<endl;
            cout << " 10. coca cola"<<endl;
            cout << " 11. pepsi"<<endl;
            cout << " 12. tea"<<endl;
            cout << " 13. air mineral"<<endl;
            cout << " 14. caramel popcorn"<<endl;
            cout << " 15. honey butter popcorn"<<endl;
            cout << " 16. salt popcorn"<<endl;
            cout << "========================================"<<endl;

            cout << "Masukan Pilihan : ";
            cin >> mami;

            if(mami == 1){
                hargamenu = (2*cocacola)+saltpopcorn ;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 2){
                hargamenu = (2*pepsi)+saltpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 3){
                hargamenu = (2*pepsi)+saltpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 4){
                hargamenu = (2*cocacola)+caramelpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 5){
                hargamenu = (2*pepsi)+caramelpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 6){
                hargamenu = (2*tea)+caramelpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 7){
                hargamenu = (2*cocacola)+honeybutterpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 8){
                hargamenu = (2*pepsi)+honeybutterpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 9){
                hargamenu = (2*tea)+honeybutterpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 10){
                totalmenu = cocacola;
            }else if(mami == 11){
                totalmenu = pepsi;
            }else if(mami == 12){
                totalmenu = tea;
            }else if(mami == 13){
                totalmenu = airmineral;
            }else if(mami == 14){
                totalmenu = caramelpopcorn;
            }else if(mami == 15){
                totalmenu = honeybutterpopcorn;
            }else if(mami == 16){
                totalmenu = saltpopcorn;
            }else{
                system("clear");
                cout << "Mohon Masukan Menu Yang ada!!"<<endl;
                goto menu2;
            }
    }
    system("clear");

    cout << "========================================"<<endl;  
    cout << "film     : "<<film<<endl;
    cout << "jam      : "<<jam<<endl;
    cout << "kursi    : "<<kursi<<endl;
    cout << "tambahan : "<<mami<<endl;
    cout << "========================================"<<endl; 
    cout << "Apakah Pilihan Sudah Sesuai ? (y/t) : ";
    cin >> ulang;

    system("clear");
    
    }while(ulang == 't');


    cout << "================== Pembayaran =================="<<endl;
    cout << "Harga Untuk 1 Kursi (1 kursi untuk 2 orang) : Rp."<<hargatiket<<endl;
    cout << "Masukan Jumlah Kursi Yang Dipesan : ";
    cin >> jmltiket;
    total = jmltiket * hargatiket + totalmenu ;
    cout << "Total Harga : Rp."<<total<<endl;
    cout << "Masukan Jumlah Uang Yang Dibayarkan : Rp.";
    cin >> bayar;
    kembalian = bayar - total;

    system("clear");

    cout << "================ Invoice ================"<<endl;
    cout << "Nama Film     : "<<film<<endl;
    cout << "Jam           : "<<jam<<endl;
    cout << "Nomor Kursi   : "<<kursi<<endl;
    cout << "Jumlah Ticket : "<<jmltiket<<endl;
    cout << "Total Harga   : Rp."<<total<<endl;
    cout << "Total Bayar   : Rp."<<bayar<<endl;
    cout << "Kembalian     : Rp."<<kembalian<<endl;
    cout << "========================================="<<endl;

    cetak :
    cout << "Klik (y) Untuk Cetak Tiket : ";
    cin >> cetak ;

    system("clear");

    if(cetak == 'y'){
    cout << "================ TIKET ================"<<endl;
    cout << "Nama Film     : "<<film<<endl;
    cout << "Jam           : "<<jam<<endl;
    cout << "Tempat        : "<<cinema<<endl;
    cout << "Nomor Kursi   : "<<kursi<<endl;
    cout << "Jumlah Ticket : "<<jmltiket<<endl;
    cout << "========================================"<<endl;        
    }else{ 
        system("clear");
        cout << "Jangan Lupa Cetak Tiket!!"<<endl;
        goto cetak;
    }
    
    }else{
        system("clear");
        cout << "Sandi / Username Salah!!"<<endl;
        goto login;
    }   
}
















