int s_strlen3(char* str){
    int i = 0 ;
    while(str[i++]);
    return i-1;
}
int is_missplaced(char* code, char* input)
{
    int missed = 0;
    for(int i = 0; i< s_strlen3(code); i++)
    {
        for(int j =0; j < s_strlen3(input); j++)
        {
            if(code[i] == input[j] && i != j)
            {
                missed++;
            }
        }
    }
    return missed;
}
int is_wellplaced(char* code, char* input)
{
    int well =0;
    for(int i = 0; i < s_strlen3(code); i++)
    {
        if(code[i]== input[i])
        {
            well++;
        } 
    }
    return well;
}