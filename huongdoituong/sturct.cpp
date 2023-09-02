#include<bits/stdc++.h>
#include<iostream>
using namespace std; 

struct sinhvien{
    int age ; 
    string gpa ; 
    string name ; 
    // constructor 
    //(macdinh )
    sinhvien(){
        age = 18 ; 
        gpa = "3.4"; 
        name = "vo thuc"; 

    }
    // constructor 2 
    sinhvien(int age, string gpa, string name){
        this->age = age ; 
        this->gpa = gpa ; 
        this->name = name;// sd con tro this 
    }
    void in(){
        cout << age << " " << gpa << " " << name  << endl;
    }
    void nhap(){
        cout << "\n nhap tuoi " ; cin >> age ; 
        cin.ignore();
        cout << "\n nhap gpa : " ; 
        getline( cin,gpa) ; 
        cout << "\n nhap ten : " ; 
        getline( cin,name) ; 
    }
};
struct sophuc{
    int a,b ; //a+bi 
    // nap chong toan tu khai bao la operator ( them dau + -  * chia ) 
    // struct chi cho mot operator mot tham so 
    // neu muon truyen hai tham so thi can 
    // sophuc operator+ ( const sophuc khac ){
    //     sophuc tong ; 
    //     tong.a = a+ khac.a ;
    //     tong.b = b+khac.b ; 
    //     return tong  ; 
    // }
    friend sophuc operator+ (const sophuc x , const sophuc y ){
        sophuc tong  ; 
        tong.a = x.a + y.a ; 
        tong.b = x.b + y.b ; 
        return tong ; 
    }
    // nap chong cin va cout 
    // cin >> 
    friend istream &operator >> (istream & in ,sophuc&x){
        in>>x.a>>x.b ; 
        return in; 
    }  
    friend ostream &operator << (ostream  & out  ,sophuc x ){
        out<<x.a<<" " << x.b ; 
        return out ;
    }
}; 
int main(){
    sophuc a,b; 
    cin >>a>> b ; 

    sophuc c = a+b ; 
    cout << c<<endl; 
}
