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
    multiset<int> m1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(m1.upper_bound(a)!=m1.end()){//upper bound element exists
            auto it=m1.upper_bound(a);
            m1.erase(it); //remove base element that is the upper bound
        }
        m1.insert(a); // add new base 
    }
    
    cout<<m1.size();
}
