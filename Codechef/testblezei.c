#include<stdio.h>
int main(){
    long long int n=1;
    while(n){
        n=0;
        scanf("%ld",&n);
        int sum=0;
        for(int i=0;i<32;i++){
            if(n&1<<i == 0){
                sum+=1<<j;
            }
        }
        print("%ld",n);
    }
    return 0;
}
