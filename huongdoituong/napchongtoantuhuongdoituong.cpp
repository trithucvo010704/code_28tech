#include<bits/stdc++.h>
using  namespace std;

class sv {
    private: 
    string id,ten, ns ;
    float gpa ; 
    static int dem  ; 
    public: 
    // tu xay dung constructor 
    string  getid (){
        return this->id; 
    }
    
    // nap chong toan tu cin >>
    friend istream& operator >> (istream& in, sv &a){
        dem++ ; 
        a.id = "SV" + string (3-to_string (dem).length(), '0') +to_string (dem) ; 
        cout <<"\n nhap ten : " ; getline(in,a.ten) ;
        cout << "\n nhap ns " ; getline(in,a.ns) ;
        cout << "\n nhap gpa : " ; cin>>a.gpa;
        cin.ignore();
        return in ;   
    }
    // nap chong toan cout <<
    friend ostream& operator << (ostream &out , sv a ){
        out << a.id <<" " << a.ten <<" " <<a.ns <<" "<<a.gpa <<endl ;
        return out ; 
    }

   
};
int sv:: dem = 0 ;
int main(){
    sv a ; 
    cin >> a ; 
    cout << a ; 
}