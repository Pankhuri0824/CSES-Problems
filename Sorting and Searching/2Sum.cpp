#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include<vector>
#include <map>
 
using namespace std;
 
int main(){
    int n,t; //number of movies
    cin>>n>>t;
    vector<pair<int,int>> v1;
 
    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1.push_back({a,i+1});
    }
 
    int l=0;
    int r=n-1;
    int sum;
    int yes=0;
 
    sort(v1.begin(),v1.end());
 
    while(l<r){
        sum=v1[r].first+v1[l].first;
        if(sum==t){
            cout<<v1[l].second<<" "<<v1[r].second;
            yes=1;
            l++;
            r--;
            break;
        }
        else if(sum<t){
            l++;
        }
        else if(sum>t){
            r--;
        }
    }
 
    if(yes==0){
        cout<<"IMPOSSIBLE";
    }
 
    
    return 0;
}
