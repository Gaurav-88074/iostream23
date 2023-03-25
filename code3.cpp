
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;


int main(){
    int n;
    cin>>n;

    int m;
    cin>>m;

    int number_matching = 0;
    for(int i =1;i<m ; i++){
        number_matching += (i*n % m==0);
    }

    cout<<m-1-number_matching<<endl;
    return 0;
}