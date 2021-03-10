#include<stdio.h>
#include<math.h>

int gcd(int n1, int n2){
    if (n2 == 0)  
        return n1;  
    return gcd(n2, n1 % n2);  
}

int main(){
    
    int n1=5, n2=10;
    int gcd_ans = gcd(n1, n2);
    printf("%d\n", gcd_ans);

    return 0;
}