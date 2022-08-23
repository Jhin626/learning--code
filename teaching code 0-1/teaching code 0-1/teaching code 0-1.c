#define  _CRT_SECURE_NO_WARNINGS
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


//#include <string.h>;
//int main()
//{
//	"abcd";//字符串：就是一串字符，用双引号括起来的一串字符
//		  //字符串的结束标志是\0，的转义字符，计算时字符串长度时\0不计入字符串内容，只是标志。
//
//
//	char arr []= "abcd";//监视时会显示5个字符，原因是结尾隐藏了\0
//	char arr1[] = "abc";//内存中：abc\0
//	char arr2[] = { 'a','b','c' };//内存中：abc,因为没有\0，所以打印时会乱码，所以应该再加个\0元素。
//	printf("%s\n",arr1 );
//	printf("%s\n", arr2);
//
//  int len =  	strlen("abc"); //求字符串长度： string length	
//							   //显示 “strlen”未定义”，是没有引用头文件：#include <string.h>;
//  printf("%d", len);
//		return 0;
//}


//int main()//转义字符：
//{
//	printf( "c:\test.c\n");//发现无法正常打印,因为\t构成了转义字符\t
//
//	printf("c:\\test.c\n");
//
//
//	printf("%c\n",'\130');//打印出X，X的ASCII码值是88，130是八进制，转换成十进制为88
//	printf("%c\n", '\101');//     A         \ddd,ddd是八进制数字
//	printf("%c\n", '\x30');//     0         \xdd，dd是十六进制数字
//	
//	
//	//注释方法1：//
//	      // 2: /*   语句   * /,缺点：不支持嵌套注释
//	return 0;
//}








//int main()
//{  
//	////选择语句
//	//int input = 0;
//	//printf("要好好学习吗？(1/0):");
//	//scanf("%d",&input);
//	//if (input == 1)
//	//	printf("好offer");
//	//else printf("卖红薯");
//
//	////循环语句
//	//int line = 0;
//	//while (line < 30000)
//	//{
//	//	printf("写代码:%d\n",line);
//	//	line++;
//
//
//	//}
//	//if ( line == 30000)
//	//{
//	//	printf("好offer");
//	//}
//
//
//	//函数
//	int num1 = 0; int num2 = 0;
//	
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	int sum = add(num1, num2);
//
//
//	printf("%d\n", sum);
//	
//
//
//
//
//
//
//
//	return 0;
//}

int  add(int x, int y) {

	int z = 0;
	z = x + y;
	return z;//返回类型为整形

}


//int main()//数组
//          //数组使用下标访问
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char arr2 [5] = { 'a','b','c'};//其他默认为0
//	int i = 0;
//	while(i<10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//
//	}
//
//	//算术操作符：+，-，*，/,%,
//	//移位操作符：>>,<<,移动的是二进制位
//	int a = 2; int b = a <<1 ;
//	printf("%d\n",b);
//	//位操作符：按位与&，按位或|，按位异或^，
//	//赋值操作符：=，+=，-=，/=,&=,^=,|=,>>=,<<=,
//	//  a=a+3 为 a+=3,其余类似
//
//	//单目操作符：！逻辑取反，-负值，+正值，&取地址，sizeof,~对一个数的二进制按位取反，++前置后置++
//	//           --,
//	int A = 0;
//	printf("%d\n", ~A);//二进制位按位取反，整数在内存中存储的是补码
//
//	//int p = 10; int q = ++p;//前置++，先++后使用，先p＋1，再赋值给q
//	//printf("%d\n", q);
//	//printf("%d\n", p);//此时p=11,q=11,
//
//	int p = 10; int q = p++;//后置++，先使用后++，先赋值给q，再加1.
//	printf("%d\n", q);
//	printf("%d\n", p);//此时p=11,q=10,
//
//
//	//关系操作符，>,<,>=,!=,
//
//	//逻辑操作符&&逻辑与，||逻辑或，
//
//	//条件操作符(三目操作符)： 表达式1 ？，表达式2 ：表达式 3，
//	                       //：1成立，2计算，整个表达式的结构是:2的结果，
//	                       //1不成立，3计算，整个表达式的结构是:3的结果。
//
//	int j = 0; int k = 3; int max = 0;
//	if (j > k)
//		max = j;
//	else
//		max = k;
//
//	max = j > k ? j : k;//和上面if语句功能相同。
//
//	printf("%d\n", max);
//
//	//逗号表达式：逗号隔开的一串表达式,整个结果是最后一个表达式的结果。
//
//	(2, 3 + 4, 5);
//
//	//下标引用，函数调用和结构成员[],(),.,->，
//
//
//
//	return 0;
//}

//int main()//常见关键字
//{//return 0,int,等，c语言自带不能自己创建
//	//2,关键字不能做变量名。3，
//
//	//auto 自动的，每个局部变量修饰，自动创建自动销毁
//	//break  打破循环
//	//case ，char，conset,continue,default,do,double,else,enum,extern,float,for,goto,if,long,register寄存器关键字,
//	register int num = 100;//建议num的值放到寄存器中(大量频繁)。
//	//return,short,signed,sizeof,static静态的,struct,switch,typedef类型重定义,union联合体,unsigned,void无，空，volatile，
//
//
//	typedef unsigned int u_int;
//	unsigned 	int e = 100;
//	u_int e = 100;//类型重命名
//
//	//static：1，修饰局部变量：改变了局部变量生命周期（本质上改变了存储类类型）
//	        //2，修饰全局变量:使得全局变量只能在自己所在源文件内部可以使用。
//	        //3, 修饰函数：和修饰全局变量时类似。
//
//
//
//
//
//
//
//	return 0;
//}


//#define add (X,Y) ((X)+(Y))
//
//int main()//常量和宏
//{  
//
//	printf("%d\n", add(2, 3));
//
//
//
//
//
//	return 0;
}






