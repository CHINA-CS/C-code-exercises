#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int* p;
//	//p�Ǿֲ���ָ��������ֲ���������ʼ��Ĭ��Ϊ���ֵ
//	*p = 20;
//	//�����һ�����˶����20
//	//�Ƿ������ڴ�
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//		float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}



//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//pa��ָ�������һ��ָ��
//	int** ppa = &pa;
//	//ppa���Ƕ���ָ�����
//	//paҲ�Ǳ�����&paȡ��pa���ڴ�֮�е���ʼ��ַ
//	return 0;
//}


//int main()
//{
//	int arr[10];//�������� - ������͵�����
//	char ch[5];//�ַ����� - ��ŵ����ַ�
//	int* parr[5];//����ָ�������
//	return 0;
//}

struct B
{
	char name[10];
	int age;
};
struct Stu //����
{
	struct B sb;
	//�ṹ��ĳ�Ա��������һ���ṹ��
	char name[20];
	int age;
};

void print1(struct Stu s)
{
	printf("%s %d %s %d", s.sb.name, s.sb.age, s.name, s.age);
}
void print2(struct Stu* ps)
{
	printf("%s %d %s %d\n", (*ps).sb.name, (*ps).sb.age, (*ps).name, (*ps).age);
	printf("%s %d %s %d\n", ps->sb.name, ps->sb.age,ps->name,ps->age);
}
int main()
{
	struct Stu s = { {"����",19},"�߷�",18};//����

	// . ->
	printf("%s %d %s %d", s.sb.name, s.sb.age, s.name, s.age);

	print1(s);//��ֵ����
	print2(&s);//��ַ����

	return 0;
}