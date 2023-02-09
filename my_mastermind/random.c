#include <stdlib.h>
#include <time.h>

int compare1(char* str, char c){
    int i = 0;
    while(str[i]){
        if(str[i] == c){
            return 0;
        }
        i++;
    }
    return 1;
}

char* generate(){
    srand(time(NULL));
    int i = 0 ;
    char* code = (char*)malloc(sizeof(char)*4);
    char c;
    while(i < 4){
        c = rand()%8 + '0';
        if(compare1(code, c) == 1){
            code[i++] = c;
        }
    }
    return code;
}