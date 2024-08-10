#include <bits//stdc++.h>
using namespace std;
int main(){
     int ans=1;
     string eq;
     int y=0;
     vector<pair<string,string>>holder;
     cout<<"enter coeffiecient ";
     while(ans){
        string cof;
        cin>>cof;
        eq+=cof;
        eq+='x';
        eq+='^';
        eq+=to_string(y);
        eq+=" + ";
       holder.push_back({cof,to_string(y)});

        cout<<"wanna enter more ";
        cin>>ans;
        y++;
     }
     cout<<eq;
     string deri;
     cout<<"derivative is "<<endl;
     for(auto i:holder){
        cout<<i.first<<" "<<i.second<<endl;
     }
     for(auto i : holder){
          int first=stoi(i.first);
          int second=stoi(i.second);
          int newcof=first*second;
          deri+=to_string(newcof);
          deri+='x';
          deri+=to_string(second-1);
          deri+=" + ";
     }
     cout<<deri;

}
