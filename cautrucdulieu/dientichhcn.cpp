#include<bits/stdc++.h>
#include<stack>
using namespace std; 
// bai toan dien tich hcn lon nhat tren bieu do (maximum rectangular area in histogram) 
int main(){
    int res = 0;
    int i =  0 ; 
    int n ;  cin >> n ; 
    int a[n] ; 
    for( int &x :a ) cin >> x ; 
    stack <int> st ; 
    while( i < n ){
        if( st.empty() ||  a[i] >= a[st.top()]){
            st.push(i); 
            ++i ; 
        }
        else{
            int index = st.top(); // chi so cot o dinh 
            st.pop() ; 
            // tinh tat ca hcn coi cot do la ngan nhat 
            if( st.empty() ){
                res = max(res , a[index] * i  );
            }
            else{
                res = max( res, a[index] * (i-st.top()-1 )) ; 
            }
        }
    }
    cout <<res <<endl ; 
}
