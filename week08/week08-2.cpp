///wekk08-2.cpp step02-1
#include <stdio.h>
int main()
{   ///���:�u��Q1�Mn�����㰣
    ///�ϸ�:�u�n����L�i�H�㰣�N���O���
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) bad=1;
    }
    if(bad==0) printf("%d�O���",n);
    else printf("%d���O���",n);
}
