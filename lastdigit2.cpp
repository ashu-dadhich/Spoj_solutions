#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int a[]={0,1,4,4,2,1,1,4,4,2};
  int t;
  cin>>t;
  for(int j=0;j<t;j++){string x;long long int i;cin>>x>>i;
      char c=x.back();
      int b=c-48;
      int l=b%10;
      if(i==0){
        cout<<"1\n";
        continue;
      }else if(l==0){
        cout<<"0\n";
        continue;
      }else if(a[b]==1){
        cout<<b<<endl;
        continue;
      }else{
          int r=i%a[l];
          if(r==0){
            r=pow(l,a[l]);
            cout<<r%10<<endl;
            continue;
      }r=pow(l,r);
          cout<<r%10<<endl;
      }
  }
}
