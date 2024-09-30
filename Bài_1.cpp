/**
 *    author:  longvu
 *    created: 09/30/24 20:02:27
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

struct Hocsinh {
    string hoten;
    double diemtoan, diemvan;
};

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    Hocsinh a;
    getline(cin, a.hoten);
    cin >> a.diemtoan >> a.diemvan;
    double diemtb = (a.diemtoan + a.diemvan) / 2;
    cout << "Diem trung binh: ";
    cout << diemtb << '\n';
    cout << "Xep loai: ";    
    if (diemtb >= 9) {
        cout << "Xuat sac";
    } else if (diemtb >= 8) {
        cout << "Gioi";
    } else if (diemtb >= 6.5) {
        cout << "Kha";
    } else if (diemtb >= 5) {
        cout << "Trung binh";
    } else {
        cout << "Yeu";
    }
    return 0;
}
