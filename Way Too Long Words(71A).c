#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int b;
        char a[100];
        scanf("%s",&a);
        b=strlen(a);
        if(b>10){
            printf("%c%d%c\n",a[0],b-2,a[b-1]);
        }
        else{
            printf("%s",a);
        }
    }
    return 0;

}
