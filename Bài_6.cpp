/**
 *    author:  longvu
 *    created: 09/30/24 21:09:47
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

class SoPhuc {
private:
    int phanthuc, phanao;
public:
    SoPhuc(int a = 0, int b = 0) {
        phanthuc = a;
        phanao = b;
    }

    void thayDoi(int a, int b) {
        phanthuc = a;
        phanao = b;
    }

    void in() {
        cout << phanthuc << " + " << phanao << "i" << endl;
    }

    void nhap() {
        cout << "Nhap phan thuc: " << endl;
        cin >> phanthuc;
        cout << "Nhap phan ao: " << endl;
        cin >> phanao;
    }

    SoPhuc operator+ (SoPhuc x) {
        SoPhuc res;
        res.phanthuc = phanthuc + x.phanthuc;
        res.phanao = phanao + x.phanao;
        return res;
    }

    SoPhuc operator- (SoPhuc x) {
        SoPhuc res;
        res.phanthuc = phanthuc - x.phanthuc;
        res.phanao = phanao - x.phanao;
        return res;
    }

    SoPhuc operator* (SoPhuc x) {
        SoPhuc res;
        res.phanthuc = phanthuc * x.phanthuc - phanao * x.phanao;
        res.phanao = phanthuc * x.phanao + phanao * x.phanthuc;
        return res;
    }

    SoPhuc operator/ (SoPhuc x) {
        SoPhuc res;
        res.phanthuc = (phanthuc * x.phanthuc + phanao * x.phanao) / (x.phanthuc * x.phanthuc + x.phanao * x.phanao);
        res.phanao = (phanao * x.phanthuc - phanthuc * x.phanao) / (x.phanthuc * x.phanthuc + x.phanao * x.phanao);
        return res;
    }
};

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    SoPhuc a, b(1, 2);
    a.nhap();
    b.thayDoi(4, 5);
    cout << "Cong 2 so phuc: " << endl;
    SoPhuc c = a + b;
    c.in();
    cout << "Tru 2 so phuc: " << endl;
    c = a - b;
    c.in();
    cout << "Nhan 2 so phuc: " << endl;
    c = a * b;
    c.in();
    cout << "Chia 2 so phuc: " << endl;
    c = a / b;
    c.in();
    return 0;
}
