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
    long long int n;
    cin>>n;
    while(n!=1){
        cout<<n<<" ";
        if(n%2==0){
            n/=2;
        }
        else{
            n=(n*3)+1;
        }
    }
    
    cout<<1;
}
