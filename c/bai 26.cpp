#include<iostream>
using namespace std;

int main(){
  int N;
  cin>>N;
  int a[100];
  int sum=0;
  for(int i=0; i<N; i++){
    cin>>a[i];
    sum+=a[i];
  }
  int min=a[0];
  int max=a[0];
  for(int i=0; i<N; i++){
    if(a[i]>max) max=a[i];
    if(a[i]<min) min=a[i];
  }
  cout<<"Mean: "<<sum/N<<endl;
  cout<<"Max: "<<max<<endl;
  cout<<"Min: "<<min;
  return 0;
}
