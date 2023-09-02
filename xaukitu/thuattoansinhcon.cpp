#include <bits/stdc++.h>
using namespace std ; 
// sinh xau con 
int n,k,a[100],ok ; 
void ktao(){
    for( int i = 1; i<= k ; i++){
        a[i] = i ; // khoi tao cau hinh dau tien 
    }
}
void sinh( ){
        int i = k ;
    while( i>= 1 && a[i] == n-k +i ){
        --i ; 
    }
    if( i == 0 ){
        ok = 0 ;// tim ra duoc bit cuoi cung 
    }
    else {
        a[i]++ ; 
        for( int j = i+1 ; j<= k ; j++){
            a[j] = a[j-1]  +1 ;
        }
    }
}
int main(){
    cin >> n >>  k ;
    ktao() ; 
    ok = 1; 
    while( ok ==1 ){
        for( int i = 1; i<= k ;i++){
            cout << a[i] ; 
        }
        cout << endl ; 
        sinh() ; 
    }
}
