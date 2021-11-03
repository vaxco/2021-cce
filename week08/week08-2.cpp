///wekk08-2.cpp step02-1
#include <stdio.h>
int main()
{   ///質數:只能被1和n本身整除
    ///反話:只要有其他可以整除就不是質數
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) bad=1;
    }
    if(bad==0) printf("%d是質數",n);
    else printf("%d不是質數",n);
}
