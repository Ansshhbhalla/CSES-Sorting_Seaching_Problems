//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    long long int findSubArraySum(long long int Arr[], long long int N, long long int k)
    {
        // code here
        long long int i=0,j=0,ans=0,now=0,start=0;
        // while(i<n){
        //  while(now>k  && start<n){
        //      now-=arr[i];
        //      start++;
        //  }   
        //  if(now==k){
        //      ans++;
        //      now=0;
        //      start=0;
        //  }
        //  if(i<n){
        //      now+=arr[i];
        //      i++;
        //  }
        
        // }
        // return ans;
    map<long long int, long long int> prevk;
     
        long long int res = 0;
     
        // k of elements so far.
        long long int currk = 0;
     
        for (long long int i = 0; i < N; i++) {
     
            // Add current element to k so far.
            currk += Arr[i];
     
            // If currk is equal to desired k,
            // then a new subArray is found. So
            // increase count of subArrays.
            if (currk == k)
                res++;
     
            // currk exceeds given k by currk
            //  - k. Find number of subArrays having
            // this k and exclude those subArrays
            // from currk by increasing count by
            // same amount.
            if (prevk.find(currk - k) != prevk.end())
                res += (prevk[currk - k]);
     
            // Add currk value to count of
            // different values of k.
            prevk[currk]++;
        }
        return res;
    
    }
};


//{ Driver Code Starts.
 int main()
{
   
        long long int N;
        cin >> N;
        long long int k;
        cin>>k;
        long long int Arr[N];
        for(long long int i=0;i<N;i++)    
            cin>>Arr[i];
        
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    
    return 0;
}
// } Driver Code Ends