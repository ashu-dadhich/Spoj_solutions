#include <iostream>
#include <vector>
#include <string>

using namespace std;

int prirority(char c){
  int p;
  if(c=='+'||'-'){
    p=1;
  }
  else if(c=='*'||'/'){
    p=2;
  }
  else{
    p=0;
  }
  return p;
}

int main(){
  int t_case;
  cin>>t_case;
  for(int i=0;i<t_case;i++){
    std::vector<char> v_digits;
    std::vector<char> v_sign;
    string str;
    cin>>str;
    int len=str.size();
    char c[len];
    for(int x=0;x<len;x++){
      c[x]=str[x];
    }
    for(int j=0;j<len;j++){
      if(c[j]=='+'||'-'||'*'||'/'||'('){
        int cp,pp=0;
        cp=prirority(c[j]);
        if(v_sign.size()!=0){
          pp=prirority(v_sign.back());
        }
        if(cp>pp || cp==pp==0){
          v_sign.push_back(c[j]);
        }
        else{
          while(pp>=cp){
            char t;
            t=v_sign.back();
            v_sign.pop_back();
            v_digits.push_back(t);
            pp=prirority(v_sign.back());
          }
          v_sign.push_back(c[j]);
        }
      }
      else if(c[j]==')'){
        char temp=v_sign.back();
        while(temp!='('){
          v_digits.push_back(temp);
          v_sign.pop_back();
          temp=v_sign.back();
        }
        v_sign.pop_back();
      }
      else{
        v_digits.push_back(c[j]);
      }
    }
    for(int k=0;k<len;k++){
      cout<<v_digits[i];
    }
  }
  return 0;
}
