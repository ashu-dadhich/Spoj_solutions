#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  int column;
  while(cin>>column){
    if(column==0){
      break;
    }
    else{
      string e_msg;
      cin>>e_msg;
      int len=e_msg.size();
      int rows=len/column;
      char temp[rows][column];
      int x=0;
      for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
          temp[i][j]=e_msg[x];
          x++;
        }
      }
      char temp1[rows][column];
      for(int i=0;i<rows;i++){
        if(i%2==0){
          for(int j=0;j<column;j++){
            temp1[i][j]=temp[i][j];
          }
        }
        else{
          int k=column-1;
          for(int j=0;j<column;j++){
            temp1[i][j]=temp[i][k];
            k--;
          }
        }
      }
      for(int i=0;i<column;i++){
        for(int j=0;j<rows;j++){
          cout<<temp1[j][i];
        }
      }
      cout<<endl;
    }
  }
  return 0;
}
