#include<bits/stdc++.h>
using namespace std; 
typedef long long ll ;
inline ll gcd ( ll a , ll b ) {ll r;while(b){r = a%b , a =b ;b= r ;}return a;}
inline ll lcm(ll a , ll b ) {return a/gcd(a,b) *b;}
// su dung toan tu pvi de goi lop con tu lop cha vi du xay dung lop cha la person , con la cac lop nhu vdv , hay student at the college 
class person{
    private : 
        string name ,  que_quan ;
        int tuoi ; 
    public :
    // constructor
        person( string name , string que_quan,int tuoi ){
            name = this->name;
            que_quan = this->que_quan; 
            tuoi = this->tuoi;
        }
        string get_name() {return this->name; }
        int get_tuoi() {return this->tuoi;}
        string get_que_quan() {return this->que_quan;}
        void get_tuoi(string name ) {
            name = this->name; 
        } 
        void get_tuoi(int tuoi ) {
            tuoi = this->tuoi ; 
        }
        void get_que_quan( string que){
            que = this->que_quan; 
        }
        void nhap(){
            cout <<"\n nhap ten : " ; 
            getline(cin,name) ; 
           
            cout <<"\n nhap que quan : " ; 
            getline( cin,que_quan) ; 
            cout <<"\n nhap tuoi : " ;
            cin >> tuoi ; 
        }
        void in(){
            cout << "\n NAME : " << name <<" ADDRESS : " <<que_quan <<"AGE :"<<tuoi ; 
        }
}; 
string viethoa( string &s){
    for( char &c : s ) c =toupper(c);
    return s ;
}
// xd class dua tren class cha 
class student : public person{
    private :
        string khoa ; 
        float gpa ; 
    public :
        student(string khoa , float gpa ,string name , string que_quan , int tuoi ) : person(name,que_quan,tuoi){
            khoa = this->khoa; 
            gpa = this->gpa;
        } 
        string set_khoa(){
            return this->khoa ;

        }
        void get_khoa(string khoa ){
            khoa = this->khoa ; 
        }
        float set_gpa(){
            return this->gpa ;
        }
        void get_gpa(float gpa){
            gpa  = this->gpa ; 
        }
        void nhap(){
            person::nhap() ;// 
            cout <<"\n NHAP khoa : " ; 
            cin >> khoa ;
          string s = set_khoa();
            this->khoa = viethoa(s) ;
            cout <<"\n NHAP gpa : "; cin >> gpa ;
        }
        void in(){
            person::in() ;// function overridding
            cout <<" KHOA : "<<khoa<<"GPA :  "<<gpa<<endl;
        }
};

int main(){
    student x("cntt",3.5,"vo tri thuc " ," nghe an ", 19) ; 
   
    x.in() ;
}
