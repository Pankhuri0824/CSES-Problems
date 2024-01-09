#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <map>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
 
 
    
    long long int moves=0;
 
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            long long int dif=0;
            dif=v[i]-v[i+1];
            v[i+1]+=dif;
            moves+=dif;
        }
    }
 
    cout<<moves;
 
 
}
