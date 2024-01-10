
#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include<vector>
#include <map>
#include <unordered_map>
#include <climits>
 
using namespace std;
 
int main(){
    long long int n; //number 
    cin>>n;
    vector<long long int> v(n);
    map<long long int,long long int> m;
    
    for(long long int i=0;i<n;i++){
        cin>>v[i];
    }
 
    long long int i=0;
    long long int j=0;
    long long int best=0;
    long long int dif=0;
 
    while(i<n && j<n){
        if(m.find(v[j])==m.end() || m[v[j]]<i){ //not in seq
            m[v[j]]=j;
        }
        else{ // in seq(repeated ele)
            i=m[v[j]]+1;
            m[v[j]]=j;
        }
        dif=(j-i)+1;
        j++;
        best=max(best,dif);
 
    }
 
    cout<<best;
    return 0;
 
}
