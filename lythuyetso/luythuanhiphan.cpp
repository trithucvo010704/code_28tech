#include<bits/stdc++.h>
using namespace std;
long long  pow_1( int a , int b ){
    long long res  =1  ; 
    while ( b!=0 ){
        if( b%2 == 1){
            res *= a ; 
        }
        b /= 2 ;
        a*= 2 ; 
    }
    return res; 
} 
long long pow_2( int a , int b ){
    if( b==0 ){
        return 1 ; 
    }
    long long x = pow_2( a,b/2 ) ; 
    if( b%2 == 1){
        return x*x*a ; 
    }
    else return x*x ;
}
int main(){
    int n;
    cout << pow_2(2,6) <<endl; 
}
