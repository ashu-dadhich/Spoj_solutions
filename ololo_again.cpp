#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  long int t_case;
  //cin>>t_case;
  scanf("%ld", &t_case);
  long long int c=0;
  //int flag=0;
  for(long int i=0;i<t_case;i++){
    long long int n;
    //cin>>n;
    scanf("%lld", &n);
    c=(c^n);
  }
  //cout<<c<<endl;
  printf("%lld\n", c);
}
