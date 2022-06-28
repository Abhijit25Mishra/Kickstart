// Aur Bhai Dekhne aagaye ;)
// Author: Abhijit Mishra
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for (long long i = a; i <= b; i++)
#define fr(n) for (long long i = 0; i < n; i++)
#define nesfr(x, y)                   \
    for (long long i = 0; i < x; i++) \
        for (long long j = 0; j < y; j++)
#define rep(i, a, b) for (long long i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int N = 2e5 + 5;
bool isPalindrome(string a)
{
    // bitvector to store
    // the record of which character appear
    // odd and even number of times
    int bitvector = 0, mask = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        int x = a[i] - 'a';
        mask = 1 << x;

        bitvector = bitvector ^ mask;
    }

    return (bitvector & (bitvector - 1)) == 0;
}

int main()
{
    fast;

    ll t;
    cin >> t;
    rep(q, 1, t + 1)
    {
        ll n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        ll ans = 0;
        ll l, r;
        vi h;
        vector<string> g;

        fr(x)
        {

            cin >> l >> r;
            l = l - 1;
            r = r - 1;
            string z = s.substr(l, r - l + 1);
            bool flag = false;
            if (find(all(g), z) == g.end())
            {
                g.pb(z);
                if (l == r)
                {
                    ans++;
                    h.pb(1);
                }

                else if (isPalindrome(z))
                {
                    ans++;
                    h.pb(1);
                }
                else
                {
                    h.pb(0);
                }
            }
            else
            {
                ans += h[g.begin() - find(all(g), z)];
            }
        }

        cout << "Case #" << q << ": " << ans;
        nl;
        for (auto x : h)
        {
            cout << x;
        }
    }
    return 0;
}
