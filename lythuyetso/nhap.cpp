#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;
#define ll long long
// tim uoc so nt nn
int find(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}
// sang nguyen to tim uoc ntnn
int prime[100001];
void sieve()
{
    for (int i = 1; i <= 100000; i++)
    {
        prime[i] = i;
    }
    for (int i = 2; i <= sqrt(100000); i++)
    {
        if (prime[i] == i)
        {
            for (int j = i; j <= 100000; j += i)
            {
                if (prime[j] == j)
                {
                    prime[j] = i;
                }
            }
        }
    }
}
void pttsnto(ll n)
{

    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            ++cnt;
            n /= i;
        }
        if (cnt != 0)
        {
            cout << i << "^" << cnt;
            if (n != 1)
                cout << " * ";
        }
    }
    if (n != 1)
    {
        cout << n << "^1";
    }
}
// o(nlogn)
ll count(ll n, int p)
{
    ll cnt = 0;

    for (ll i = p; i <= n; i += p)
    {
        ll tmp = i;
        while (tmp % p == 0)
        {
            ++cnt;
            tmp /= p;
        }
    }
    return cnt;
}
// legendre
// o(n)
ll count1(ll n, int p)
{
    ll cnt = 0;
    for (ll i = p; i <= n; i *= p)
    {
        cnt += n / i;
    }
    return cnt;
}


void Tower(int n , char a, char b, char c ){
 if(n==1){
 cout<<"\t"<<a<<"-------"<<c<<endl;
 return;
 }
 Tower(n-1,a,c,b);
 Tower(1,a,b,c);
 Tower(n-1,b,a,c);
 }
int main(){
 char a='A', b='B', c='C';
 int n;
 cout<<"Nhap n: ";
 cin>>n;
 Tower(n,a,b,c);
}
