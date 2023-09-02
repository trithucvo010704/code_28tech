#include<bits/stdc++.h>
using namespace std; 
typedef long long  ll ; 
inline ll gcd(ll a,ll b){ ll r ; while(b){ r = a% b ; a= b ; b =r ;  } return a  ; } // ham tinh UCLN 
inline ll lcm(ll a,ll b){ return a/gcd(a,b) * b ; } // ham tinh BCNN 
#define pb push_back 
#define fi first 
#define se second
#define mp make_pair 
#define all(a) a.begin(), a.end() ;

// sap xep nguoi theo do tuoi 

struct person{
    string ns, name ; 
};
bool cmp(person a, person b){
    string s = a.ns; string s1 = b.ns; // luu ngay sinh dc chuan hoa 
    int n1= ('s[0]' -'0')*10 + (s[1]-'0' );// luu tong ngay thang nam sinh 
    int t1 = (s[3] -'0')*10 + (s[4]-'0' );
    int na1 = stoi(s.substr(6)) ;   
    int n2= ('s1[0]' -'0')*10 + (s1[1]-'0' );
    int t2 = (s1[3] -'0')*10 + (s1[4]-'0' );
    int na2 = stoi(s1.substr(6)) ;   
    if( na1!= na2) return n1<n2 ;
    if(t1!= t2) return t1<t2 ; 
    return n1<n2; 

}
int main(){
    int n ; cin >> n ; 
    person a[n] ; 
    for( int i = 0 ; i< n ; i++){
        cin >>a[i].ns >> a[i] .name ; 
    }
    sort( a,a+n,cmp) ; 
    cout << a[n-1].name <<" " <<a[0].name <<endl ; 
}