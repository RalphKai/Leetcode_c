#include<stdio.h>
#include<math.h>

int gcd(int n1, int n2){
    if (n1 == 0) return n2;
    if (n2 == 0) return n1;

    if (n1 >= n2) return gcd(n1%n2, n2);
    if (n2 > n1) return gcd(n1, n2%n1);
    return 1;
}

int main(){
    char c1 = 'a';
    char c2 = c1 + 10;
    printf("%c", c2);
    // int n1=0, n2=0;
    // int gcd_ans = gcd(n1, n2);
    // printf("%d\n", gcd_ans);

    // return 0;
}