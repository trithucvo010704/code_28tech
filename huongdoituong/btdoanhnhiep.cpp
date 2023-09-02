#include<bits/stdc++.h>
using namespace std; 
typedef long long ll ;
inline ll gcd ( ll a , ll b ) {ll r;while(b){r = a%b , a =b ;b= r ;}return a;}
inline ll lcm(ll a , ll b ) {return a/gcd(a,b) *b;}
// doanh nghiep di thuc tap 
class dn {
    private: 
        string ma , ten ; 
        int  sl ; 
    public: 
        dn(){} 
        dn(string ma , string ten , int sl){
            ma = this->ma ;ten = this->ten ;sl = this->sl ;
        } 
        void nhap(); 
        void xuat(); 
        int getsl(){
            return this->sl ;
        }
}; 
void dn::nhap(){
    cin >> ma  ; 
    cin.ignore() ; 
    getline( cin,ten) ; 
    cin>> sl ; 
}
void dn::xuat(){
    cout << ma << " " <<ten << " " <<sl<<endl  ; 
}
bool cmp( dn a, dn b ){
    return a.getsl() > b.getsl() ; 
}
int main( ){
    int n ; cin >> n ; 
    dn a[n] ; 
    for( int i = 0 ; i< n ;i++){
        a[i].nhap() ;
    }
    sort( a,a+n,cmp ) ; 
    for( dn x: a )  x.xuat() ; 
}