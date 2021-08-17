//ngqminh.cl2735
#include <bits/stdc++.h>
#define PB push_back
#define Random(lf, rt) (lf + rand() % (rt - lf + 1))
#define pii pair <int,int>
#define vi vector <int>
#define vii vector <pii>
#define mpa make_pair
#define oo INT_MAX
#define F first
#define S second
#define reset(x, i) memset(x,i,sizeof(x))
#define sz(x) int(x.size())
#define maxn 100005
#define MOD
#define all(x) x.begin(), x.end()
#define Pi 3.141592653589793238
#define cosdo(x) cos(x/180 * Pi)
#define sindo(x) sin(x/180 * Pi)
#define tando(x) tan(x/180 * Pi)
#define cotdo(x) 1/tando(x)
#define Task "DTH"
using namespace std;
typedef long long ll;
typedef long double ld;
int n, k, x[100];
void Xuatnghiem()  {
    for (int i = 1; i <= k; i++)
        cout << x[i] << " ";
    cout << "\n";
}
void ToHop (int i)  {
    for (int j = x[i - 1] + 1; j <= n - k + i; j ++)  {
        x[i] = j;
        if (i == k) Xuatnghiem();
        else ToHop(i+1);
    }
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    freopen(Task".inp", "r", stdin);
    freopen(Task".out", "w", stdout);
    cin >> n >> k;
    ToHop(1);
}
