#include <stdio.h>

struct Stu //�ṹ�������c���Դ���������
{

	char name[20];
	int age;
	double score;
};



int main()
{
	struct Stu s = { "����",20,85.5 };//�ṹ�崴���ͳ�ʼ��

	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
	 
	struct Stu * ps = &s;
	printf("2:%s %d %lf \n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf", ps->name, ps->age, ps->score);





	return 0;
}