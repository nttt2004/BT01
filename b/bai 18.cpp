#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x1, x2, y1, y2;
    cin>>x1>>x2>>y1>>y2;
    cout<<sqrt((x1-y1)*(x1-y1)+(x2-y2)*(x2-y2));
    return 0;
}
