#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(v) v.begin(), v.end()
#define _ << ' '
#define __ << ' ' <<
#define el << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

ll hpowm(ll m)
{
    ll power = 0;
    while (1)
    {
        ll x = m % 2;
        if (x == 0)
        {
            power++;
            m /= 2;
        }
        else
            break;
    }
    return power;
}

int main()
{
    ll t;
    for (cin >> t; t--;)
    {
        ll n, m;
        cin >> n >> m;
        ll max_power = hpowm(m);
        cout << max_power el;
        if (max_power > n)
            cout << 2 << "^" << 0 el;
        else
            cout << 2 << "^" << n - max_power el;
    }
}
