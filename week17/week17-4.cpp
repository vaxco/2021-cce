#include <stdio.h>
int f(int N)
{   ///Step04�g�X�@�Ө禡
	int sum=0;///Step02�[�_��
	while(N>0){///Step02 �j��,���
		sum+=N%10;///Steop01 N%10�l�� Step03�[
		N=N/10; ///Step01 N/10���k Step02�ܤp
	}
	return sum;///Step03


}
int main()
{
	int N;
	while(scanf("%d",&N)==1){///Steop06Ū���
		if(N==0)break;///Steop06:while�tbreak
		int ans=f(f(f(N)));///Step05�h�s�X��
		printf("%d\n",ans);
	}


}
