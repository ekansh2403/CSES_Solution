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
    //In this question we can see that the difference of two odd and two even numbers is >=2 which will be fine acc. to our question
    int n;
    cin>>n;
    if(n==2||n==3){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        for(int i=2;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i+=2){
            cout<<i<<" ";
        }
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