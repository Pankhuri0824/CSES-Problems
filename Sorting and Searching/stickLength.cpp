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
    vector<long int> v1;
    long int cost=0;
    long int sum=0;
 
    for(long int i=0;i<n;i++){
        long long int a;
        cin>>a;
        sum+=a;
        v1.push_back(a);
    }
 
    long int med=0;
    sort(v1.begin(),v1.end());
 
    if (n % 2 == 0) {
    med = (v1[n / 2 - 1] + v1[n / 2]) / 2;
} else {
    med = v1[n / 2];
}
 
 
    long int dif=0;
    for(long int i=0;i<n;i++){
        dif=abs(v1[i]-med);
        cost+=dif;
    }
 
 
    cout<<cost;
 
    
    return 0;
}
