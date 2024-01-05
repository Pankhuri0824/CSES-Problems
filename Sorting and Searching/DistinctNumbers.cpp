#include <iostream>
#include <algorithm>
#include <string>
#include <set>
 
using namespace std;
 
int main(){
    int n;
    cin>> n;
    set<int> s1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s1.insert(a);
    }
    cout<<s1.size();
    return 0;
}
