#include <iostream>

using namespace std;

int main(){
  int t_case;
  cin>>t_case;
  for(int i=0;i<t_case;i++){
    long long int x,y,z;
    cin>>x>>y>>z;
    long long int a,d,terms;
    terms=2*z/(x+y);
    d=((y-x)/(terms-6));
    a=x-2*d;
    cout<<terms<<endl;
    //cout<<a<<endl<<d<<endl;
    for(long long int n=0;n<terms;n++){
      cout<<a+(n*d)<<" ";
    }
    cout<<endl;
  }
}
