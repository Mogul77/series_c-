#include<iostream>
using namespace std;
int main(){
  int n,sum=3,t=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<t<<" ";
    t+=sum;
    sum+=2;
  }
}