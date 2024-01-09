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
    long long int n; //number of array
    long long int q; //number of queries 
    cin>>n>>q;

    vector<long long int> v(n);
    vector<long long int> sum(n);
    long long int s=0;

    for(long long int i=0;i<n;i++){
        cin>>v[i];
        s+=v[i];
        sum[i]=s;
    }

    long long int ans;
    for(long long int i=0;i<q;i++){
        long long int a,b;
        cin>>a>>b;
        a--; b--;
        if(a==0){
            ans=sum[b];
        }
        else{
            ans=sum[b]-sum[a-1];
        }

        cout<<ans<<endl;
    }
    return 0;

}
