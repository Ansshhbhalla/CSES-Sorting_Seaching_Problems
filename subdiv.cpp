#include <bits/stdc++.h>
#include <deque>
#include<algorithm>
using namespace std;
using ll = long long;
#define pb push_back
#define eb emplace_back
#define fi first
#define Dracarys ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp> 
// using namespace __gnu_pbds; 
// #define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update> 
#define se second
#define f(i, a, b) for (i = a; i < b; i++)
    #define rep(i, n) for (i, 0, n)
        #define fd(i, a, b) for (i = a; i >= b; i--)
            #define vi vector < ll >
            #define vl vector < ll >
            #define mi map < ll, ll >
            #define ml map < ll, ll >
            const ll hell = 1000000007;
//--------------------------------------------------//
//--code from *ansh*--//
//--------------------------------------------------// 

//------------------------------------------code for multi set owerbound dynamic changing-------------------------------//
// multiset<ll ,greater<ll>> s;
//         for(ll i=0;i<n;i++){s.insert(a[i]);}
//         for(ll i=0;i<m;i++){
//             auto it=s.lower_bound(b[i]);
//             if(it==s.end()) cout<<-1<<endl;
//             else{
//             cout<<*it<<endl;
//             s.erase(it);
//           }
//         }
//-----------------------------------------------------------------------------------------------------------------------//
//------------------------------------------Maximum over lap or trains or meeting or restraunts peoples------------------//
//----------------------------------------------Without PREFIX SUM-------------------------------------------------------//
//  vector<pair<ll,ll>> v1;
//         for(ll i=0;i<n;i++){
//             ll x,y;
//             cin>>x>>y;
//             v1.push_back({x,1});
//             v1.push_back({y,-1});
//         }
//         sort(v1.begin(),v1.end());
//         ll ansOverlap=0,resultOverlap=0;
//         for(auto it:v1){
//           resultOverlap+=it.second;
//           ansOverlap=max(ansOverlap,resultOverlap);
//         }
//         cout<<ansOverlap<<endl;
//-----------------------------------------------------------------------------------------------------------------------//
//circular dynamic chnages mei queueueuueueueueu use karne ka--------------------------------------------------------------//
//for(ll i=0;i<n;i++){cin>>array[i];}
//for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
int main() {
    Dracarys
    ll n,sum;cin>>n;
    vector<ll>a(n);
     ll k=n;
    for(ll i=0;i<n;++i)
    	cin>>a[i];

unordered_map<ll,ll>map1;
        // map1[0]=1;
        ll cnt=0,r=0,sum1=0;
        while(r<n){
            sum1+=a[r];
    
             if(sum1%k==0)cnt++;
             ll rem= sum1%k;
            if(rem<0)rem+=k;
          // cout<<rem<<endl;
            if(map1.find(rem)!=map1.end())
                 cnt+=map1[rem];
              map1[rem]++;
           
            r++;
            
        }
       cout<<cnt<<endl;
        //cin>>n;
        //cin>>s1;
        //ll a[n];
        //for(ll i=0;i<n;i++){cin>>a[i];}
        //vector<ll> v;
        //for(ll i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
        //vector<vector<ll>> v(n,vector<ll>(m,0));
        // for(ll i=0;i<n;i++){
        //     for(ll j=0;j<m;j++){
        //         cin>>a[i][j];
        //     }
        // }
        //unordered_map<ll,ll> mp;
        //for(ll i=0;i<n;i++){cin>>a[i];  mp[a[i]]++;}
        //for(ll i=0;i<n;i++){}
        
        
        
        //for(auto it:ans){cout<<it<<" ";}cout<<endl;
        // if(counter==1)cout<<"yes"<<endl;
        // else cout<<"No"<<endl;
    
    return 0;
}
