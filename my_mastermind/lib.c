#include <stdio.h>
int compare(char* str, char c){
    int i = 0;
    while(str[i]){
        if(str[i] == c){
            return 0;
        }
        i++;
    }
    return 1;
}

int s_strlen(char* str){
    int i = 0 ;
    while(str[i++]);
    return i-1;
}
int cmp(char* p1, char* p2)
    {
        if(s_strlen(p1)!= s_strlen(p2))
        { 
            return 0;
        }
        if(p1[1] == p2[1])
        {
            return 1;
        }
       return 0;
    }