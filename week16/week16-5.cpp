#include <stdio.h>
char line[300]="10101010101010001100100101100";
int main()
{
    int ans=0;


    for(int i=0;line[i]!='\0';i++){
        if(line[i]=='1')ans++;


    }
    printf("��%d��1\n",ans);
}

