#include <bits/stdc++.h>
using namespace std ; 
// sinh tong cua mot so hang 
int n , ok , cnt,a[100] ; 
void ktao( ){
    cnt = 1 ; 
    a[1 ] = n ;
}
void sinh(){
    int i = cnt ;
    while(i >=  1 && a[i] ==1  ){
        --i ; 
    }
    if( i == 0 ){
        ok  =  0 ;
    }
    else {
        a[i] --; 
        int d = cnt-i+1 ; 
        cnt = i ;
        int r  = d/a[i] ; 
        int l = d%a[i] ; 
        if( d){
            for( int j = 1 ; j<= r ; j++ ){
                ++cnt ; 
                a[cnt] = a[i] ; 
            }
        }
        if(l != 0 ){
            ++cnt; a[cnt] = l ;
        }
    }
}
int main(){
    cin >> n ; 
    ktao() ; 
    ok  = 1  ;
    while( ok== 1 ){
        for( int i = 1; i <=  cnt ; i++ ){
            cout << a[i] << " " ;
        }
        cout << endl ; 
        sinh();
    }
}

