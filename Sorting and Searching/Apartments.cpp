#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include<vector>
 
using namespace std;
 
int main(){
    int n,m,k; //peoplelicants, apartments, diff
    cin>>n>>m>>k;
    vector <int> people;
    vector <int> app;
 
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        people.push_back(a);
    }
 
    for(int i=0;i<m;i++){
        int b;
        cin>>b;
        app.push_back(b);
    }
 
    sort(people.begin(),people.end()); //people's choice sizes sorted : TARGET
    sort(app.begin(),app.end()); //apartments and sizes sorted
 
 
    int l=0;
    int r=0;
    int success=0;
    //l is for people and r is for apartments
    while(l<n && r<m){
        if(app[r]< people[l]-k) r++;
        else if(app[r]> people[l]+k) l++;
        else{
            l++;
            r++;
            success++;
        }
    }
 
    cout<<success;
    
    return 0;
}
