#include<bits/stdc++.h>
using namespace std;

int main(){
    int q ; 
    cin >>q ; 
    cin.ignore();
    while( q--){
        string s  ; 
        cin >>s ; 
        map<char ,int >  mp ; 
        for ( char x: s){
            mp[x] ++ ; 
        }
        char res ;   int fre = 0 ; 
        for(  auto it: mp){
            if( it.second > fre ){
                fre = it.second ;
                res  = it.first ;
            }
        }
        cout << res ; 
    }
}