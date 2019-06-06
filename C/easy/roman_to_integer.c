/**************************************************************Method 1**************************************************************/
int getInteger(char singleRoman)
{
    int value = 0;
    switch(singleRoman)
    {
        case 'I':
            value = 1;
            break;
        case 'V':
            value = 5;
            break;
        case 'X':
            value = 10;
            break;
        case 'L':
            value = 50;
            break;
        case 'C':
            value = 100;
            break;
        case 'D':
            value = 500;
            break;
        case 'M':
            value = 1000;
            break;
    }
    
    return value;
}

int romanToInt(char * s){
    if(s == NULL)
    {
        return 0;
    }
    
    int sum = 0, i = 0;
    while(i<strlen(s))
    {
        if(getInteger(s[i+1]) > getInteger(s[i]))
        {
            sum += getInteger(s[i+1]) - getInteger(s[i]);
            i += 2;
        }
        else
        {
            sum += getInteger(s[i]);
            i += 1;
        }
    }
    
    return sum;
}
/**************************************************************Method 1**************************************************************/
