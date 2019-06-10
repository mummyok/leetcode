char *longestCommonPrefix(char ** strs, int strsSize){
    int length=0;
    int flag=0;
    char *result=0;
    
    if (strsSize>1){
        for (int i=0;i<=strlen(strs[0]);i++){
            for (int j=1;j<=strsSize-1;j++){
                flag=0;
                if (strs[0][i]==strs[j][i]){
                    continue;                
                } else {
                    flag=1;
                    break;
                }//If
            }//Second for
            if (!flag){
                length+=1; //Gone thruogh one iteration
            }else {
                break;
            }

        }//For loop

        if (length>=1){
            result = (char*)malloc(sizeof(char)*length+1);
            memcpy(result,strs[0],(sizeof(char)*length));
            result[length]='\0';
            return result;
        }
    } else if (strsSize==1 && strs[0]!='\0'){
        result = strs[0];
        return result;
    }

    return ;
    //return NULL;
    //return "";
}
