#include <stdio.h>

////yi==一个内存单元是一个字节然后分配地址
//int main()
//{
//	int a = 10;
//
//	printf("%p\n", &a);//&p用来打印地址
//
//	int * pa = &a;//叫指针变量,*说明pa是指针变量，int说明pa执行的对象是int类型的
//
//	char ch = 'w';
//	char* pc = &ch;
//
//
//
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//    int *	pa = &a;
//	*pa = 20;//*：解应用操作，
//	printf("%d\n", a);//借助a的地址*pa，来改变a的值。
//
//
//
//	return 0;
//}


int main()
{
	printf("%d\n", sizeof(char*));//不管是char,int,long,大小都为8个字节。
	                              //指针有多大，取决于地址的存储有多大，  （ 32位：4，64位：8.





	return 0;
}



