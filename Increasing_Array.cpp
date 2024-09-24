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
    ll n;
    cin>>n;
    vec nums(n);
    ll cnt=0;
    F(i,0,n){
        cin>>nums[i];
    }
    F(i,1,n){
        if(nums[i]>=nums[i-1]){
            continue;
        }
        
            cnt+=abs(nums[i]-nums[i-1]);
            nums[i]=nums[i-1];
        
    }
    cout<<cnt<<endl;
}

int main() {
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif

    // test{solve();}a
    solve();
}