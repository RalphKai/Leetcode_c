#include<stdio.h>
#include<math.h>
#include <string.h>
int gcd(int n1, int n2){
    if (n1 == 0) return n2;
    if (n2 == 0) return n1;

    if (n1 >= n2) return gcd(n1%n2, n2);
    if (n2 > n1) return gcd(n1, n2%n1);
    return 1;
}

int main(){
    char* ssss="1A 2F";
    int i = 0;
    printf("%d", strlen(ssss));
    for
    // while(str!="\0"){
    //     printf("%c", str[i]);
    //     i++;

    // }
  return 0;
}