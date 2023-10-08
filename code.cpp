#include <bits/stdc++.h>

using namespace std;

// Types
typedef long long ll;
typedef string str;

typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<bool> vb;
template <class A, class B, class C> using T = tuple<A, B, C>;
template <class T> using V = vector<T>;
template <class T, class E> using PR = pair<T, E>;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

typedef set<ll> sll;
typedef map<ll, ll> mll;
typedef queue<ll> qll;

#define umap unordered_map
#define uset unordered_set
#define pq priority_queue
#define Q queue

// Firsts
#define FAST cin.tie(0); cout.tie(0); ios::sync_with_stdio(0)
#define READ_FILE(i, o) freopen(i, "r", stdin); freopen(o, "w", stdout)
#define PRECISION(n) cout << fixed << setprecision(n)

// Pair
#define MP make_pair
#define F first
#define S second

// Tuple
#define MT make_tuple

// For
#define rep(i,n) for (ll i = 0; i < (n); i++)
#define per(i,n) for (ll i = (n)-1; i >= 0; i--)
#define loop(i,s,n,in) for (ll i = (s); i < (n); i+=(in))
#define pool(i,s,n,de) for (ll i = (n)-1; i >= (s); i-=(de))
#define each(e,v) for(auto &e : v)

// Input
#define gets(val) cin >> val
template <class T> void get(T &t) {
    cin >> t;
}
template <class T, class... U> void get(T &t, U &... u) {
    get(t); get(u...);
}
template <class T> void get(V<T> &v) {
    each(e, v) get(e);
}

// Output
#define puts(val) cout << val << "\n"
template <class T> void put(T &t) {
    cout << t;
}
template <class T, class... U> void put(T &t, U &... u) {
    put(t); put(u...);
}

#define NXT "\n"
#define SP " "
#define nxt() cout << "\n"
#define sp() cout << " "
#define yes() cout << "YES\n";
#define no() cout << "NO\n";

// Extras
#define all(v) (v).begin(), (v).end()
#define sz(x) ((ll) ((x).size()))
#define contains(v, x) (v.find(x) != v.end())

#define PB push_back
#define P push
#define I insert
#define G get

const double eps = 1e-9;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;

void solve() {
    
}

void main_stdio(bool cases) {
    FAST;

    ll t = 1;
    if (cases) gets(t);

    loop(k,1,t+1,1) {
        // put("Case #", k, ": ");
        solve();
    }

    cout << flush;
}

void main_fileio(bool cases, string in, string out) {
    READ_FILE(in.c_str(), out.c_str());

    ll t = 1;
    if (cases) gets(t);

    loop(k,1,t+1,1) {
        // put("Case #", k, ": ");
        solve();
    }
}

int main() {
    bool stdio = true;
    bool cases = false;
    string in = "in.in";
    string out = "out.out";

    if (stdio) {
        main_stdio(cases);
    } else {
        main_fileio(cases, in, out);
    }
    return 0;
}