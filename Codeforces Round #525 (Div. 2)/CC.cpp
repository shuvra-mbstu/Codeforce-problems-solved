#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num;
     cin>>num;
     int arr[num+7];
     for(int i=1;i<=num;i++)
     {
          cin>>arr[i];
          arr[i]+=800000;
     }
     cout<<num+1<<endl;
     cout<<"1 "<<num<<" 800000\n";
     for(int i=1;i<=num;i++)
     {
          int need=200000+i;
          cout<<"2 "<<i<<" "<<arr[i]-need<<endl;
     }
}
