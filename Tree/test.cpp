#include<iostream>
using namespace std;

typedef struct testNode testNode;
struct testNode{
    testNode* next;
    int val;
};


int main(){
    
    for (int i = 0 ; i < 10000000 ; i++){
        testNode* t = (testNode*) malloc(sizeof(testNode));

        
        cout<< "t's val:" << t->val<<endl;
        delete(t);

    }
    
    

    return 0;
}