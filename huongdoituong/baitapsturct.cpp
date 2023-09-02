#include<bits/stdc++.h>
#include<iostream>
using namespace std; 

typedef long long  ll   ;
inline ll gcd(ll a ,ll b ){
    ll r ;while( b){
        r = a% b ; 
        a=b ; 
        b = r ; 
    }
    return a ;
}
inline ll lcm( ll a ,ll b ){
    return a/gcd(a,b) * b  ;
}
struct phanso 
{
    int tu,mau ; 
};
void nhap( phanso &a){
    cin>>a.tu>>a.mau;
}
void in( phanso a){
    cout << a.tu<<" / "<<  a.mau <<endl;
}
void rutgon(phanso &a ){
    ll l = gcd(a.tu,a.mau);
    a.tu /= l ;
    a.mau /= l ;
} 
phanso tong( phanso a, phanso b){
    ll mc = lcm(a.mau , b.mau) ; 
    a.tu = mc/a.mau * a.tu ; 
    b.tu = mc/b.mau * b.tu ; 
    a.tu+= b.tu ; 
    a.mau = mc; 
    rutgon(a) ; 
}
int main( ){
    phanso a ; 
    nhap( a) ; 
    rutgon( a) ; 
    in(a) ; 
}

