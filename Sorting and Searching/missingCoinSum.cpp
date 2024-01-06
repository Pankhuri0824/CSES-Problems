#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include<vector>
#include <map>
#include <climits>
 
using namespace std;
 
int main(){
    long int n; //number 
    cin>>n;
    vector<long int> v1(n);
 
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    sort(v1.begin(),v1.end());
    long int sum=1;
    long int ans=0;
 
    for(int i=0;i<n;i++){
        if(v1[i]>sum){
            break;
        }
        else{
            sum+=v1[i];
        }
    }
    cout<<sum;
    return 0;
}
