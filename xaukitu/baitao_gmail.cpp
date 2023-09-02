#include <bits/stdc++.h>
using namespace std;
int  main(){
    int t; cin >> t  ;
    cin.ignore();
    map<string ,int > mp ; 
    while( t--){
        string s ; 
        getline(cin, s); 
        for(int  i = 0; i <s.length(); i++){
            s[i] = tolower(s[i]); 
        }
        vector<string> a ; 
        stringstream ss (s) ;
        string s1  ;
        string res = " " ;  
        while( ss>> s1 ){
            a.push_back(s1); 
        }
        res+= a[a.size()-1];

        for( int i = 0 ; i < a.size() -1; i++ ) {
            res +=  a[i][0] ;  
        }
        if( mp[res] == 0 ){
            cout << res << "@gamil.com " <<endl ;
        }
        else {
            cout << res << mp[res] +1  <<"@gmail.com" <<endl;
        }
        mp[res]++;
    }
}