#include <bits/stdc++.h>
using namespace std;
void thuasongto(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n != 1)
        cout << n << " ";
}
void pt(int n)
{
    cout << n << "= ";
    for (int i = 2; i < sqrt(n); i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            ++cnt;
            n = n / i;
            if (n != 1)
            {
                cout << "* ";
            }
        }
        cout << i << "~" << cnt << " ";
    }
    if (n != 1)
        cout << n << " ~ 1";
}
int main()
{
    int n;
    cin >> n;
    pt(n);
}