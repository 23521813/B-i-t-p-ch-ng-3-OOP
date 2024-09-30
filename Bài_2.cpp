/**
 *    author:  longvu
 *    created: 09/30/24 20:10:03
**/
#include<bits/stdc++.h>

using namespace std;

#define int long long
#define sz(x) ((int)x.size())
#define all(x) (x).begin(), (x).end()
const int INF = numeric_limits<int>::max();
const int nax = (int)(100001);
const int mod = 1e9 + 7;

template<class X, class Y>
bool maximize(X& x, const Y y) {
    if (y > x) {x = y; return true;}
    return false;
}
template<class X, class Y>
bool minimize(X& x, const Y y) {
    if (y < x) {x = y; return true;}
    return false;
}

struct Duong_tron {
    int x, y, r;
    Duong_tron(int x = 0, int y = 0, int r = 0): x(x), y(y), r(r) {}
};

const double pi = acos(-1);

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    setprecision(10);
    Duong_tron a;
    cin >> a.x >> a.y >> a.r;
    cout << "Tinh dien tich: " << fixed << a.r * a.r * pi << '\n';
    cout << "Tinh chu vi: " << fixed << 2 * a.r * pi << '\n';
    return 0;
}
