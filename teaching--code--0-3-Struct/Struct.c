#include <stdio.h>

struct Stu //结构体可以让c语言创建新类型
{

	char name[20];
	int age;
	double score;
};



int main()
{
	struct Stu s = { "张三",20,85.5 };//结构体创建和初始化

	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
	 
	struct Stu * ps = &s;
	printf("2:%s %d %lf \n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf", ps->name, ps->age, ps->score);





	return 0;
}