#include<iostream>
#include<math.h> 
using namespace std ;
class array {
    private : 
    int * value ; 
    int n ; 
    public : 
    array(){
            n = 0; 
    }
    array(int * value , int n) {
        
        this->n = n ;
        this->value = value ; 
        value = new int[n];
        for(int i = 0; i < n ; i++){
            value [i] = 0 ; 
        } 
    }
    ~array(){
        this -> n = 0 ;
        delete[] this->value ;
    }
    void input(){
        cout << "  nhap so ptu cua mang : " ; 
        cin >> n ;
        value = new int [this->n];
        for( int i = 0 ; i< n ;  i++){
            cin >> value[i] ;
        }
    }
    void output(){
        cout << " mang la : " ; 
        for( int i = 0 ; i< n; i++){
            cout << value[i] ; 
        }
    }

} ;
int main(){
    array x  ;
    x.input();
    x.output();
    x.~array() ; 
}