#include <iostream>
using namespace std;

const int max_elemen = 255;
struct Stack{
    char isi[max_elemen];
    int TOP;
};
Stack S;

void push(Stack& S,char elemen_baru){
    if(S.TOP == max_elemen-1){
        cout<<"Tumpukan Sudah Penuh "<<endl;
    }
    else{
        S.TOP = S.TOP + 1;
        S.isi[S.TOP] = elemen_baru;
    }
}

void pop(Stack& S,char& elemen_hsl){
    if(S.TOP<0){
        cout<<"Tumpukan Sudah Kosong "<<endl;
    }
    else{
        elemen_hsl=S.isi[S.TOP];
        S.TOP = S.TOP - 1;
    }
}

int main()
{
    char ambil,huruf;
    int n;
    S.TOP = -1;
    cout<<"Banyak Huruf: ";cin>>n;
    for (int i=0;i<n;i++){
        cout<<"Huruf: ";cin>>huruf;
        push(S,huruf);
    }

    cout<<"\nReverse Word: \n";
    while(S.TOP>=0){
        cout<<S.TOP[S.isi];
        pop(S,ambil);
    }
    return 0;
}
