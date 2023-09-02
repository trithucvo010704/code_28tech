#include <bits/stdc++.h>
using namespace std;
void  viethoa( string &s ){
    for( int i = 0; i < s.size(); i++ ){
        s[i] = toupper( s[i] );
    }
}
void viethoa2( string &s ){ // chi de viet hoa chu cai dau tien 
    s[0] = toupper( s[0] );
        for( int i = 1; i < s.size(); i++ ){
            s[i] = towlower( s[i] );
        }
    
}
int main(){
    int t ; cin >> t;
    cin.ignore();
    while( t-- ){
        string s ;
        getline(cin, s);
        for( int i=0 ; i<s.length() ; i++ ){
            s[i] = tolower(s[i]);
        }
        vector<string> a ; 
        stringstream ss(s) ;
        string token ;
        // dau tien se viet thuong het cac tu 
        
        while( ss >> token){
            a.push_back(token); 
        }
        // tach tu xong se viet chu cai dau tien in hoa 
        for( int i=0 ; i<a.size() ; i++){
            a[i][0] = toupper(a[i][0]);
        }
        for( string x : a ){
            cout << x <<" " ;
        }
        cout << endl;
    }
}