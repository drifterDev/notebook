#include <bits/stdc++.h>
using namespace std;
#define sz(arr) ((int) arr.size())
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<long long> vl;
const int INF = 1e9;
const ll INFL = 1e18;
const int MOD = 1e9+7;
int dirx[4] = {0,-1,1,0};
int diry[4] = {-1,0,0,1};
int dr[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dc[] = {0, 1, 1, 1, 0, -1, -1, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("file.in", "r", stdin);
    // freopen("file.out", "w", stdout);
    int t; cin >> t;

    for (int i = 0; i<t; i++){
        int n; cin >> n;

        int t = 0, c = 0, d = 0;

        for (int i = 0; i<n; i++){
            int a; cin >> a;
            if (a == 1){
                d++;
            }
            else{
                c += d;
                d = 0;
            }
            int b = 0;
            if (c != 0){
                b = c / 2 + 1;
            }
            t = max(t, d + b);
        }
        cout << t << "\n";

    }
}