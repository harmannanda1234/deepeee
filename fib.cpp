#include<bits/stdc++.h>

using namespace std;

//basic recursive approach:

int fibo(int n){
    if(n<=1){
        return n;
    }

    return fibo(n-1)+fibo(n-2);
}

// int main(){
//     int n;
//     cout<<"enter number"<<endl;
//     cin>>n;
//     cout<<endl<<"your answer is:"<<fibo(n-1);
//     return 0;
// }


//dp approach memoization { ismien we store previous answers}

int dpf(int n , vector<int>&dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=dpf(n-1,dp)+dpf(n-2,dp);
}

int main(){
    int n =5;
    vector<int> dp(n+1,-1);

    cout<<"answer is :"<<dpf(n-1,dp);
    return 0;

}
//tabulation