#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include<vector>
#include <map>
 
using namespace std;
 
int main(){
    int n; //people
    cin>>n;
    vector<pair<int,int>> v1;
 
    for(int i=0;i<n;i++){
        pair<int,int> p1;
        int a,b;
        cin>>a>>b;
        p1.first=a;
        p1.second=(1);
        v1.push_back(p1);
 
        p1.first=b;
        p1.second=(-1);
        v1.push_back(p1);
    }
 
    sort(v1.begin(),v1.end());
 
    int count=0;
    int maxi=0;
 
    for(int i=0;i<(2*n);i++){
        count+=v1[i].second;
        maxi=max(count,maxi);
    }
    
    cout<<maxi;
 
    return 0;
}
