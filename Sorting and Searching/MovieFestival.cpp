#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include<vector>
#include <map>
 
using namespace std;
 
int main(){
    int n; //number of movies
    cin>>n;
    vector<pair<int,int>> v1;
 
    for(int i=0;i<n;i++){
        pair<int,int> p1;
        int a,b;
        cin>>a>>b;
        p1.first=b; //ending time
        p1.second=a; //starting time
        v1.push_back(p1);
 
    }
 
    sort(v1.begin(),v1.end());
 
int maxi = 1;
    int lastEndTime = v1[0].first;
 
    for (int i = 1; i < n; i++) {
        if (v1[i].second >= lastEndTime) {
            // Non-overlapping interval found
            maxi++;
            lastEndTime = v1[i].first;
        }
    }
 
    cout << maxi;
 
    return 0;
}
