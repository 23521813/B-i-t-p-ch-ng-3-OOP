/**
 *    author:  longvu
 *    created: 09/30/24 20:19:50
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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

class cArray {
private:
    vector<int> a;
public:
    cArray(int n) {
        a.resize(n);
        for (int i = 0; i < n; i++) {
            a[i] = (rng() % 10000);
            if (rng() % 2) {
                a[i] *= -1;
            }
        }
    }

    void Print() {
        for (int i = 0; i < sz(a); i++) {
            cout << a[i] << ' ';
        }
        cout << endl;
    }

    int Timsoamlonnhat() {
        int res = -INF;
        for (int i = 0; i < sz(a); i++) {
            if (a[i] < 0) {
                maximize(res, a[i]);
            }
        }
        return res;
    }

    int Dem(int x) {
        int res = 0;
        for (int i = 0; i < sz(a); i++) {
            if (a[i] == x) {
                res++;
            }
        }
        return res;
    }

    bool Ktgiamdan() {
        for (int i = 0; i < sz(a); i++) {
            if (a[i] <= a[i + 1]) {
                return false;
            }
        }
        return true;
    }

    void Sapxep() {
        sort(a.begin(), a.end());
    }
};

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    cArray a(n);
    cout << "In ra mang: " << endl;
    a.Print();
    cout << "So am lon nhat: " << endl;
    cout << a.Timsoamlonnhat() << endl;
    int x;
    cin >> x;
    cout << "So lan xuat hien cua " << x << " la: " << endl;
    cout << a.Dem(x) << endl;
    cout << "Kiem tra mang giam dan: " << endl;
    cout << a.Ktgiamdan() << endl;
    a.Sapxep();
    cout << "Mang sau khi sap xep: " << endl;
    a.Print();
    return 0;
}
