#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//typedef�����ض���
//typedef unsigned int u_int;


//static���κ���
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//
//}
//extern int g_val;

//extern int add(int x,int y);


//#define max 1000
//#define add(x,y)((x)+(y))

struct Stu
{
	char name[20];
	int age;
	double score;//�ṹ���Ա����
};
int main()
{
	//����ʹ�÷���
	/*int sum = Add(10, 11);
	printf("%d\n", sum);*/

	//��λȡ����ʹ��
	/*int a = 0;
	printf("%d\n", ~a);*/


	//ǰ��++
	/*int a = 10;
	int b = ++a;
	printf("%d\n", b);
	printf("%d\n", a);*/

	//����++
	/*int a = 10;
	int b = a++;
	printf("%d\n", b);
	printf("%d\n", a);*/

	//��Ŀ�����
	/*int a = 0;
	int b = 5;
	int max = 0;
	max = a > b ? a + b : b * 2 - a;
	printf("%d\n", max);*/

	//������������ö��Ÿ����ı��ʽ�����������Դ˼��㣬
	// �����������ʽ�����һ��������Ǳ��ʽ�Ľ��
	/*int a = 2;
	int b = 1;
	int c = 0;
	int d = (a = b + 1, b = c + 5, c = a - 1);
	printf("%d\n", d);*/

	/*register int num = 100;*///����num��ֵ������ڼĴ���֮��

	// static���κ���
	/*int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}*/

	/*printf("%d\n", g_val);*/

	/*int a = 10;
	int b = 20;
	int c = add(a, b);
	printf("%d\n", c);*/


	//define��һ��Ԥ����ָ��
	//define�������

	/*printf("%d\n", max);
	printf("%d\n", 3*add(2, 3));*/


	//ָ��
	//int a = 10;
	//printf("%p\n", &a);//%p��ר��������ӡ��ַ��
	//int* pa = &a;//pa��������ŵ�ַ�ģ���C����֮��pa����ָ�����
	// * ˵��pa��ָ�����
	// int˵��paִ�ж�����int���͵�


	/*printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(double*));*/

	struct Stu s = { "����",20,98.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1: %s %d %lf ", s.name, s.age, s.score);//�ṹ���������Ա����
	struct Stu* ps = &s;
	printf("2: %s %d %lf ", (*ps).name, (*ps).age, (*ps).score);
	printf("3: %s %d %lf ", ps->name, ps->age, ps->score);
	return 0;
}