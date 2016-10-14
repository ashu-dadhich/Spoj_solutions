#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    ostringstream ostr;
    ostr<<a;
    string sa=ostr.str();
    ostringstream bstr;
    bstr<<b;
    string sb=bstr.str();
    reverse(sa.begin(),sa.end());
    reverse(sb.begin(),sb.end());
    int va=atoi(sa.c_str());
    int vb=atoi(sb.c_str());
    int sum;
    sum=va+vb;
    ostringstream sstr;
    sstr<<sum;
    string ssum=sstr.str();
    reverse(ssum.begin(),ssum.end());
    int rsum=atoi(ssum.c_str());
    cout<<rsum<<endl;
  }
}
