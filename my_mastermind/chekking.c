int s_strlen2(char* str){
    int i = 0 ;
    while(str[i++]);
    return i-1;
}

int checking(char* code){
    if(s_strlen2(code) != 4) return 0;
    int i = 0 ;
    while(code[i]){
        if(code[i] >= '9' || code[i] <= '0') return 0;
        i++;
    }
    i=0;
    while(code[i]){
        int j = i+1;
        while(code[j]){
            if(code[i] == code[j]){
                return 0;    
            }
            j++;
        }
        i++;
    }
    return 1;
}
