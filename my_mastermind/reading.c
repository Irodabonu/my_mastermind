#include <stdlib.h>
#include <unistd.h>
char* reading(){
    int is;
    char temp;
    int i = 0;
    char* buffer = (char*)malloc(sizeof(char)*100);
    while ((is = read(0, &temp, 1))) {
        if(temp == '\n'){
            return buffer;
        }
        else{
            buffer[i++] = temp;
        }
    }
    return NULL;
}