#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int t_case;
  cin>>t_case;
  for(int i=0;i<t_case;i++){
    long int n;
    cin>>n;
    long int sum=0,count=0,t;
    for(long int j=1;j<n;j++){
      sum+=j;
      if(sum>=n){
        t=sum-j;
        break;
      }
      count+=1;
    }
    long int temp=count+1;
    if(count%2!=0){
      long int num=1,denom=temp,counter=abs(n-t)-1;
      for(long int k=0;k<counter;k++){
        num+=1;
        denom-=1;
      }
      cout<<"TERM "<<n<<" IS "<<num<<"/"<<denom<<endl;
    }
    else{
      long int num=temp,denom=1,counter=abs(n-t)-1;
      for(long int k=0;k<counter;k++){
        num-=1;
        denom+=1;
      }
      cout<<"TERM "<<n<<" IS "<<num<<"/"<<denom<<endl;
    }
  }
}
