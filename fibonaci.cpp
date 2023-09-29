#include <bits/stdc++.h>
using namespace std;

int x ;
int fibo(int n){
    if(n ==0 || n== 1 )return 1;
    
    int n2=fibo(n-1);
    int nx=fibo(n-2);

    return n2+nx;
}
int main(){

    cout<<fibo(3);
    return 0;
}