#include <bits//stdc++.h>
using namespace std;
bool isprime(int n){
for(int i=3;i<n;i++){
    if(n%i==0)return false;
}
return true;
}
int main(){
cout<<"enter the number";
int n;
cin>>n;
if (n==2) {
    cout<<1<< 2;
    return 0;
}
vector<int>ans;
ans.push_back(1);
ans.push_back(2);
for(int i=3;i<n;i++)
if(isprime(i)){
    ans.push_back(i);
}
for(auto i :ans){
    cout<<i<<" ";
}
}
