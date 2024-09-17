#include <bits/stdc++.h>
using namespace std;
#define ll int
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
    ll ara[3];
    cin >> ara[0] >> ara[1] >> ara[2];
    ll res = 0;
    sort(ara, ara + 3);
    res += ara[0];
    ara[1]-=ara[0];
    ara[2]-=ara[0];
    ll a = ara[2];
    ll b = ara[1];
    while(a>=2 && b>=1){
        ll tmp =  min(b , a/2);
        res+=tmp;
        b-=tmp;
        a-=2*tmp;
        ll tt = max(a,b);
        b = min(a,b);
        a = tt;

    }
    cout<<res<<endl;
}






signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    ll tt = 1;
    //cin >> tt;
    while(tt--)
    {
        tc();
    }
}
