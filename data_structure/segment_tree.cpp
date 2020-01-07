#include <iostream>
using namespace std;

const int MAXN = 10;
const int INF = 0x3f3f3f3f;

int n = 6;
int a[] = {1, 3, 5, 2, 5, 7};

int seg[MAXN*4];

void pull (int o) {
    seg[o] = min(seg[o<<1], seg[o<<1|1]);
}

void build (int o, int nL, int nR) {
    if (nR == nL + 1) {
        seg[o] = a[nL];
    } else {
        int nM = (nL + nR) >> 1;
        build(o<<1, nL, nM);
        build(o<<1|1, nM, nR);
        pull(o);
    }
}

int query (int qL, int qR, int o, int nL, int nR) {
    if (qL >= nR || qR <= nL || qL >= qR) {
        return INF;
    } else if (qL <=  nL && nR <= qR) {
        return seg[o];
    } else {
        int nM = (nL + nR) >> 1;
        return min(query(qL, qR, o<<1, nL, nM), query(qL, qR, o<<1|1, nM, nR));
    }
}

void chg (int x, int v, int o, int nL, int nR) {
    if (x >= nR || x+1 <= nL) {
        return;
    } else if (x <=  nL && nR <= x+1) {
        seg[o] = v;
    } else {
        int nM = (nL + nR) >> 1;
        chg(x, v, o<<1, nL, nM);
        chg(x, v, o<<1|1, nM, nR);
        pull(o);
    }
}

int main () {
    build(1, 0, n);

    int cmd; // 0 l r => query [l..r], 1 x d => a[x] = d
    while (cin >> cmd) {
        if (cmd == 0) {
            int l, r;
            cin >> l >> r;
            cout << query(l, r+1, 1, 0, n) << endl;
        } else {
            int x, d;
            cin >> x >> d;
            chg(x, d, 1, 0, n);
        }
    }
}