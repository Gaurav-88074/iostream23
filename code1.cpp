
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int cherryBiscut(vector<int> &a,int n,int k){
    int ans = 0;
    for(int i=0;i<n ; i++ ){
        if(a[i]>k){
            ans+=1;
        }
    }              
    return ans;  
}

int main()
{
    
    return 0;
}