#include<bits/stdc++.h>
using namespace std;

// class thuoc tinh thi private con ham thuong public
// co the gan cho mot class 
// ham constructor ( co the co tham so hoac k co tham so ) 
// ham huy duoc th sau khi gooi den mot cai cclass 
// co the gan thong tin cho mot class khac 
// setter lay ra thuoc tinh getter gan thuoc tinh 
// friend function , friend class ; 
// friend function  : ham co the lay thuoc tinh thuonc ojbect trong mot class   
// friend class co the lay dc cac thuoc tinh private cua class da dc tao truoc do 

// example 
class person {

    private: 
        string name ; 
        int tuoi ; 
        static int dem ; // bem cho ca class 
    public:
    person(){

    }// constructor k co doi so truyen vao 
    person(string ten , int age ){
        ten = this->name;
        age = this->tuoi;

    }//construct  co doi so truyen v
    void input(){
        cout << "\n nhap ten nguoi  : " ; 
        cin.ignore();
        getline( cin,this->name) ; 
        cout << "\n nhap tuoi : " ; 
        cin >> this->tuoi ; 
    }
    void uotput(){
        cout << "ten : " <<this->name <<"tuoi : "<<this->tuoi <<endl ;
    }
    int gettuoi();
    friend void inthongtin( person); 
    int getdem(){
        return this->dem;
    }
    // ham chuan hoa ten 
    friend void chuanhoa( person &) ; 
    ~person() ;// ham huy 

};
void chuanhoa( person &a ){
    string res = "" ;
    stringstream ss(a.name) ; 
    string token ; 
    while( ss>>token ) {
        res += toupper(token[0]) ;  // in hoa thang chu cai dau tien 
        for( int i=1 ; i<token.length();i++){
            res+= tolower(token[i]) ;
        }
        res+= " " ; 

    }
    res = res.erase(res.length()-1) ; 
    a.name = res ; 
}
// co the viet ham ngoai 
int person::gettuoi(){
    return this->tuoi ; 
}
void inthongtin( person a){
    cout << a.name << " "<< a.tuoi <<endl ;
}
int person::dem = 0 ;
person::~person()
{
}
bool cmp(person a, person b)
{
    return a.gettuoi() <b.gettuoi() ;
}
int main(){
    person a[100] ; 
    int n ; cin >> n ; 
    for( int i = 0 ; i< n ; i++){
        a[i].input() ; 
    }
    sort( a,a+n , cmp) ; 
    for( int i = 0 ; i< n ; i++){
        a[i].uotput();
    }
}