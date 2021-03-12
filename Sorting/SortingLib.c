#include "stdlib.h"
#include "stdio.h"

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// 2021.03.12
void BubbleSort(int* arr, int len){   
    for (int i = 0; i<len; i++)
        for (int j = i+1; j < len; j++){
            if (arr[i]>=arr[j]) 
                swap(&arr[i], &arr[j]);
        }
}



int main(){
    int test_arr[5] = {3,2,1,4,5};

    BubbleSort(test_arr, 5);
    

    int* t = test_arr;
    for (int i = 0; i < 5; i++) printf("%d\n", *t++);

    return 0;
}