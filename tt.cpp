
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MEM( ara, k ) memset(ara , k , sizeof(ara))
#define SORT(v) sort(v.begin(),v.end())
#define pll pair<long long , long long >
#define F first
#define S second
#define MOD 1000000007
#define inf (long long)1e18
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#define debug(x) cout << #x <<" = " << x << endl
using namespace __gnu_pbds;
template<typename t> void VI(vector<t> &v) {
    for(auto &i :v) cin >> i;
}
template<typename t> void VO(vector<t> &v) {
    for(auto &i :v) {
        cout << i <<' ';
    }
    cout<<endl;
}
ll bigmod(ll a,ll n) {
    if(n==0) {
        return 1;
    }
    ll res = bigmod(a,n/2);
    res *=res;
    res%=MOD;
    if(n&1) {
        res = (res*a)%MOD;
    }
    return res;
}
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;


void tc(){
    ll n ; cin >> n ;
    vector<string> v(n);
    VI(v);
    ///SORT(v);
    ll res = 0;
    for(ll i = 'a' ; i <= 'e' ; i++){

        vector< pair< ll , ll > > vtmp;
        for(ll j = 0 ; j<n ; j++){
            ll cnt = count(v[j].begin(),v[j].end() , (char)i);
            vtmp.push_back({-cnt , v[j].size()-cnt});
        }
        SORT(vtmp);
        ll rs = 0;
        ll lsm = 0;
        ll osm = 0;
        for(ll j = 0; j<n ; j++){
            lsm += vtmp[j].second;
            osm += -vtmp[j].first ;
            if(osm > lsm){
                rs++;
            }else{
                break;
            }
        }
        res = max(rs , res );

    }
    cout<<res<<endl;


}

signed main() {



    ll tt = 1;
    cin >> tt;
    while(tt--) {
        tc();
    }
}
