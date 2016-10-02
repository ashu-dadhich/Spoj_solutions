#include <iostream>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
  char *p=(char*) malloc(6);
  *p="ashu";
  while(*p!=0){
    cout<<*p<<endl;
    p++;
  }
}
