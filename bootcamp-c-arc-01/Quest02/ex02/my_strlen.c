#include <stdio.h>

int my_strlen(char* param_1)
{
    int count = 0;
    while (*param_1 != '\0') {
        count++;
        param_1++;
    }
    return count;
}
