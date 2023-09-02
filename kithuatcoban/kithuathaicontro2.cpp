#include<bits/stdc++.h>
using namespace std;
typedef  long long  ll  ;
// bai tap tien day con lon nhat khong vuot qua s
//   7 20 
//  2 6 4 3 6 8 9 
// bai nguoc lai tim so day con nho nhat tong vuot s hai con tro 
// bai tap dem so luong tap con nhieu nhat nho hon s 
// output : 19 
// dem so luonh cap lon nhat lon hon s 
// out put 9 9 

// int main(){
//      int n ;  cin >> n ; int s ; cin >> s ;int a[n] ;
//      for( int &x  :a ) cin >> x ;
//      int l = 0 ,r ;
//      int sum = 0 ,ans = 0 ; 
//      for( r  = 0 ; r < n ; r++){
//         sum+= a[r] ;
//         while( sum > s ){
          
//             ans += n-r ;
//             sum -= a[l] ; ++l ;
//         }
       

        
//      }
//      cout <<ans <<endl;
// }
// bai tiep theo 
// so luong tap con nhieu nhat chua k phan tu khac nhau cua mang 
// 7 3
// 2 6 4 3 6 8 3 
// mai lam bang set 
// bai tuong tu nhung tim so lan ma hieu cua thang nho nhat va thang lon nhat nho hon bang k 
// two sum 
// test 
// 4 8 
// 2 7 5 1 
int main(){
    // int n ,k ;cin >> n>> k ; 
    // int a[n] ;  
    // for( int &x : a ) cin >> x ;
    // int  l = 0 ,r,cnt = 0  ; 
    // multiset<ll> ms;
    // int ans = 0 ; 
    // for( r = 0 ; r<n ; r++ ){
    //     dem[a[r]]++ ; // so lan xh cua a trong mang 
    //     if( dem[a[r]] ==1 ) {
    //         ++cnt ; 
    //     }
    //     while( cnt> k ){
    //         if( dem[a[l]] ==1 ) --cnt ; 
    //         dem[a[l]] --; ++l ; 
    //     }
    //     ans += r-l+1 ; 
    // }
    // ll ans  = 0 ; 
    // for( r = 0 ; r < n; r++ ){
    //     ms.insert(a[r]);
    //     while( *ms.rbegin()  - *ms.begin() > k ){
    //         auto it =  ms.find(a[l]);
    //         ms.erase(it);
    //         ++l ; 
    //     }
    //     ans += r-l+1 ; 
    // }
    // cout <<ans<<endl;
    int n,x ; cin >> n >>x ;
    vector<pair<int,int> > v(n);
    for( int i = 0; i < n;i++){
        cin >> v[i].first ;
        v[i].second = i ; 
    }
    sort( v.begin(),v.end() );
    int l = 0 , r= n-1 ; 
    while( l < r ){
        int sum = v[l].first + v[r].first ; 
        if( sum == x ){
            cout << v[l].second+1  << " " <<v[r].second +1 << endl;return 0 ; 
        }
        else if ( sum < x ){
            ++l ;
        }
        else --r ; 
    }
    cout <<"\n not not" ; 
}