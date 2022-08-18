#include <stdio.h>
// int main()      
//{
//
//    printf( "hellow word\n\a");//\n换行，\a发声
//                              //一个工程可以有多个.c文件，但是多个.c文件只能有一个main
//      printf(" % d\n", 100); //%d:输出十进制整形数据的1实际长度输出，%c以字符形式是输出，
//                              // %f是以小数形式输出单、双精度度数，隐含输出6位小数
// 
//      printf(" % d\n, 100"); printf("\n%d");
//      return 0;
//    }

int main() {
    printf("%d\n", sizeof(char));      //1    sizeof:计算类型或变量所占空间的大小，字节
    printf("%d\n", sizeof(short));     //2   单位：bit
    printf("%d\n", sizeof(long ));     //4   字节：byte =8bit，kb=1024byte，
    printf("%d\n", sizeof(long long)); //8         mb=1024kb，gb，tb，pb，
    printf("%d\n", sizeof(float));     //4
    printf("%d\n", sizeof(double));    //8
    printf("%d\n", sizeof(int));       //4



    return 0;

}

      



