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


	
	
	
			//3.在一个有序数组中查找具体的某个数字。二分法

		 int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
		 int k = 7;
		 //在arr中寻找k(7)
		 
		 int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
		 int left = 0;//左下标
		 int right = sz - 1;//右下标
		

		 while (left<=right)
		 {
			 int mid = (left + right) / 2;
			 if (arr[mid] < k)
			 {
				 left = mid + 1;
				 int mid = (left + right) / 2;

			 }
			 else if (arr[mid] > k)
			 {
				 right = mid - 1;

			 }
			 else {
				 printf("找到了,下标是： %d",arr[mid]);//
				 break;
			 }

			 if(left>right)
			 {
				 printf("找不到了");
			 }
		 }


	
	
	////4.演示多个字符从两端移动，从中间汇聚。
	//char arr1[] = "welcome to bit!!!!!!";
	//char arr2[] = "####################";
	//int left = 0;
	//int right = strlen(arr1) - 1;

	//while (left<=right)
	//{

	//arr2[left] = arr1[left];
	//arr2[right] = arr1[right];
	//printf("%s\n", arr2);
	//Sleep (1000);//休眠1秒
	//system("cls");//清空屏幕
	//left++;
	//right--;


 //     }
	//printf("%s\n", arr2);



	////5.模拟用户登录情景，并且智能登录三次。（只允许输入三次密码，如果密码正确则提示登录成功，若三次均错误，则退出程序）

	//int i = 0;
	////假设正确的密码是字符串“123456”
	//char password[20] = { 0 };
	//for (i = 0; i < 3; i++)
	//{
	//	printf("请输入密码：>");
	//	scanf("%s", password);

	//	if (strcmp(password, "123456")==0)//两个字符串的比较不能使用==，要用strcmp(str1=str2，输出0，大于输出正数，小于输出
	//											//负数

	//	{
	//		printf("登陆成功\n");
	//		break;

	//	}
	//	else { printf("密码错误\n"); }
	//}
	//if (i == 3)
	//{
	//	printf("三次密码均错误，退出程序\n");
	//}



	//猜数字游戏：1自动产生1~100的随机数，然后猜数字
                //2猜对：游戏结束
				//	猜错会告诉你大了还是小了。
				//3游戏会一直玩，除非退出游戏。





int input = 0;
do {
	menu();//打印菜单
	printf("请选择：>");
	scanf("%d", &input);
	switch (input)
	{
	case 1: printf("猜数字");
		break;
	case 0:printf("退出游戏");
		break;
	default:
		printf("选择错误，重新选择\n");
		break;


	}




} while(input);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


		return 0;
		}



