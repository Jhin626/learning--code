#include <stdio.h>
// int main()      
//{
//
//    printf( "hellow word\n\a");//\n���У�\a����
//                              //һ�����̿����ж��.c�ļ������Ƕ��.c�ļ�ֻ����һ��main
//      printf(" % d\n", 100); //%d:���ʮ�����������ݵ�1ʵ�ʳ��������%c���ַ���ʽ�������
//                              // %f����С����ʽ�������˫���ȶ������������6λС��
// 
//      printf(" % d\n, 100"); printf("\n%d");
//      return 0;
//    }

int main() {
    printf("%d\n", sizeof(char));      //1    sizeof:�������ͻ������ռ�ռ�Ĵ�С���ֽ�
    printf("%d\n", sizeof(short));     //2   ��λ��bit
    printf("%d\n", sizeof(long ));     //4   �ֽڣ�byte =8bit��kb=1024byte��
    printf("%d\n", sizeof(long long)); //8         mb=1024kb��gb��tb��pb��
    printf("%d\n", sizeof(float));     //4
    printf("%d\n", sizeof(double));    //8
    printf("%d\n", sizeof(int));       //4



    return 0;

}

      



