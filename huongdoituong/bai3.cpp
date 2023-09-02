#include <bits/stdc++.h>
using namespace std; 

class nhanvien{
    private:
    string ten ,chucvu ; 
    public: 
    nhanvien(){

    } ; 
    nhanvien(string ten ,string chucvu ){
        this->ten = ten;
        this->chucvu = chucvu; 
    }
    void input(){
        cout << " nhap ten nhan vien : "     ; 
        getline(cin,ten);
        cout << " nhap chuc vu  nhan vien : "     ; 
        getline(cin,chucvu);
    }
    void output(){
    cout << " nhan vien kiem ke : " << ten << setw(20) <<"chuc vu : " << chucvu << endl; 
    }
    
}; 
class phong{
    private: 
    string ten_phong , maphong ,ten_truong_phong ; 
    nhanvien x  ; 
    public: 
    phong(){

    }
    phong(string ten_phong , string maphong , string ten_truong_phong,nhanvien x ){
        this->ten_phong = ten_phong ; 
        this->maphong = maphong ;
        this->ten_truong_phong = ten_truong_phong ;  
        this-> x = x ; 
    }
    void input(){
        x.input() ;
        cout << "  nhap ten phong : " ;
        getline(cin,ten_phong) ;
        cout << "  nhap ma phong : " ;
        getline(cin,maphong) ;
        cout << "  nhap ten truong  phong : " ;
        getline(cin,ten_truong_phong) ;
         
    }
    void output(){
        x.output() ; 
        cout << " ten phong : " <<ten_phong <<setw(20) << " ma phong : " << maphong <<endl ;
        cout << " truong  phong : " <<ten_truong_phong <<endl  ; 
           
    }
};
class taisan{
    private: 
    string ten , tt; 
    float  sl ; 
    public:  
    taisan(){

    } 
    taisan(string ten ,string tt ,float  sl ){
        this->ten = ten ; 
        this ->tt = tt ; 
        this ->sl = sl ;  
    }
    void input(){
        cout << " nhap ten tai san : " ;
        getline(cin,ten) ; 
        cout <<" nhap so luong tai san : ";
        cin >> sl ; 
        cin.ignore() ;
        cout << " nhap trinh trang tai san : " ; 
        getline(cin,tt ) ;   
    }
    void output(){
        cout <<setw(10)  <<ten  << setw(20)<<sl <<setw(20) <<tt <<endl ;
    } ;
    int getsl(){
        return this->sl ; 
    }
};
class phieu{
    private: 
    string maphieu , ngaykiemphieu ; 
    phong x ;
    taisan *p ; 
    int n , tong ;
    public: 
    phieu(){

    }
    phieu( string maphieu ,string ngaykiemphieu ,phong x  ,taisan *p ){
    this->maphieu = maphieu; 
    this->ngaykiemphieu  = ngaykiemphieu ; 
    this->x =  x ;
    this-> p = p ; 
    
    }
    void input(){
        cout << " nhap ma phieu : " ;
        getline(cin,maphieu ) ; 
        cout << " nhap ngay kiem ke : " ; 
        getline(cin,ngaykiemphieu);
        x.input();
        cout << "  nhap so luong tai san : " ;
        cin >> n ;
        cin.ignore(); 
        p= new taisan[n];   
        for( int i=0 ; i<n ; i++){
            cout << "  nhap thong tin cho tai san " << i+1 << " : " <<endl ; 
            p[i].input() ;  
        }

    }
    int getslten(){
        return this->n ; 
    }
    int gettong(){
        tong = 0 ;
        for( int i=0 ; i<n ; i++){
            this->tong +=  ( p[i].getsl());
        } 
            return this->tong; 
    }
    
    
    void output(){ 
        cout << " ma phieu : "<< maphieu<< setw(20) <<"  ngay kiem ke : " << ngaykiemphieu <<endl ; 
        x.output();
        cout << " \n " ; 

        cout << "ten tai san " << setw(20) <<" so luong " <<setw(20) <<" tinh trang  " <<endl ;
        for(int i = 0 ; i<n ; i++){ 
            p[i].output() ; 
        }
        cout << " so tai san da kiem ke "<<getslten()  << setw(20) <<" tong so luong : " << gettong()   ; 
    
    }

}  ; 
int main(){
    phieu x  ; 
    x.input() ; 
    x.output() ;
}
