#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����ȫ�ֱ���a
extern a;
//ö�ٳ���
enum sex
{
	male,
	famale,
	secret
};

int main()
{
	//�ֲ�����������
	// ���÷�Χ���ֲ����������ľֲ���Χ
	/*printf("hehe\n");
	{
		int e = 10;
		printf("%d\n", e);
	}
	printf("%d\n", a);*/

	//����
	//���泣��
	/*3.14;
	'i';
	"gdosno";*/
	//const����
	//const int b = 10;
	//b=20;error
	//#define����ĳ���
    //#define c=100;
	
	//ö�ٳ���
	/*enum sex d = male;
	printf("%d\n", male);
	printf("%d\n", famale);
	printf("%d\n", secret);*/
	
	//�ַ�����\0��Ϊ�ַ����Ľ�����־
	/*char arr1[] = { "abc" };
	char arr2[] = { 'a','b','c','\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);*/

	//�ַ���ת���ַ���С
	/*printf("\a");
	printf("%d\n", strlen("c:\test\328\test\.c"));
	printf("%c\n", '\130');*/

	//�������ʹ���ģ�����//ע�����ݣ�
	// //��C++��ע�ͷ��/**/��C���Ե�ע�ͷ��
	// C���Ե�ע�ͷ��֧��Ƕ��ע��


	//ѡ�����
	/*int input = 0;
printf("�ú�ѧϰ\n");
printf("��Ҫ�ú�ѧϰ��(0/1)\n");
scanf("%d\n", &input);
if (input == 1)
{
	printf("��OFFER\n");
}
else
{
	printf("������\n");
}*/

	//ѭ�����
	int line = 0;
	while (line < 100)
	{
		printf("д����:%d\n", line);
		line++;
	}
	if (line == 100)
	{
		printf("��offer\n");
	}

	
		

	return 0;

}