
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int possTasks(int n,int a,int b,vector<int> &c){
    if(a+b > n){
        return 0;
    }
    else{
        sort(c.begin(),c.end());
        int ans = c[n-a] - c[b-1];
        return ans;
    }
}

int main(){
    
    return 0;
}