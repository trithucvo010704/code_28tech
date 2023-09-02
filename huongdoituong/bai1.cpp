#include<bits/stdc++.h>
#include<iostream>
using namespace std; 
class printer {
    private: 
    float kg , speed ,age ; 
    string hangsx  ; 
    public: 
    printer(){}
    
    printer(float kg , float speed ,float age ,string hangsx){
        this->kg = kg;
        this->speed = speed;
        this->age = age;
        this->hangsx = hangsx ; 
    }
    void setSpeed(float speed) { this->speed = speed ; }
    void setAge(float age) { this->age = age; }
    void setHangsx(string hangsx) {this->hangsx = hangsx;}
    void setkg(float kg) {this->kg = kg; }
    void input(){
        cout << "  nhap khoi luong cua may in  : "  ; 
        cin >> kg ; 
        cin.ignore();
        cout << " nhap toc do may in : " ; 
        cin >> speed ;  
        cin.ignore();
        cout << "  nhap hang sx may in : " ; 
        cin >> hangsx ; 
        cout << "  nhap nam sx cua may in : " ; 
        cin >> age ;  
    }
    void output(){
        
        cout << " khoi luong :  " << kg << setw(10) << " toc do " << speed <<setw(10) <<" hang sx : " << hangsx <<setw(10) <<" nam sx : " << age <<setw(10) <<endl ;  
    };
} ;
class doprinter : public printer {
    private: 
    float matdo ; 
    public: 
    doprinter(){

    }
    // doprinter(float matdo) : printer(kg,age,speed,hangsx){
    //     this->matdo = matdo ; 
    // }
    void input(){
        cout << "  mat do kim cua may doprinter : " ;
        cin >> matdo ; 
        cin.ignore();
        printer::input();
    }
    void output(){
        cout << "  thong tin cua may do printer " << endl ;
        cout << "mat do kim :  " << matdo << endl;
        printer::output();
    }

 };
int main(){
    doprinter x ; 
    x.input();
    x.output();
 }