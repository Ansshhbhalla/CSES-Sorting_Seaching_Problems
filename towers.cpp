#include <bits/stdc++.h>
#include <deque>
#include<algorithm>
using namespace std;
using ll = long long;
#define pb push_back
#define eb emplace_back
#define fi first
#define Dracarys ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define se second
#define f(i, a, b) for (i = a; i < b; i++)
    #define rep(i, n) for (i, 0, n)
        #define fd(i, a, b) for (i = a; i >= b; i--)
            #define vi vector < int >
            #define vl vector < ll >
            #define mi map < int, int >
            #define ml map < ll, ll >
            const int hell = 1000000007;
//--------------------------------------------------//
//--code from *ansh*--//
//--------------------------------------------------// 
void showdq(deque < int > g)
{
    deque < int > ::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << * it;
    cout << '\n';
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
unsigned countBits(unsigned int number)
{
    return (int) log2(number) + 1;
}
void counterint(int x) {
    if (x > 0) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
}
void counterll(ll x) {
    if (x > 0) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
}
int countDistinct(int arr[], int n)
{
    // Creates an empty hashset
    unordered_set < int > s;

    // Traverse the input array
    int res = 0;
    for (int i = 0; i < n; i++) {

        // If not present, then put it in
        // hashtable and increment result
        if (s.find(arr[i]) == s.end()) {
            s.insert(arr[i]);
            res++;
        }
    }

    return res;
}
//------------------------------------------code for multi set owerbound dynamic changing-------------------------------//
// multiset<int ,greater<int>> s;
//         for(int i=0;i<n;i++){s.insert(a[i]);}
//         for(int i=0;i<m;i++){
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
//         for(int i=0;i<n;i++){
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
//for(int i=0;i<n;i++){cin>>array[i];}
//for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
int main() {
    Dracarys
   
        ll n, counter = 1;
        string s1,t1;
        cin>>n;
        //cin>>s1;
        ll a[n],b[n];
        for(int i=0;i<n;i++){cin>>a[i]; b[i]=a[i];}
        vector<ll> v;
        //------------------------------by mutli set----------------------------------------//
    multiset<int>s;
    for(int i=0;i<n;++i)
    {
    	
    	auto it=s.upper_bound(a[i]);
    	//cout<<*it<<endl;
    	if(it==s.end())s.insert(a[i]);
    	else
    	{
    		s.erase(it);
    		s.insert(a[i]);
	}
    }
    cout<<s.size()<<endl;
        //for(int i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
        //vector<vector<ll>> v(n,vector<ll>(m,0));
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cin>>a[i][j];
        //     }
        // }
        //------------this only workSSfor permutation array FOR reference cses problem collectnumber1 and 2-----------//
        // sort(b,b+n);
        // unordered_map<ll,ll> mp;
        // for(int i=0;i<n;i++){ mp[b[i]]=i;}
        // for(int i=0;i<n;i++){v.push_back(mp[a[n-i-1]]);}
        // for(auto it:v){cout<<it<<" ";}cout<<endl;
        // for(int i=0;i<n-1;i++){
        //      if(v[i+1]<=v[i]) counter++;
        // }
        
        // cout<<counter<<endl;
        //for(auto it:ans){cout<<it<<" ";}cout<<endl;
        // if(counter==1)cout<<"yes"<<endl;
        // else cout<<"No"<<endl;
    
    return 0;
}