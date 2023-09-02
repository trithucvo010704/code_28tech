#include<bits/stdc++.h>
using namespace std;
typedef  long long  ll  ;

// and & 
// or | 
// xor ^
// not ~ 
// toan tu dich trai << (them mot bit 0 vao sau so bat ki ) nhan voi 2^x 
// toan tu dich phai >> (them mot bit 0  vao truoc ) chia voi 2^x 
int pow1( int a, int b ){
    int res =  1 ; 
    while( b)
    {
        if( b & 1){
            res*= a ; 
        }
        a *= a ; 
        b >>= 1 ;
    }
    return res ; 
}
// ham modul 
int pow2( int a, int b , int m ){
    int res = 1 ; 
    while( b){
        if( b & 1){
            res*= a ; 
            res%= m ; 
        }
        a*= a ; 
        a%= m ; 
        b>>=1 ; 
    }
}
// dang nhi phan cua 2^k chi co bit thu k la 1 
int main(){
//     int a  =17 ; 
//     // viet dang nhi phan cua a ; 
//     for( int i = 31  ; i>=0 ; i-- ){
//         if( a& (1<<i ) )cout << "1" ; // ham kiem tra xem neu a ma AND voi so cuoi cung cua bit bang 1 thi in ra so 1     }
//         else cout << "0" ; //
//     }


        int a[] = {3,5,8,1} ; 
        for( int i = 0 ; i< (1<<4) ; i++ ){
            cout << "{ " ;
            for( int j = 0 ; j<4;j++){
                // ktra xem tai i thi co bit 1 duoc bat len voi moi so j  hay  k 
                if( i & (1<<j)) cout<< a[j]<< " "; 
            } 
            cout << "}" <<endl ;
        }
}


