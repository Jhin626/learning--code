#include <stdio.h>

int main() //特点：循环体至少循环一次
{
	//int i = 1;
	//do {
	//	     //  if (i == 5)
	//		//	break;//只打印1到4.
	//	//	continue;//死循环。

	//	printf("%d,", i);
	//	i++;
	//} while (i <= 10);


	//1.计算n的阶乘
	/*int i = 0;
	int n = 0;
	int ret = 1; int ans = 1;
	scanf_s("%d", &n);
							while (n > i)
							{
								i++;
								ans *= i;

		
							}printf("%d", ans);*/

												/*for (i = 1; i <= n; i++)
												{
													ret *= i;

												}
												printf("%d", ret);*/

			//2,求1！+...+10!


	/*	int i = 0;
		int n = 0;
		int ans = 1;
		 int sum = 0;
		 for (n = 1; n < 10; n++) {



	
				 while (n>i)
				 {
					 i++;
					 ans *= i;
			 

				 }

			 sum += ans;
		
		 } printf("%d", sum);*/
	//2:正确示范一

	int i = 0;
		int n = 0;
		 int sum = 0;
												//for (n = 1; n <= 10; n++) {

												//	int ret = 1;//计算前把ret的值清零为1.
												//	for (i = 1; i <= n; i++) {


												//		ret *= i;
												//	}
												//	sum += ret;

												//}
												//printf("%d", sum);


		//2:正确示范2//直接利用前一次的阶乘，一次循环即可实现效率更高。
		 int ret = 1;
				for (n = 1; n <= 3; n++) {
					ret *= n;
					sum += ret;

		}printf("%d", sum);




		return 0;
		}



