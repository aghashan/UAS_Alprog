#include <iostream>
using namespace std;

int film,jam,bayar,total,kembalian,mami,hargamenu,totalmenu,i,jmltiket; //mami = makan minum
char ulang,tambahan,cetak ; //menggunkan char karena yang dimasukan berupa karakter tunggal
string cinema, username,password; //menggunakan string karena yang dimasukan yang dimasukan berupa teks 
int hargatiket = 35000;//menggukan int karena yang dimasukan berupa angka 
int cocacola = 25000;//menggukan int karena yang dimasukan berupa angka 
int pepsi = 25000;//menggukan int karena yang dimasukan berupa angka 
int tea = 20000;//menggukan int karena yang dimasukan berupa angka 
int saltpopcorn = 35000;//menggukan int karena yang dimasukan berupa angka 
int caramelpopcorn = 43000;//menggukan int karena yang dimasukan berupa angka 
int honeybutterpopcorn = 55000;//menggukan int karena yang dimasukan berupa angka 
int airmineral = 15000;//menggukan int karena yang dimasukan berupa angka 

int main(){

    login: //mendefisikan nama menu
    cout << "==== Selamat Datang di Aplikasi Kasir Bioskop ==== "<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
    cout << "Username : ";
    cin >> username;//untuk mengisi variabel
    cout << "Password : ";
    cin >> password;//untuk mengisi variabel
    
    system("clear");//melakukan clear / cls pada cmd / terminal (cls digunakan untuk windows)

    if(username == "kasir" && password == "kasir123"){//mengecek apakah username / password yang dimasukan benar / tidak
        menu: 
        cout << "======== Pilih Film  ========"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "1.Pamali : Dusun pocong"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "2.Di Ambang Kematian"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "3.Kisah Tanah Jawa : Pocong Gundul"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "4.Sijjin"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "5.Perjamuan Iblis"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "6.Saranjana"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "============================="<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya

        cout << "Silahkan Pilih Film : ";
        cin >> film;//untuk mengisi variabel

        if(film == 1 || film == 4 ){//mengecek masukan dengan 2 params  ( || adalah operator pembanding or ) 
        cout << "==== Pilih Jam Tayang  ======"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "1.10.20 WIB"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "2.14.10 WIB"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "3.16.30 WIB"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "4.18.10 WIB"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "5.19.40 WIB"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "============================="<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya            
        }else if(film == 2 || film == 6){//mengecek masukan dengan 2 params  ( || adalah operator pembanding or ) 
        cout << "==== Pilih Jam Tayang  ======"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "1.11.20 WIB"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "2.15.10 WIB"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "3.17.30 WIB"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "4.19.10 WIB"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "5.21.40 WIB"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "============================="<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        }else if(film == 3 || film == 5 ){//mengecek masukan dengan 2 params  ( || adalah operator pembanding or ) 
        cout << "==== Pilih Jam Tayang  ======"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "1.9.20 WIB"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "2.12.10 WIB"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "3.14.30 WIB"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "4.16.10 WIB"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "5.20.40 WIB"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "============================="<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        }else{
            system("clear");//melakukan clear / cls pada cmd / terminal (cls digunakan untuk windows)
            cout << "Mohon Masukan Film Yang Ada!!"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            goto menu;//mengarahkkan progam ke nama menu yang dituju
        }

        if(film == 1){//untuk menegecek nilai variabel
            cinema = "Cinema 3";
        }else if(film == 3){//untuk menegecek nilai variabel
            cinema = "Cinema 5";
        }else if(film == 6){//untuk menegecek nilai variabel
            cinema = "Cinema 4";
        }else if(film == 4){//untuk menegecek nilai variabel
            cinema = "Cinema 2";
        }else if(film == 2){//untuk menegecek nilai variabel
            cinema = "Cinema 1";
        }else if(film == 5){//untuk menegecek nilai variabel
            cinema = "Cinema 6";
        }

        cout << "Silahkan Pilih Jam Tayang : ";
        cin >> jam;//untuk mengisi variabel

        cout << "Jumlah Tiket Yang Dibeli : ";
        cin >> jmltiket;//untuk mengisi variabel

        cout << "== Pilih 1 - 150 =="<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        int nokursi[jmltiket];//jmltiket dapat diganti dengan angka bebas karena sebagian compiler meminta agar trdpt nilai pada variabel yang berbentuk array
        for(i = 0; i<jmltiket ; i++){
            cout << "Kursi ke "<<i+1<<" : ";
            cin >> nokursi[i];//untuk mengisi variabel
        }

        cout << "Ingin Tambah Makanan / Minuman ? ( y / t ) : ";
        cin >> tambahan;//untuk mengisi variabel

        system("clear");//melakukan clear / cls pada cmd / terminal (cls digunakan untuk windows)

        menu2 : 
        if(tambahan == 'y'){//untuk menegecek nilai variabel
            cout << "==========  Makanan & Minuman =========="<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 1. 2 coca-cola & salt popcorn"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 2. 2 pepsi & salt popcorn"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 3. 2 tea & salt popcorn"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 4. 2 coca-cola & caremel popcorn"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 5. 2 pepsi & caremel popcorn"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 6. 2 tea & caremel popcorn"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 7. 2 coca-cola & honey butter popcorn"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 8. 2 pepsi & honey butter popcorn"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 9. 2 tea & honey butter popcorn"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 10. coca cola"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 11. pepsi"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 12. tea"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 13. air mineral"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 14. caramel popcorn"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 15. honey butter popcorn"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << " 16. salt popcorn"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            cout << "========================================"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya

            cout << "Masukan Pilihan : ";
            cin >> mami;//untuk mengisi variabel

            if(mami == 1){//untuk menegecek nilai variabel
                hargamenu = (2*cocacola)+saltpopcorn ;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 2){//untuk menegecek nilai variabel
                hargamenu = (2*pepsi)+saltpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 3){//untuk menegecek nilai variabel
                hargamenu = (2*pepsi)+saltpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 4){//untuk menegecek nilai variabel
                hargamenu = (2*cocacola)+caramelpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 5){//untuk menegecek nilai variabel
                hargamenu = (2*pepsi)+caramelpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 6){//untuk menegecek nilai variabel
                hargamenu = (2*tea)+caramelpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 7){//untuk menegecek nilai variabel
                hargamenu = (2*cocacola)+honeybutterpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 8){//untuk menegecek nilai variabel
                hargamenu = (2*pepsi)+honeybutterpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 9){//untuk menegecek nilai variabel
                hargamenu = (2*tea)+honeybutterpopcorn;
                totalmenu = hargamenu - (0.20*hargamenu);
            }else if(mami == 10){//untuk menegecek nilai variabel
                hargamenu = (cocacola)+honeybutterpopcorn;
                totalmenu = hargamenu - (0.05*hargamenu);
            }else if(mami == 11){//untuk menegecek nilai variabel
                hargamenu = (pepsi)+honeybutterpopcorn;
                totalmenu = hargamenu - (0.05*hargamenu);
            }else if(mami == 12){//untuk menegecek nilai variabel
                hargamenu = (tea)+honeybutterpopcorn;
                totalmenu = hargamenu - (0.05*hargamenu);
            }else if(mami == 13){//untuk menegecek nilai variabel
                hargamenu = (cocacola)+saltpopcorn;
                totalmenu = hargamenu - (0.05*hargamenu);
            }else if(mami == 14){//untuk menegecek nilai variabel
                hargamenu = (pepsi)+saltpopcorn;
                totalmenu = hargamenu - (0.05*hargamenu);
            }else if(mami == 15){//untuk menegecek nilai variabel
                hargamenu = (tea)+saltpopcorn;
                totalmenu = hargamenu - (0.05*hargamenu);
            }else if(mami == 16){//untuk menegecek nilai variabel
                hargamenu = (cocacola)+caramelpopcorn;
                totalmenu = hargamenu - (0.05*hargamenu);
            }else if(mami == 17){//untuk menegecek nilai variabel
                hargamenu = (pepsi)+caramelpopcorn;
                totalmenu = hargamenu - (0.05*hargamenu);
            }else if(mami == 18){//untuk menegecek nilai variabel
                hargamenu = (tea)+caramelpopcorn;
                totalmenu = hargamenu - (0.05*hargamenu);
            }else if(mami == 19){//untuk menegecek nilai variabel
                totalmenu = cocacola;
            }else if(mami == 20){//untuk menegecek nilai variabel
                totalmenu = pepsi;
            }else if(mami == 21){//untuk menegecek nilai variabel
                totalmenu = tea;
            }else if(mami == 22){//untuk menegecek nilai variabel
                totalmenu = airmineral;
            }else if(mami == 23){//untuk menegecek nilai variabel
                totalmenu = caramelpopcorn;
            }else if(mami == 24){//untuk menegecek nilai variabel
                totalmenu = honeybutterpopcorn;
            }else if(mami == 25){//untuk menegecek nilai variabel
                totalmenu = saltpopcorn;
            }else{
                system("clear");//melakukan clear / cls pada cmd / terminal (cls digunakan untuk windows)
                cout << "Mohon Masukan ( y / t )!!"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
                goto menu2;//mengarahkkan progam ke nama menu yang dituju
            }
        }

        system("clear");//melakukan clear / cls pada cmd / terminal (cls digunakan untuk windows)

        cout << "========================================"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya  
        cout << "film         : "<<film<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "jam          : "<<jam<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "Jumlah Tiket : "<<jmltiket<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "Nomor Kursi  :| ";
        for(i = 0; i < jmltiket; i++){
            cout <<nokursi[i]<<" | ";
        }
        cout<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "tambahan     : "<<mami<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "========================================"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya 
        cout << "Apakah Pilihan Sudah Sesuai ? ( y / t ) : ";
        cin >> ulang;//untuk mengisi variabel
  
        if(ulang == 't'){
           system("clear");//melakukan clear / cls pada cmd / terminal (cls digunakan untuk windows)
           goto menu;//mengarahkkan progam ke nama menu yang dituju
        }
  
        system("clear");//melakukan clear / cls pada cmd / terminal (cls digunakan untuk windows)

        cout << "================== Pembayaran =================="<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        total = jmltiket * hargatiket + totalmenu ;
        cout << "Total Harga : Rp."<<total<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "Masukan Jumlah Uang Yang Dibayarkan : Rp.";
        cin >> bayar;//untuk mengisi variabel
        kembalian = bayar - total;

        system("clear");//melakukan clear / cls pada cmd / terminal (cls digunakan untuk windows)

        cout << "================ Invoice ================"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "Nama Film     : "<<film<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "Jam           : "<<jam<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "Jumlah Ticket : "<<jmltiket<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "Total Harga   : Rp."<<total<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "Total Bayar   : Rp."<<bayar<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "Kembalian     : Rp."<<kembalian<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "========================================="<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya

        cetak :
        cout << "Klik (y) Untuk Cetak Tiket : ";
        cin >> cetak;//untuk mengisi variabel
        
        system("clear");//melakukan clear / cls pada cmd / terminal (cls digunakan untuk windows)

        if(cetak == 'y'){//untuk menegecek nilai variabel
        cout << "================ TIKET ================"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "Nama Film     : "<<film<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "Jam           : "<<jam<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "Jumlah Ticket : "<<jmltiket<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "Tempat        : "<<cinema<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "Nomor Kursi   : | ";
        for(i = 0; i < jmltiket; i++){
            cout <<nokursi[i]<<" | ";
        }
        cout<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        cout << "========================================"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya        
        }else{ 
            system("clear");//melakukan clear / cls pada cmd / terminal (cls digunakan untuk windows)
            cout << "Jangan Lupa Cetak Tiket!!"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
            goto cetak;//mengarahkkan progam ke nama menu yang dituju
        }
    }else{
        system("clear");//melakukan clear / cls pada cmd / terminal (cls digunakan untuk windows)
        cout << "Sandi / Username Salah!!"<<endl;//endl digunakan agar code yang berjalan selanjutnya berada dibawahnya
        goto login;//mengarahkkan progam ke nama menu yang dituju
    } 
}