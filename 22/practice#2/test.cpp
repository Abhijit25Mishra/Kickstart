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
bool isPalindrome(string s)
{
    ll n = s.length();
    // char str[100];

    int freq[256] = {0};
    // cin>>str;
    // fr(n)
    // {
    //     str[i] = s[i];
    // }
    for (int i = 0; i < n; i++)
    {
        freq[s[i]]++;
    }

    ll even = 0;
    ll odd = 0;

    fr(256)
    {
        if (freq[i] == 0)
        {
            continue;
        }
        else if (freq[i] & 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }

    if ((n & 1) && (odd == 1) && !(even & 1))
    {
        return true;
    }
    else if (!(n & 1) && (odd == 0) && !(even & 1))
    {
        return true;
    }
    else
    {
        cout << even << odd;
        return false;
    }
}
int main()
{
    fast;
    string s;
    cin >> s;
    if (isPalindrome(s))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
