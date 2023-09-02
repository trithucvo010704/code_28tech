#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
const int MOD = (int) 1e9 +7 ; 

inline ll gcd( ll a, ll b ){ll r ; while(b){r = a % b ; a= b ; b =r ;} return a ;} 
int x ,  y ,  d  ;

void ocolit_rong (int a, int b){
    if( b== 0 ){
        d =a ; // uoc chuong lon nhat 
        x= 1 ;
        y = 0 ; 
    }
    else {
        ocolit_rong( b, a% b ) ;
        int tmp = x ;//x1
        x = y ;//y1; 
        y = tmp - a / b * y ;
    }
}
// vis du 55 80 
// co UCLN la 5 
// co pt UCLN la 55x + 80 y =  5 ;
// tim x va y sao cho x  = 3 va y   = -2 ;
int main(){
    int a = 55; int b = 80; 
    ocolit_rong( a,b) ;
    cout <<"\n UCLN   " << d <<endl ;
    cout << x <<" " << y <<endl ;
}