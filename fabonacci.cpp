#include <iostream>

using namespace std;

int fab(int n, int& count){
    count++;
    if (n == 1||n==2) return 1;
    return fab(n - 1, count) + fab(n-2, count);
}


int main(){
    int n = 5;
    int count = 0;
    cout << fab(n,count) << endl;
    cout << count << endl;
    return 0;
}