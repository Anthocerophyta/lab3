#include<iostream>
using namespace std;

int main(){
    float ans=0, n=2;

    while(n<=69){
        ans=1/n+ans;
        n++;
    }
    cout<<ans;
    return 0;
}