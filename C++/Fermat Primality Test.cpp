#include<bits/stdc++.h>
using namespace std;
#define endl          '\n'//notforinter
#define all(v)        v.begin(), v.end()
#define print(var)    cout << var << endl
#define out(a, b)     cout << a << " " << b << endl
#define rep(i, s, n)  for(int i = s; i < n; i++)
#define rrep(i, n, s) for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;
 
/*****User defined function*****/
int mod = 1e9+7;
int inf = 1e9+5;
const int N = 1e5+5;

ll mod_mul(ll a, ll b, ll p) {
    ll res = 0;
    while(b) {
        if(b&1)
            res = (res + a) % p;
        b >>= 1;
        a = (a + a) % p;
    }

    return res;
}

ll mod_pow(ll a, ll n, ll p) {
    ll res = 1;

    while(n) {
        if(n&1) 
            res = mod_mul(res, a, p);
        n >>= 1;
        a = mod_mul(a, a, p);
    }

    return res;
}

bool is_prime(ll n, int it = 5) {
    if(n <= 4)
        return n == 2 || n == 3;

    rep(i, 0, it) {
        ll a = 2 + rand() % (n-3);
        ll res = mod_pow(a, n-1, n);
        if(res != 1)
            return false;
    }

    return true;
}
 
void solve() {
    ll n;
    cin >> n;

    if(is_prime(n))
        print("YES");
    else 
        print("NO");
}   
 
/*****main function*****/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
 
    cout << fixed << showpoint;
    cout << setprecision(16);
 
    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }
 
    return 0;
}   
