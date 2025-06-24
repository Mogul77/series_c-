#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int t1=1,t2=2,next;
  cout<<t1<<" "<<t2<<" ";
  for(int i=2;i<n;i++){
    next=t1+t2;
    cout<<next<<" ";
    t1=t2;
    t2=next;
  }
}