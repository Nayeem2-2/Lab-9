#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t ; cin >> t ;
    while(t--){
        ll n , a , b ; cin >> n >> a >> b;
        vector<ll> v(n + 1);
        v[0] = 0;
        for(ll i =1 ; i<=n ; i++){
            cin >> v[i];
        }
        n++;
        vector<ll > pp(n+1 , 0);
        for(ll i = 0; i<n ; i++){
            pp[i+1] = pp[i] + v[i];
        }
        ll res = 1e18;
        for(ll i = n-1 ; i>=1 ; i--){
            res = min(res ,  (a + b)*v[i-1] - b*(n - i)*v[i-1] + b*(pp[n] - pp[i]) );
        }
        cout<<res <<endl;

    }



}
