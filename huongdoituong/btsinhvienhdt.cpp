#include<bits/stdc++.h>
using namespace std; 
typedef long long ll ;
inline ll gcd ( ll a , ll b ) {ll r;while(b){r = a%b , a =b ;b= r ;}return a;}
inline ll lcm(ll a , ll b ) {return a/gcd(a,b) *b;}

class sv{
    private: 
        string ma , ten ,lop,ns; 
        float gpa ; 
    public: 
        sv(){} ; 
        sv(string ma, string ten, string lop, string ns, float gpa){
            ma = "D20BCCN001";
            ten = this->ten ;
            lop = this->lop ;
            ns = this->ns ;
            gpa = this->gpa ;    
        }
        friend void nhap(sv &a){
            a.ma = "D20BCCN001";
            cout << "\n Nhap ten :" ;getline(cin,a.ten) ; 
            cout <<"\n Nhap lop : " ;getline(cin,a.lop) ;
            cout << "\n  nhap ns :" ; cin>>a.ns ;
            cout <<"\n GPA : " ;cin>>a.gpa; 
            if(a.ns[2] != '/' ) a.ns = "0" +a.ns;
            if(a.ns[5] != '/') a.ns.insert(3,"0") ;   
        }
        friend void xuat ( sv a){
            cout << a.ma <<" "<<a.ten <<" "<<a.ns <<" "<<a.lop <<" " <<a.gpa << endl ; 
        } 
        friend istream &operator >> (istream & in , sv &a){
            cout <<"\n nhap ma : " ; in >>a.ma; in.ignore();
            cout << "\n Nhap ten :" ;getline(in,a.ten) ; 
            cout <<"\n Nhap lop : " ;getline(in,a.lop) ;
            cout << "\n  nhap ns :" ; in>>a.ns ;
            cout <<"\n GPA : " ;in>>a.gpa; 
            if(a.ns[2] != '/' ) a.ns = "0" +a.ns;
            if(a.ns[5] != '/') a.ns.insert(3,"0") ;
            return in ;  
        }
        friend ostream & operator <<(ostream &out , sv a ){
            out << a.ma <<" "<<a.ten <<" "<<a.ns <<" "<<a.lop <<" " <<a.gpa << endl ;
            return out  ;  
        }
        string getlop(){
            return this->lop;
        }
        string getma(){
            return this->ma;
        }
}; 

#define a() a
// liet ke sinh vien theo nganh
// y tuong se tach 2 chu dau cua nganh can 
// duyet trau qua map de xem co thay thang ke toan k va in ra 
void viethoa ( string &s ){
    for( char &x: s)  x = toupper(x) ;
}
string  chuanhoa(string s ){
    vector<string> v;
    viethoa(s); 
    stringstream ss(s);
    string token,res="" ; 
    while( ss>>token ){
        v.push_back(token) ; 
    }
    for( int i = 0 ;i< 2 ; i++){
        res+= v[i][0]; 
    }
    return res ; // lay ra hai chu cai dau tien 
}
int main(){
   int n ; cin >> n ; 
  
   sv a[n] ; 
   map<string,vector<sv>> mp ; 
   for( int i = 0 ; i<  n ; i++ ){
    sv x ;cin >> x ;
    // bo ten lop vao string va cac thanh vien cua lop vector cac sinh vien ;
    mp[x.getma().substr()].push_back(x); // nhiem vu cho cung vao mot lop 
   }
   string s ;cout << "\n nhap lop can truy xuat den " ;  cin >> s ;
   cout <<" \n DS cua lop "<<s<<endl;
   for( sv a: mp[s]) cout << a  ;// dung for each de in ra cac ban co trong ten lop lop s  
   
}