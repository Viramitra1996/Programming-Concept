#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n = 5, len;
    char *s[5], temp[20], *t;
    printf("Enter names: \n");
    for(int i = 0; i < n; i++){
        scanf("%s", temp);
        len = strlen(temp);
        s[i] = (char*)malloc(sizeof(char) * len + 1);
        strcpy(s[i], temp);
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(strcmp(s[i], s[j]) > 0){
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }
    for(int i = 0; i < n; i++) printf("%s\n",s[i]);
    for(int i = 0; i < n; i++) free(s[i]);
    return 0;
}
