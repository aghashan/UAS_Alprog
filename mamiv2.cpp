#include <iostream>
//https://oimt.ac.in/
using namespace std;

int film,jam,bayar,total,kembalian,mami,hargamenu,totalmenu,i,jmltiket; //mami = makan minum
char ulang,tambahan,cetak ;
string cinema, username,password;
int hargatiket = 35000;
int cocacola = 25000;
int pepsi = 25000;
int tea = 20000;
int saltpopcorn = 35000;
int caramelpopcorn = 43000;
int honeybutterpopcorn = 55000;
int airmineral = 15000;
int mami2,

int main(){
    cout << "Masukan Pilihan : ";
            cin >> mami;

            menu3:
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
                cout << "Mohon Masukan ( y / t )!!"<<endl;
                goto menu2;
            }
            
            
        }
