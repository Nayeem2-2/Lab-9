#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll lnn(ll a , ll b , ll c , ll d){
    return (a-c)*(a-c) + (b-d)*(b-d) ;
}
int main(){
    ll t ; cin >> t ;
    while(t--){
        ll n ; cin >> n ;
        vector< pair<ll ,ll> > vp(n);
        for(auto &[a,b] : vp) cin >>a >> b;

        map< pair< ll , pair< ll , ll> > , ll> mp ;

        for(ll i = 0 ; i <n-1 ; i++){
            for(ll j = i+1 ; j<n ; j++){
                ll len = lnn(vp[i].first  , vp[i].second , vp[j].first , vp[j].second);
                ll up = vp[i].first  - vp[j].first;
                ll down = vp[i].second - vp[j].second;
                ll gcd = __gcd(abs(up) , abs(down));
                if(up*down<0){
                    mp[ make_pair( len , make_pair(-abs(up/gcd) , abs(down/gcd)))]++;
                }else{
                    mp[ make_pair( len , make_pair(abs(up/gcd) , abs(down/gcd)))]++;
                }
            }
        }
        ll ans = 0 ;
        for(auto kk : mp){
            cout<<kk.first.first << ' ' << kk.first.second.first << ' '<<kk.first.second.second<< ' '<< kk.second<<endl;
            if(kk.second > 1){
                ans+=((kk.second)*(kk.second -1))/2;
        cout<<ans<<endl;
            }
        }
        cout<<ans<<endl;
    }

}
