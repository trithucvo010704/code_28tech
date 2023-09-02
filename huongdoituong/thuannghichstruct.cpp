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
bool check( string s ){
    if(s.size()<2) return false ; 
    string t = s ; 
    reverse (s.begin(),s.end()) ; 
    return s==t ; 
}
bool cmp(pair<string,int> p1,pair<string,int> p2){
    return ( p1.fi.size()!= p2.fi.size() ? p1.fi.size() > p2.fi.size() : p1>p2 ); 
}
int main() {
    map<string,int > mp ;
    string s; 
    while( cin>> s){
        if(check( s )){
            mp[s]++; 
        }
    }
    vector<pair<string,int>> v ; 
    for(auto it :mp ){
        v.pb(it); 
    }
    sort(v.begin() ,v.end() ,cmp);
    for( auto it :v ){
        cout << it.first << " " << it.second<<endl;
    }
}