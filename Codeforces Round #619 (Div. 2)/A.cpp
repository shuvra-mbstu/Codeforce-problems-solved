#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
int main(){
     string st1,st2,st3;
     int test;
     cin>>test;
     while(test--){
          cin>>st1>>st2>>st3;
               int len=st1.size();
               FOR(i,0,len){
                    if(st1[i]==st3[i])swap(st2[i],st3[i]);
                    else swap(st1[i],st3[i]);
               }
               if(st1==st2)cout<<"YES\n";
               else cout<<"NO\n";
     }
}
