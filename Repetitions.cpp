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
   string str;
   cin>>str;
   int curr=1,maxx=1;
   for(int i=1;i<str.length();i++){
    if(str[i]==str[i-1]){
        curr++;
    }
    else{
        curr=1;
    }
    maxx=max(maxx,curr);
   } 
   cout<<maxx<<endl;
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