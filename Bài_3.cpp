/**
 *    author:  longvu
 *    created: 09/30/24 20:14:00
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

struct Point {
    double x, y;
    Point(double x = 0, double y = 0): x(x), y(y) {}
};

double dist(Point a, Point b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    Point a, b;
    cin >> a.x >> a.y >> b.x >> b.y;
    cout << "Khoang cach cua 2 diem la: " << dist(a, b) << endl;
    return 0;
}
