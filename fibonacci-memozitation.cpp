#include <bits/stdc++.h>
using namespace std;
const int E= 1e5+5;
int save[E]={-1};
int x ;
int fibo(int n){
    if(n ==0 || n== 1 )return 1;
    //memoization
    if(save[n] != -1){
        return save[n];
    }
    int n2=fibo(n-1);
    int nx=fibo(n-2);
    save[n] = n2+nx;
    return save[n];
}
int main(){
    for (int i = 0; i <=10; i++)
    {
        save[i]=-1;
    }
    
    cout<<fibo(3);
    return 0;
}