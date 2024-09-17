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

ll cc(ll x, ll y) {
    if(x%y!=0) return (x/y) + 1LL;
    return (x/y);
}


void tc() {
    ll n ; cin >> n;
    vector<pll> vec(n);
    ///VI(vec);
    vector<ll> y1 , y2 ;
    set<ll> st;
    for(ll i = 0; i <n ; i++){
        cin >> vec[i].first >> vec[i].second;
        if(vec[i].second==0){
            y1.pb(vec[i].first);
        }else{
            y2.pb(vec[i].first);
        }
        st.insert(vec[i].first);
    }
    SORT(y1);
    SORT(y2);
    ll sm = 0 ;
    for(ll i = 0; i <y1.size(); i++){
            ll p1 = y1[i];

            ll tf = (p1 + 1);
            auto pp =lower_bound(y2.begin(),y2.end(),tf);
            auto p2 =lower_bound(y1.begin(),y1.end(),tf+1);

            if(pp!=y2.end() && *pp==tf && p2!=y1.end() && *p2==tf+1 ){
                sm++;
            }

    }

    for(ll i = 0; i <y2.size(); i++){
        ll p1 = y2[i];

            ll tf = (p1 + 1);
            auto pp =lower_bound(y1.begin(),y1.end(),tf);
            auto p2 =lower_bound(y2.begin(),y2.end(),tf+1);

            if(pp!=y1.end() && *pp==tf && p2!=y2.end() && *p2==tf+1 ){
                sm++;
            }
    }
    for(auto ii : st){
        auto p1 =lower_bound(y2.begin(),y2.end(),ii);
        auto p2 =lower_bound(y1.begin(),y1.end(),ii);
        if(p2!=y1.end() && *p2==ii && p1!=y2.end() && *p1==ii){
            sm+=(n-2);
        }
    }
    cout<<sm<<endl;













}

signed main() {
    ll tt = 1;
    cin >> tt;
    while(tt--) {
        tc();
    }
}
