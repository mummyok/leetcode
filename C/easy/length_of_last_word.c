int lengthOfLastWord(char * str){

    if (!str) return 0;
    if (str[0] == '\0') return 0;
    
    int i = 0, last_non_sp = 0;
    int len = 0;
  
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            if (i && str[i-1] == ' ')
                last_non_sp = i;
            else if(i == 0 && str[i] != ' ')
                last_non_sp = i;
        }
        i++;
    }

    i--;
    while (i >= 0)
    {
        if (str[i] == ' ') i--;
        else break;
    }

    return i - last_non_sp + 1;
    
}
