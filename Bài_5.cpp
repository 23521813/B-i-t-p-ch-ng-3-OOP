/**
 *    author:  longvu
 *    created: 09/30/24 20:34:45
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

class cHocSinh {
private:
    string ma, hoTen, gioiTinh;
    int namSinh;
    double diemTB;
public:
    void nhap() {
        cout << "Nhap ma hoc sinh: " << endl; cin >> ma;
        cout << "Nhap ho ten: " << endl; cin.ignore(); getline(cin, hoTen);
        cout << "Nhap gioi tinh: " << endl; cin >> gioiTinh;
        cout << "Nhap nam sinh: " << endl; cin >> namSinh;
        cout << "Nhap diem trung binh: " << endl; cin >> diemTB;
    }

    bool sosanhdiemTb(cHocSinh hs2) {
        return diemTB > hs2.diemTB;
    }

    bool sosanhtuoi(cHocSinh hs2) {
        return namSinh < hs2.namSinh;
    }
};

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cHocSinh hs1, hs2;
    hs1.nhap();
    hs2.nhap();
    if (hs1.sosanhdiemTb(hs2)) {
        cout << "Hoc sinh 1 co diem trung binh cao hon hoc sinh 2";
    } else {
        cout << "Hoc sinh 2 co diem trung binh cao hon hoc sinh 1";
    }
    cout << endl;
    if (hs1.sosanhtuoi(hs2)) {
        cout << "Hoc sinh 1 lon hon hoc sinh 2";
    } else {
        cout << "Hoc sinh 2 lon hon hoc sinh 1";
    }

    return 0;
}
