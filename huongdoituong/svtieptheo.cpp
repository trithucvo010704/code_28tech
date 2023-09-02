#include<bits/stdc++.h>
using namespace std; 
typedef long long ll ;
inline ll gcd ( ll a , ll b ) {ll r;while(b){r = a%b , a =b ;b= r ;}return a;}
inline ll lcm(ll a , ll b ) {return a/gcd(a,b) *b;}
int cnt = 0 ; 


string  chuanhoa( string s){
    vector<string> v ; 
    
    stringstream ss(s) ; 
    string token ,res = ""; 
    while( ss>>token ){
        res+=  toupper(token[0]);
        for( int i = 1 ; i<token.size() ; i++ ){
            res+= tolower(token[i]);
        }
        res+= " "; 
    }   
    res =res.erase(res.length()-1);
    return res ; 
}
class sv{
    private:
    string ma , ten , lop,ns; 
    float gpa  ;
    public : 
    float getgpa(){
        return this->gpa ; 
    }
    friend istream & operator >> (istream & in , sv &a){
        ++cnt; 
        string tam = to_string(cnt); 
        tam = string(3-tam.size(),'0') +tam ; 
        a.ma = "DHNCK17"+tam ; 
       
        getline( in,a.ten) ;
        in>> a.lop >>a.ns >>a.gpa ; 
        in.ignore();
        // chuan hoa ns 
        if(a.ns[2]!= '/') a.ns = "0"+ a.ns; 
        if(a.ns[5]!= '/') a.ns.insert(3,"0");  
        a.ten= chuanhoa(a.ten) ; 
        return in ;
    }
    friend ostream & operator << (ostream &out, sv a ){
        out << a.ma << " " <<a.ten<< " " <<a.lop<< " " <<a.ns <<" " <<a.gpa<<endl ;
        return out; 
    } 
    
};
bool cmp(sv a, sv b){
    return a.getgpa()>b.getgpa(); 
}
void sapxep(sv a[],int n ){
        sort( a,a+n,cmp );

}
// neu sap xep theo ma hay gì mình lấy mã ra 
int main(){
    int n ; cin >>n ; sv a[n] ;
    cin.ignore();
    for( int i = 0 ; i < n ; i++ ){
        cin >> a[i] ;
    }
    sapxep(a,n) ;
    for( sv x : a ){
        cout << x ; 
    }
}