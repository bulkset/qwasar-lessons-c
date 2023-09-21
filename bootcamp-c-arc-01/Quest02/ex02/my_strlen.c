#include <stdio.h>

int my_strlen(char* param_1)
{
    int length = 0;
    for (int i = 0; param_1[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

