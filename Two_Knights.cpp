#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define vec vector<long long>
#define test int tc; cin>>tc; while(tc--)
#define all(a) (a).begin(),(a).end()
#define MOD 1000000007
#define pi pair<long long,long long>
#define F(i,a,b) for(int i=a;i<b;i++)

void solve(){
    ll inp;
    cin>>inp;
    for(ll n=1;n<=inp;n++){
        ll totalWays=(n*n)*((n*n)-1)/2;
        ll attackPosition=4*(n-1)*(n-2);
        cout<<totalWays-attackPosition<<endl;
    }
}

int main() {
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif

    // test{solve();}
    solve();
}