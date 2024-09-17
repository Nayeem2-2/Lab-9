#include<bits/stdc++.h>
#define ll long long
using namespace std ;
void tc()
{
    ll n ;
    cin >> n ;
    vector< ll > p(n + 2), g(n+2);
    for(ll i = 1 ; i<=n ; i++)
    {
        cin  >> p[i];
    }

    map< ll, ll > mp ;

    for(ll i  = 1 ; i <=n ; i++)
    {
        cin >> g[i];
        mp[ g[i] ] = i ;
    }
    for(ll i = 1 ; i <=n ; i++)
    {
        if( mp[p[i]] > mp[i]){
            cout<< -1 <<endl;
            return ;
        }

    }
    vector<ll> dis(n+2 , 0) ,ans(n+2 , 0);

    for(ll i  = 2 ; i <=n ; i++){
        dis[ g[i] ] = dis[ g[i-1] ] + 1;
    }
    for(ll i =  1 ; i <=n ; i++){
        cout<< dis[i] << ' ';

    }
    cout<<endl;




}
int main()
{
    ll t ;
    cin >> t ;
    while(t--)
    {
        tc();


    }

}
