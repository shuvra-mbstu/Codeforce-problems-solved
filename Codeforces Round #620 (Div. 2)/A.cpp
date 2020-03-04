#include<bits/stdc++.h>
using namespace std;
int main(){
int test, num1,num2,num3,num4;
cin>>test;
while(test--){
     cin>>num1>>num2>>num3>>num4;
     int val=abs(num1-num2);
     if(val%(num3+num4)==0){
          cout<<val/(num3+num4)<<endl;
     }
     else cout<<"-1\n";
}
}
