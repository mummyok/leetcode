=============================================================================================
//Method 1
void string_reverse(char *s) {
    int len = strlen(s);
    for (int i = 0; i < len/2; i++) {
        char temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }
}

int reverse(int x){
    int length = snprintf(NULL, 0, "%d", x);
    char *str = malloc(length + 1);
    snprintf(str, length + 1, "%d", x);
    string_reverse(str);
    if ((x > 0 && atol(str) > INT_MAX) || (x < 0 && -atol(str) < INT_MIN)) {
        return 0;
    }
    return x >= 0 ? atoi(str) : -atoi(str);
}

=============================================================================================
//Method 2
typedef long long int64;

int reverse(int x){
    int64 result = 0;
    
    while(x) {
        result *= 10;
        result += x % 10;
        x /= 10;
    }
	
    if(result > 2147483647 || result < -2147483647)
        return 0;
    
    return result;
}
=============================================================================================

=============================================================================================
=============================================================================================
