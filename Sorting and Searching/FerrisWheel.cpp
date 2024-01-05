#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include<vector>
 
using namespace std;
 
int main(){
    int n,x; //peoplelicants, apartments, diff
    cin>>n>>x;
    vector<int> v1;
 
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    
    sort(v1.begin(),v1.end());
    int l=0;
    int r=n-1;
    int total=0;
 
    while(l<=r){
        int sum=v1[l]+v1[r];
        if(l==r){
            total++;
            l++;
            r--;
        }
        else if(sum<=x){
            l++;
            r--;
            total++;
        }
        else if(sum>x){
            r--;
            total++;
        }
    }
 
    cout<<total;
 
    return 0;
}
