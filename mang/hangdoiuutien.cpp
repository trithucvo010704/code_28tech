#include<bits/stdc++.h>
#include<deque> 

using namespace std; 
// priority_queue ( dua vao giai thuat heap )
// hieu la hang doi da dc sap xep 
// o{1} ; 
// theo mac dinh la sap xep lon nhat
// pop : xoa ra ptu dau tien cua hang doi  
// top : lay ra ptu dau tien cua hang doi 
// cac thao tac khac giong cac cau truc du lieu khac 
// cach luu theo thu tu nho nhat 
// priority_queue <int,vector<int> ,greater<int  >> pq ; 
// bai tap noi day ngan nhat hoac dai naht
typedef priority_queue<int,vector<int> ,greater<int>> pp ;
using ll = long long  ; 
// bai tiep theo tinh gia tri nho nhat cua khi duoc giam k ky tu 

int main(){
    int  k ;cin >> k ; 
    string s ; cin >> s ; 
    map<char,int> mp ; 
    for( char x: s) {
        mp[x]++ ; 
    }
    priority_queue<int> pq ; 
    for( auto it : mp) pq.push( it.second) ;  // day tan suat xuat hien cua ky tu vao pq  
    ll ans  = 0 ; 
    while( k >0 ){
        int top = pq.top() ; 
        pq.pop() ; 
        --top  ; --k ; // giam tan suat cua ky tu xuat hien nhieu nhat  
        pq.push(max(top,0)) ;  
    }
    while( !pq.empty()){
        ans+= 1ll* pq.top() * pq.top() ; 
        pq.pop() ; 
    }
    cout << ans << endl;

    
}
