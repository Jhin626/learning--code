#include <stdio.h>

int main() //�ص㣺ѭ��������ѭ��һ��
{
	//int i = 1;
	//do {
	//	     //  if (i == 5)
	//		//	break;//ֻ��ӡ1��4.
	//	//	continue;//��ѭ����

	//	printf("%d,", i);
	//	i++;
	//} while (i <= 10);


	//1.����n�Ľ׳�
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

			//2,��1��+...+10!


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
	//2:��ȷʾ��һ

	int i = 0;
		int n = 0;
		 int sum = 0;
												//for (n = 1; n <= 10; n++) {

												//	int ret = 1;//����ǰ��ret��ֵ����Ϊ1.
												//	for (i = 1; i <= n; i++) {


												//		ret *= i;
												//	}
												//	sum += ret;

												//}
												//printf("%d", sum);


		//2:��ȷʾ��2//ֱ������ǰһ�εĽ׳ˣ�һ��ѭ������ʵ��Ч�ʸ��ߡ�
		 int ret = 1;
				for (n = 1; n <= 3; n++) {
					ret *= n;
					sum += ret;

		}printf("%d", sum);




		return 0;
		}



