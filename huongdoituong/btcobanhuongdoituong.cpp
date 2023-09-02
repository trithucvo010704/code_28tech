// bai tap co ban huong doi tuong 
#include<bits/stdc++.h>
using namespace std; 
typedef long long ll ;
inline ll gcd ( ll a , ll b ) {ll r;while(b){r = a%b , a =b ;b= r ;}return a;}
inline ll lcm(ll a , ll b ) {return a/gcd(a,b) *b;}
class phanso{
    private: 
        ll tu, mau ; 
    public: 
        phanso(){} ;
        phanso( ll tu, ll mau) {
            tu =  this->tu; mau = this->mau ; 
        }
        // nap chong toan tu cin 
        friend istream& operator >> ( istream& in , phanso &a ){
            in >> a.tu >> a.mau ; 
            return in; 
        } 
        friend ostream& operator << ( ostream& out , phanso a ){
            out << a.tu<< " / "<<a.mau  ;
            return out ; 
        }
        // ham xu rut gon  
        void rutgon(){
            ll g = gcd( this->tu, this->mau) ; 
            this->tu = this->tu / g ; 
            this ->mau = this->mau / g;
        }
        friend phanso operator + ( phanso &a ,phanso &b){
            phanso z ; 
            ll mc = lcm(a.mau, b.mau) ;
            z.tu = mc/a.mau * a.tu + mc / b.mau*b.tu ; 
            z.mau = mc ;  
            // rut gon tu mau cua z 
            ll g = gcd(z.tu, z.mau) ; 
            z.tu /= g ;
            z.mau /= g; 
            return z ; 
        }


};
int main(){
    phanso a ,b;
    cin>> a >>b ; 
    
    cout << a+b ; 
}
