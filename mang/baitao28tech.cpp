#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout <<"\n nhap so luong phan tu cua mang : " ;
    cin >> n ; 
    set <int> s ; 
    for( int i = 0 ; i< n ; i++){
        int x ; 
        cin >> x  ; 
        s.insert(x) ; 
    }
    int q ; 
    cin >> q ; 
    while (q--){
        int k ;
        cin >> k ;
        if( s.count(k) == 1){
            cout <<"\n Yes"<<endl; 
        }
        else cout <<"\n No"<<endl;
    }
}