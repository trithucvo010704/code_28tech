#include <bits/stdc++.h>
using namespace std ; 
typedef long long ll ; 
int n ,a[100] ,cnt,ok; // ok la bien de check 
void ktao(){
    cnt =  1 ; 
    a[1] = n ; 
}
void sinh(){
    int i = cnt; 
    while( i>=  1 && a[i ] ==1 ){
        --i ; 
    }
    if( i == 0 ){
        ok  = 0; 
    }
    else {
        int d  = cnt-i+1 ; 
        a[i]-- ;
        cnt = i ;
        int  l = d/a[i] ; 
        int r = d%a[i] ;
        if( l){
            for( int j =1  ; j<= l ; j++ ){
                ++cnt; 
                a[cnt] =a[i] ; 
            }
        } 
        if( r){
            ++cnt ;
            a[cnt ] = r ;
        }

    }
}
int main(){
    int t ; cin >> t; 
    while( t--){
        cin >> n ; 
        ok  = 1 ; 
        ktao() ; 
        while( ok){
            cout << "( " ; 
            for( int i =1 ; i<=  cnt ; i++ ){
                cout << a[i]  ; 
                if( i == cnt ) cout << ") " ; 
                else cout << " " ; 
            }
            sinh() ; 
        }
    }
}