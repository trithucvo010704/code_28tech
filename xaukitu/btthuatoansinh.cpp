#include <bits/stdc++.h>
using namespace std ; 
typedef long long ll ; 
void hien( string s ){
    int i = s.length() -1;
    while( i>= 0  && s[i] == '1'){
        s[i] = '0';
        --i ; 
    }
    if( i!= -1){
        s[i] = '1' ; 
    }
    cout << s<<endl ;
}
// day la sinh ra chuoi bit nhi phan ke tiep 
int n , k ,a[1005] ; 

void hien2(){
    int i = k ;
    while( i>=  1 && a[i] ==n-k+i) --i ; 
    if( i== 0 ){
        for( int i = 1 ; i<=k ; i++ ){
            cout <<i<<" " ;
        }
        cout << endl ;
    }
    else {
        a[i]++ ;
        for( int j = i+1 ; j<=k ; j++ ){
            a[j] = a[j-1] +1 ;
        }
        for(int i =1 ; i<=k ; i++ ){
            cout << a[i] <<" " ; 
        }
        cout <<endl;
    }
}
int main(){
    int t ; cin >> t;
    while(t--){
       cin >> n>>  k ;
       for( int i = 1 ; i<=k ; i++ )cin >> a[i] ;
       hien2() ; 
    }
}