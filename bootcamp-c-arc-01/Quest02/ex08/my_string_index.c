#include <stdio.h>
int my_string_index(char* param_1, char param_2) {
    int index = -1;
    int i = 0;
    
    
    for(i = 0; param_1[i] != '\0';i){
        if(param_1[i] == param_2){
            index = i;
            break;
        }
        i++;
    }
    
    return index;
}
