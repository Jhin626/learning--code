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


	return 0;
}

































