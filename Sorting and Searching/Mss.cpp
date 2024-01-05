#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include<vector>
#include <map>
#include <climits>
 
using namespace std;
 
int main(){
    int n; //number 
    cin>>n;
    //using kadane algo
 
    long int sum=0;
    long int best=LONG_MIN;
 
    for(int i=0;i<n;i++){
        long int a;
        cin>>a;
        sum=max(sum+a,a);
        best=max(best,sum);
    }
 
    cout<<best;
 
    
    return 0;
}
