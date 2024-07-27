#include <bits//stdc++.h>
using namespace std;
int main(){
vector<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    int avg=0;
    for(auto i : a){
        avg+=i;
    }
    cout<<avg/(a.size());


    return 0;}
