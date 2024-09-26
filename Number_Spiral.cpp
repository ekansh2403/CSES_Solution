#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi=vector<vi>;
#define pb push_back
#define ll long long
#define vec vector<long long>
#define test int tc; cin>>tc; while(tc--)
#define all(a) (a).begin(),(a).end()
#define MOD 1000000007
#define pi pair<long long,long long>
#define F(i,a,b) for(int i=a;i<b;i++)

void solve(){
    ll row,col;
    cin>>row>>col;

    //Firstly we are gonna find the diagonal elements
    // if we observe the diagonal elements 
    //It's basically => row*col-(row-1) and if row==col => row*row-(row-1)
     //If row == col then its the diagonal element
     if(row==col) cout<<row*row-(row-1)<<endl;
     else{
        //now we find the diagonal value firstly
        ll val=max(row,col);
        val=val*val-(val-1);

        //Now we will check row and col condition 
        if(row>col){
            if(row%2==0){
                val+=(row-col);
            }
            else{
                val-=(row-col);
            }
        }
        else{
            if(col%2==0){
                val-=(col-row);
            }
            else{
                val+=(col-row);
            }
        }
     cout<<val<<endl;
     }
   
}

int main() {
     #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif

    test{solve();}
    // solve();
}