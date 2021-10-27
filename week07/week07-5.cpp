///Week07 step03-1
///了解for(迴圈)
#include <stdio.h>
int main()
{
    int i; ///1973年的C發明者的寫法1989年ANSI C規則
    for(i=0;i<=3;i++){
        printf("有幾次呢?\n");
    }
    ///1998/1999新版的C++/C寫法
    for(int i=0;i<3;i++){
        printf("老師推薦的寫法,有幾次?\n");
    }///會跑3次
}
