#include<bits/stdc++.h>
#include<iostream>
using namespace std; 

typedef long long  ll ; 
inline ll gcd(ll a,ll b){ ll r ; while(b){ r = a% b ; a= b ; b =r ;  } return a  ; } // ham tinh UCLN 
inline ll lcm(ll a,ll b){ return a/gcd(a,b) * b ; } // ham tinh BCNN 
struct sinhvien{
      string ma ; 
      string ten,lop,ns,gpa ; 
};
void nhap( sinhvien &a){
    cin.ignore();
    getline(cin,a.ten ) ; 
    cin>>a.lop ; 
    cin>>a.ns ; 
    cin>>a.gpa ; 
    a.ma= "KJFNASJNF" ; 
      string tmp = "" ; 
      if( a.ns[1] == '/') {
            a.ns = "0" + a.ns; 
      }
      if(a.ns[4] == '/'){
            a.ns.insert(3,"0") ; 
      }

}
void in( sinhvien a){
      cout <<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" " <<fixed <<setprecision(2)<<a.gpa<<endl ; 
}
int main(){
      struct sinhvien a; 
      nhap(a);
      in(a) ;
}