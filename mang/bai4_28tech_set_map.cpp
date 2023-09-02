#include<bits/stdc++.h>
using namespace std;

int main(){
    int q ; 
    cin >>q ; 
    while (q--){
        int n ; 
        cin >> n ; 
        map <long long , int > mp ; 
        for( int i = 0 ; i< n ; i++ ){
            int x  ;
            cin  >>x  ; 
            mp[x]++; 
        }
        long long  res ,fre =  0; 
        for( auto it: mp ){
            if( it.second > fre ){
                fre = it.second;
                res = it.first;
            }
        }
        cout <<res   <<" " << fre ; 


    }
}