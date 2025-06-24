#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int t=6,d=3;
  for(int i=0;i<n;i++){
    cout<<t<<" ";
    t=t+d;
    d=d+2;
  }
}