#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int odd_term=7;
  int even_term=5;
  cout<<odd_term<<" "<<even_term<<" ";
  for(int i=2;i<n;i++){
    if(i%2==0){
      odd_term++;
      cout<<odd_term<<" ";
    }
    else{
      even_term++;
      cout<<even_term<<" ";
    }
  }
}