#include<stdio.h>

void my_initializer(int *param_1){
    *param_1=0;
}

int main(){
    int variable_a =12;
    printf("%d\n",variable_a);
    my_initializer(&variable_a);
    printf("%d\n",variable_a);
    return 0;
}
