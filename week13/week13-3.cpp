///week13-3.cpp
#include <stdio.h>
 void printStar(int n)///因為void不送出所以不用return 0
 {
     for(int i=0;i<n;i++) printf("*");
 }
    int main()
    {
        printStar(7);
    }
