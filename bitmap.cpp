#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(){
  std::vector<int> v1;
  std::vector<int> v2;
  int t_case;
  cin>>t_case;
  for(int z=0;z<t_case;z++){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    std::vector<int> result;
    string s;
    for(int i=0;i<n;i++){
      cin>>s;
      for(int j=0;j<m;j++){
        char c=s[j];
        int t = c - 48;
        //cin>>a[i][j];
        a[i][j]=t;
        if(a[i][j]==1){
          v1.push_back(i+1);
          v2.push_back(j+1);
        }
      }
    }

    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(a[i][j]==1){
          result.push_back(0);
        }
        else{
          int min=183*183;
          for(int k=0;k<v1.size();k++){
            int temp=abs(v1[k]-(i+1))+abs(v2[k]-(j+1));
            if(temp<min){
              min=temp;
            }
          }
          result.push_back(min);
        }
      }
    }

    for(int i=0;i<result.size();i++){
      cout<<result[i]<<" ";
      if((i+1)%m==0){
        cout<<endl;
      }
    }
    //cout<<endl;
  }
  return 0;
}
