#include <bits/stdc++.h>
using namespace std;
int main( ){
    string s ; 
    getline( cin ,s) ; 
    string s1 ;  cin >> s1 ; // tu can xoa 
    // tach tu va day vo mot vecto 
    stringstream ss (s);
    string token ; 
    vector<string> a ; 
    while( ss>> token ){
        if( token != s1 ){
            a.push_back( token );
        }
    }
    for( int i=0; i<a.size(); i++ ){
        cout << a[i]  ; 
        if( i != a.size()-1 ){
            cout <<" " ;
        }
    } 

}
