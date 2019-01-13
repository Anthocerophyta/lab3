#include<iostream>
using namespace std;

int main(){
    float ans=0, n=6;

    while(n<=19){
        ans=1/n+ans;
        n++;
    }
    cout<<ans;
    return 0;
}