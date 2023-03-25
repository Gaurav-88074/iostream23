
#include<cstdio>
#include<algorithm>
#include<set>

using namespace std;

typedef long long llint;

const int MAXN =  300100;

int N,K;

pair<int,int> jewelry[MAXN];

multiset<int> M;

bool cmp(const pair<int,int> &A,const pair<int,int> &B){
    if(A.second!=B.second){
        return A.second > B.second;
    }
    return A.first < B.first;
}

int main(int argc, char const *argv[]){
    
    scanf("%d%d",&N,&K);
    for (int i = 0; i < K; i++){
        int x ; 
        scanf("%d",&x);
        M.insert(x);
    }

    llint   ans = 0;

    for (int i = 0; i < N; i++){
        if(M.empty()){
            break;
        }
        if(M.lower_bound(jewelry[i].first)!=M.end()){
            ans+=jewelry[i].second;
            M.erase(M.lower_bound(jewelry[i].first));
        }
    }
    printf("%lld\n",ans);
    
    
    return 0;
}
