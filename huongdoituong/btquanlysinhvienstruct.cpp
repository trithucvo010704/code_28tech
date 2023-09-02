#include<bits/stdc++.h>
using namespace std;

struct sinhvien{
    string ma,ten,lop,ns;
    float gpa ; 
    void input(){
        cout <<"\n Nhap msv " ; cin >> ma ; 
        cin.ignore();
        cout <<"\n nhap ten sinh vien  " ; 
        getline( cin,ten) ; 
        cout << "\n nhap lop : " ; 
        cin >> lop ; 
        cout << "\n nhap ns : " ; 
        cin >> ns ; 
        cout << "\n nhap GPA : " ;cin >> gpa ;  

    }
    void output(){
        cout <<"\n_____________";
        cout << "\n MSV: " <<ma ; 
        cout << "\n TEN sinh vien " <<ten ; 
        cout << "\n lop : " <<lop ; 
        cout << "\n NGAY SINH : " <<ns ; 
        cout << "\n GPA : "<<fixed<<setprecision(3)<<gpa ; 
    }
};
void nhap( sinhvien a[] , int n ){
    for( int i=0; i<n; i++ ){
        cout << "\n nhap thong tin sinh vine thu " <<i+1 <<endl; 
        a[i].input(); 
    }
}
void xuat( sinhvien a[] , int n ){
    cout << "\n cac sinh vien co trong danh sach ! " ;
    for( int i=0; i<n; i++ ){
        a[i].output(); 
    }
}
void tktm( sinhvien a[] , int n ){
    string ma ; cout << "\n nhap ma sinh vien can tim kiem " ; 
    cin >> ma; 
    bool check = false ; 
    for( int i = 0; i<n; i++ ){
        if(a[i].ma.find(ma) != string::npos){
            a[i].output(); 
            check = true; 
        }
    }
    if(!check) cout << "\n KHONG TIM THAY MA SINH VIEN TRONG DS "   ;
}
void lkgpa( sinhvien a[] , int n){
    // vector<int>  s;  // cach phuc tap 
    // double res = 0 ; 
    // for( int i = 0; i<n; i++ ){
    //     if( a[i].gpa >res ){
    //         res = a[i].gpa ; 
    //         s.clear(); 
    //         s.push_back(i); 
    //     }
    //     else if ( a[i].gpa ==res ){
    //         s.push_back(i);
    //     }
    // }
    double res = 0 ; 
    for( int i = 0 ; i< n ; i++){
        if( a[i].gpa > res ) res = a[i].gpa ; 
    }

    for( int i = 0 ; i< n ; i++){
        if( a[i].gpa ==res){
            a[i].output() ; 
        }
    }
    
}
bool cmp( sinhvien a , sinhvien b){
    return a.gpa >  b.gpa ; 
}
void lkgpa2( sinhvien a[] ,int n ){
    vector< sinhvien > v; 
    for( int i = 0 ; i< n ; i++){
        if( a[i].gpa >= 2.5 ) {
            v.push_back(a[i]);
        }
    }
    sort( v.begin(),v.end() ,cmp) ;
    for( sinhvien x : v){
        x.output() ;
    }
}
// chuan hoa ten ve theo thu tu tu dien
// vi du  nguyen van anh  anh nguyen van 
// y tuong la dua thang ten len dau xong day nhung thang con lai vao roi so sanh 

vector<string> chuanhoa(string name ) {
    stringstream ss(name ) ; 
    string token  ;
     
    vector<string> v ; 
    while( ss>>token){
        v.push_back(token); 
    }
    
    return v ;
}
bool cmp2(sinhvien a, sinhvien b){
    vector<string > v1 = chuanhoa(a.ten),v2 = chuanhoa(b.ten);
    if( v1.back() != v2.back() ) return v1.back() < v2.back() ; // ham so sanh ten   
    int len1 = v1.size(); 
    int  len2 = v2.size();
    // sd vong for sosanh chuoi 
    for( int i = 0 ; i<min(len1,len2) ; i++ ){
        if( v1[i] != v2[i] ) return  v1[i] < v2[i] ;
    }
    return len1 < len2 ;
}
// MỤC 5
void sxtheoten(sinhvien a[] ,int n ){
    sort(a,a+n, cmp2) ; 
} 
// sap xep theo lop 
bool cmp3( sinhvien a,sinhvien b ){
    if( a.lop != b.lop) return a.lop <b.lop; 
    vector<string > v1 = chuanhoa(a.ten),v2 = chuanhoa(b.ten);
    if( v1.back() != v2.back() ) return v1.back() < v2.back() ; // ham so sanh ten   
    int len1 = v1.size(); 
    int  len2 = v2.size();
    // sd vong for sosanh chuoi 
    for( int i = 0 ; i<min(len1,len2) ; i++ ){
        if( v1[i] != v2[i] ) return  v1[i] < v2[i] ;
    }
    return len1 < len2 ;
}
void sxtheolop( sinhvien a[] ,int n ){
    sort(a,a+n,cmp3) ; 
}
bool cmp4(sinhvien a,sinhvien b ){
    if( a.lop != b.lop ) return a.lop < b.lop ;
    return a.gpa >b.gpa ; 
}
void sxgpa( sinhvien a[], int n ){ // ham sx theo lop va gpa se giam dan    
    sort( a,a+n ,cmp4) ; 

}


int main(){
    sinhvien a[1000] ; 
    int n = 0 ;
    int chon  ;
    do{
        cout << "\n--------------MENU------------" ; 
        cout <<"\n NHAP 1 DE TAO THONG TIN CHO 1 SINH VIEN "; 
        cout << "\n NHAP 2 DE IN TOAN BO DS SV " ; 
        cout << "\n NHAP 3 DE TK theo ma sinh vien "; 
        cout << "\n NHAP 4 DE LIET KE CAC SINH VIEN CO GPA CAO NHAT "; 
        cout << "\n NHAP 5 DE LIET KE CAC SINH VIEN CO GPA >= 2.5 ";
        cout << "\n NHAP 6 DE SAP XEP SINH VIEN THEO TEN "; 
        cout << "\n NHAP 0 DE KET THUC CHUONG TRINH TREN ! "<<endl; 
        
        cin >> chon ; 
        switch (chon)
        {
        case 1 /* constant-expression */:
            a[n].input();
            ++n ; /* code */
            break;
        
        case 2: {
            xuat(a,n ) ; 
            break;
        } 
        case 3: {
            tktm(a,n ) ;
            break;
        }
        case 4: {
            lkgpa(a,n ) ;
            break;
        }
        case 5: {
            lkgpa2(a,n ) ;
            break;
        }
        case 6: {
            sxtheoten(a,n ) ; break;
        }
        case 0 :{
            cout << "\n BAN VUA KET THUC CHUONG TRINH !!" ; 
            break;  ;
        }
        default:{
            cout << "\n NHAP SAI VUI LONG NHAP LAI !!!"  ; 
        }

        } 
    }
    while( chon!=0 );
}