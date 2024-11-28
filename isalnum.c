#include <stdio.h>
int isalnum(int c){
    if(c >= 'a' && c <= 'z' || c >= '0' && c <= '9'){
        return 1;
    }
    else{
        return 0;
    }

    }
    int main(){
        char arg = '5';
        int yy = isalnum(arg);
        printf("the arg is :%d", yy);
    }