#include <stdio.h>
int main()//给for循环的建议：不可在for循环内内修改循环变量，防止for循环失去控制
                            //for语句的循环控制变量的取值采用“前闭后开区间”写法:i=0;i<10
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{


		if (i == 5)
			//	break;//只打印到四
			continue;//此时只跳过了5。

			printf("%d\n", i);
		/*	int j = 0;
			for(j=0;j<10;j++)
			{
				printf("haha");
			}*/


			/*for(;;)
			{
				int a = 0;
				a++;
				printf("hehe %d",a);
			}*/             //判断部分省略会导致一直循环，此时判断恒为真。初值，判断最好不要省略



			int i = 0;
			int k = 0;
			for (i = 0, k = 0; k = 0; i++, k++)
				k++;//问循环执行几次？？死循环or不循环？








			//判断部分为1个等号，不是判断，是赋值，0为假，所以不循环。



	}

















	return 0;
}























