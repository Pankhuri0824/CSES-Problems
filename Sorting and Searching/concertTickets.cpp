#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include<vector>
#include <map>
 
using namespace std;
 
int main(){
    int n,m; //tickets, people
    cin>>n>>m;
 
    multiset<int> ticket;
    vector<int> price;
 
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ticket.insert(a);
    }
 
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        price.push_back(a);
    }
 
    
    for(int i=0;i<m;i++){
        auto lb=ticket.upper_bound(price[i]);
        if(lb!=ticket.begin()){
                lb--;
                cout<<(*lb)<<endl;
                ticket.erase(lb);
            }
    
        else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}
