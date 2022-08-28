#include <stdio.h>

int main() {

	//int i = 0;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		//break;//while 循环中，break用于永久的终止循环。
	//continue;//跳过本次循环continue后面的代码，
	//	printf("%d", i);

	//i++; }


	//int ch = getchar();
	////   printf("%c\n", ch);
	//putchar(ch);


	int ch = 0;
	while ((ch = getchar()) != EOF)//getchar为：CTRL+Z时，读取结束。
	{
		putchar(ch);
	}


	
	
	////第二部分
	//char password[20] = { 0 };
	//printf("请输入密码:>");
	//scanf_s("%s", password);//为什么这里没有取地址？字符和数组不用加&

	//printf("请确认密码(Y/N):>");
	//
	//     //getchar();//处理\n//清理缓存区
	//int tmp = 0;
	//while ((tmp = getcahr()) != '\n')//清理缓冲区中的多个字符。
	//{


	//	;
	//}



	//int ch = getchar();
	//if (ch == 'Y')
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("确认失败\n");
	//}


	int ch = 0;
	while ((ch = getchar()) != EOF);
	{
		if (ch < '0' || ch>'9')//0~9之外的ASCII码都不是数字
			continue;
		else 

		putchar(ch);

	}

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

































