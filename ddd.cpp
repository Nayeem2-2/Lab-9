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
template<typename t> void VI(vector<t> &v)
{
    for(auto &i :v) cin >> i;
}
template<typename t> void VO(vector<t> &v)
{
    for(auto &i :v)
    {
        cout << i <<' ';
    }
    cout<<endl;
}
ll bigmod(ll a,ll n)
{
    if(n==0)
    {
        return 1;
    }
    ll res = bigmod(a,n/2);
    res *=res;
    res%=MOD;
    if(n&1)
    {
        res = (res*a)%MOD;
    }
    return res;
}
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;

ll cc(ll x, ll y)
{
    if(x%y!=0) return (x/y) + 1LL;
    return (x/y);
}




void tc()
{

    ll n ;
    cin >> n ;
    vector<ll> v(n);
    VI(v);

    ll res = 0 ;

    map<ll,ll> mp,mp1;
    for(auto &ii : v)
    {
        mp1[ii]++;
    }
    if(mp1[0]==0)
    {
        ll sm = 0;

        ll cnt = 0;
        for(auto &ii :v)
        {
            sm+=ii;
            if(sm==0)
            {
                cnt++;
            }
        }

        cout<<cnt<<endl;
        return;
    }
    v.pb(0);
    ll sm = 0 ;
    ll f = 0;
    for(ll i = 0; i <=n ; i++)
    {
        if(v[i]==0)
        {
            f++;
        }
        if(v[i]==0)
        {
            if(f==1)
            {
                res+=mp[0];
            }
            else
            {
                ll mx = 0;
                for(auto &[a,b] : mp)
                {
                    mx = max(mx, b);
                }
                res+=mx;
            }
            mp.clear();
        }
        sm+=v[i];
        mp[sm]++;
        ///cout<<sm<<' ';
    }
    cout<<res<<endl;











}

signed main()
{
    ll tt = 1;
    cin >> tt;
    while(tt--)
    {
        tc();
    }
}
