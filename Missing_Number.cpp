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
    int n;
    cin>>n;
    int xor1=0;
    int xor2=0;
    for(int i=1;i<=n;i++){
        xor2=xor2^i;
    }
    int b=n-1;
    while(b--){
        int a;
        cin>>a;
        
        xor1=xor1^a;
        // cout<<a<<" ";
    }
    cout<<(xor1^xor2)<<endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif

    // test{

    solve();

    // }
}