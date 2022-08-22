#include <stdio.h>
//
//int main() //作用域(scope:一段代码中用到的名字不总是有效/有用的，而限定这个名字的可用性代码就是这个名字的作用域)
//           //局部变量作用域是其所在的局部范围，全局变量作用域是整个工程。跨文件使用时声明一下变量 ：extern int xxx；
//           // 和生命周期：变量的创建到变量的销毁之间的一个时间段。全局变量的生命周期既是程序的生命周期。
//{
//	int a = 10;
//	printf("a=%d\n",a);
//
//
//
//
//	
//
//	return 0;
//}


//extern int g_val;    //全局变量引用例子
//int main()
//{
//
//
//	printf("%d\n", g_val);
//
//
//	return 0;
//}

#define MAX 10000	
enum sex {//这种枚举类型的变量未来可能取值只能是以下三种。
		MALE,
	    FEMALE,
		SECRECT,
	};

//int main()
//{//常量：1。字面常量：“1，2，ab”
////2.const 修饰的常变量
//	int num = 10;  //const num int =10;此时num值不能改变，称作常变量。
//	num = 20;
//	printf("%d\n", num);
////3.#define 定义的标识符常量
//	int n = MAX;
//	printf("n=%d\n",n);  //此时MAX的值无法改变
////4.枚举常量：可以一一列举的
//	enum sex 张三 = MALE;  
//
//	printf("%d\n", MALE);
//	printf("%d\n",FEMALE );
//	printf("%d\n",SECRECT );  //枚举常量其值是从0开始的
//	return 0;
//}


#include <string.h>;
int main()
{
	"abcd";//字符串：就是一串字符，用双引号括起来的一串字符
		  //字符串的结束标志是\0，的转义字符，计算时字符串长度时\0不计入字符串内容，只是标志。


	char arr []= "abcd";//监视时会显示5个字符，原因是结尾隐藏了\0
	char arr1[] = "abc";//内存中：abc\0
	char arr2[] = { 'a','b','c' };//内存中：abc,因为没有\0，所以打印时会乱码，所以应该再加个\0元素。
	printf("%s\n",arr1 );
	printf("%s\n", arr2);

  int len =  	strlen("abc"); //求字符串长度： string length	
							   //显示 “strlen”未定义”，是没有引用头文件：#include <string.h>;
  printf("%d", len);
		return 0;
}

