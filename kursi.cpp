#include <iostream>
using namespace std;

int main(){
    int i,n ;
    cout << "Jumlah Ticket Yang akan Dibeli : ";
    cin >> n;
    int ticket[n];
    cout << "Pilih 1 - 150"<<endl;
    for(int i = 0; i < n; i++)
    {
       
        cout << "Kusi ke "<<i+1<<" : ";
        cin >> ticket[i];
    }
    system("clear");
    for(i = 0; i < n ; i++ ){
        cout << "Kursi ke "<<i+1<<" nomor : "<<ticket[i]<<endl;
    }
    

}