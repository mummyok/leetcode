int strStr(char* haystack, char* needle) {
    
    int len_hay = strlen(haystack);
    int len_needle = strlen(needle);
    int i, j;
    int flag = 0;
    
    if (needle[0] == '\0') {return 0;}
    
    for(i = 0; i <= len_hay - len_needle; i++){
        
        if (haystack[i] == needle[0]){
            
            flag = 1;
            
            for (j = 1; j < len_needle; j++){
                
                if(haystack[i+j] == needle[j]) {flag = 1;}
                else{flag = 0; break;}
            }
            
        }
            
        
        if(flag) {return i;}
        
    }
    
    return -1;
        
}
