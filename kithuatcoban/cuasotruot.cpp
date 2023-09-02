#include<bits/stdc++.h>
using namespace std; 
using ll = long long ; 
// cua so truot (sliding window) 
// bai tap dau tien : tim cua so lon nhat va in ra cua so do ( cua so co k ptu )
// bai tap thu hai : tim so lan hoan vi it nhat de cac ptu <= k  dung lien ke  ; 
int main(){
    // int t  ; cin >> t ;
    // while( t-- ){
    //     int n , k ; 
    //     cin >> n >> k ;
    //     int a[1001] ; 
    //     for( int i = 0 ; i < n ; i++ ) cin >> a[i] ;
    //     ll sum  = 0 ; 
    //     for( int i = 0 ; i< k ; i++ ) sum += a[i] ; 
    //     ll res = 0 ,idx = 0 ; 
    //     for( int  i = k  ; i < n ; i++ ){
    //         sum = sum-a[i-k] + a[i] ; 
    //         if( sum > res ){
    //             res = sum ; 
    //             idx = i-k+1 ; // vi tri bat dau cua cua so moi 

    //         }
    //     }
    //     cout << res << endl ; 
    //     for( int j = 0 ;j<k ; j++){
    //         cout << a[idx+j] <<" " ; 
    //     }    
    //     cout <<"\n" ; 
    // }
    // bai tiep theo o day 


    int t  ; cin >> t ;
    while( t-- ){
        int n , k ; 
        cin >> n >> k ;
        int a[1001] ; 
        for( int i = 0 ; i < n ; i++ ) cin >> a[i] ;
        ll d = 0  ; 
        for( int i = 0 ;  i< n ; i++){
            if ( a[i] <= k ) ++ d ; 

        }
        ll cnt = 0 ;
        for( int i = 0 ; i< d ;i++){
            if( a[i] <= k ) ++cnt ; 
        }
        ll res =  cnt ; 
        for( int i =d  ; i< n ; i++){
            if( a[i -d] <= k  ) --cnt; 
            if( a[i] <= k ) ++cnt ; 
            res = max(res,cnt) ; 
        }
        cout << d-res<<endl ;
        


    }
}

