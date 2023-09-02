#include<bits/stdc++.h>
using namespace std;

// max
// min
// max_element :doi voi vector
// min_element : doi voi vector
// - accumulate : tinh tong 
// swap 
// memset : gan ta ca gia tri bang 1 so nao do 
// fill cung la gan nhung ma gan voi vector 
// merge  tron 
// reverse sapxep giam dan ( giong greater ) ; 
// lien quan den set 
// 1 : set union ( tim hop cua 2 set ) ; 
// 2 : set intersection (tim giao ) ; 
// 3 : set_difference ( tim ptu thuoc mang a khong thuoc mang b ) ; 
// 4 : set_symmetric_difference (  cac phan tu khac giao cua ca 2 mang ); 
int main(){
   int a[] = {0,1,2,3,4,6,7,8} ; 
   int b[] = {0,1,2,3,4,5};
   vector<int>  u(14) ; 
   auto it = set_symmetric_difference( a,a+8 , b,b+6,u.begin()) ;
   u.resize(it- u.begin()) ;
   for( int x: u ) cout << x <<" " ;  

}
