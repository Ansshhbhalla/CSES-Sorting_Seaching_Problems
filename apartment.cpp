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
//for(int i=0;i<n;i++){cin>>array[i];}
//for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
int main() {
    Dracarys
    
        ll n,m,k, counter = 0;
        string s1,t1;
        cin>>n>>m>>k;
        //cin>>>s1;
        ll a[n],b[m];
        set<ll> s;
        for(int i=0;i<n;i++){cin>>a[i];}
        for(int i=0;i<n;i++){cin>>b[i];}
        //vector<ll> v;
        //for(int i=0;i<n;i++){ll x; cin>>x; v.push_back(x);}
        //vector<vector<ll>> v(n,vector<ll>(m,0));
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cin>>a[i][j];
        //     }
        // }
        //unordered_map<ll,ll> mp;
        //for(int i=0;i<n;i++){cin>>a[i];  m[a[i]]++;}
        //for(int i=0;i<n;i++){}
//         Input:
sort(a,a+n);
sort(b,b+m);
// 4 3 5
// 60 45 80 60
// 30 60 75
ll i=0,j=0;
        while(i<n && j<m){
             if(a[i]>=b[j]){
                if(abs(a[i]-b[j])<=k){
                   i++;
                   j++;
                    counter++;
                }
                else{
                    j++;
                }  
             }
             else{
                if(abs(a[i]-b[j])<=k){ 
                   i++;
                   j++;
                   counter++;
                }
                else{
                    i++;
                }  
             }
        }
        cout<<counter<<endl;
        
        //for(auto it:ans){cout<<it<<" ";}cout<<endl;
        // if(counter==1)cout<<"yes"<<endl;
        // else cout<<"No"<<endl;
    
    return 0;
}