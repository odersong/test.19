#include<stdio.h>
//һά���鴫��
//void test(int arr[])//���Դ�������д������Ҳ����д��������ñ�д��
//{}
//void test1(int arr[5])
//{}
//void test2(int* arr)//��ָ����գ�arrָ��������׵�ַ
//{}
//void test3(int* p)//��ָ����գ�pָ��������׵�ַ
//{}
//int main()
//{
//	int arr[5];
//	test(arr);
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	return 0;
//}


//��ά���鴫��
//void test(int arr[3][5])//����ֱ�Ӵ������������
//{}
//void test1(int arr[][5])//Ҳ���������������ұ߲���ʡ��
//{}
////void test2(int arr[3][])//�����ұ�ʡ����
////{}
////void test3(int arr[][])//�����ұ�ʡ����
////{}
////void test4(int* arr)//����,��ָ����գ�����һ��ָ��ֻ�������е��׵�ַ,�ǵ�һ�еĵ�ַ�����ǵ�һ����һ��һά����,һά���鲻����int* arr��,
////{}//��Ϊint* arr������������͵�ַ��
////void test5(int **arr)//���Ҳ�Ǵ���ģ���Ϊ����ָ�����������һ��ָ���ַ��
////{}
////void test6(int (*arr)[5])
////{}
//int main()
//{
//	int arr[3][5];
//	test(arr);
//	test1(arr);
//	//test2(arr);
//	//test3(arr);
//	//test4(arr);
//	//test5(arr);
//	//test6(arr);//���Ƕ�ά���飬����ȥ���к���
//	return 0;
//}


//�ܽ�һ�£�int* p��p��һ��ָ�룬ָ��int�ĵ�ַ
//        : int (*p)[]��p�Ǵ�������ά������һά����ĵ�ַ�����Ϊ��*p˵��p��ָ�룬pָ��������Ԫ�ض���int�������Ԫ����һ������
//        : ����p��һ������ָ�룬ָ���˴�������һά����



//һ��ָ�봫��
//void test(int* p,int sz)//p�Ǵ���ַ��p��������int  ,zs�Ǵ�ֵ��sz��������int
//{}
//int main()
//{
//	int arr[] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	test(p,sz);
//	return 0;
//}


//����ָ�봫��
//void test(int** a)
//{}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;//�ڶ���*˵��pp��һ��ָ�룬��ĵ�ַ��һ��int*���ͣ�˵��pp��һ������ָ��
//	int* arr[10];
//	test(pp);//��������Ƕ���ָ��ĵ�ַ��������һ��ָ��p��&p�ĵ�ַ     ��p��һ��ָ��ĵ�ַ��&p�Ƕ���ָ��ĵ�ַ
//	test(&p);//��������Ƕ���ָ��ĵ�ַ��������һ��ָ��p��&p�ĵ�ַ 
//	test(arr);//arr����Ԫ�ص�ַ�������arr��ʾΪ&arr��arr��Ԫ�ض�������ָ�룬��ָ��ĵ�ַ����ȥ��Ҫ�ö���ָ�����
//	return 0;
//}

//void test(int (*p)[4])
//{
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	test(arr);
//	return 0;
//}

//void test(int* arr)
//{
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}


//void test(int* a)
//{
//	printf("%p\n", a);//����0
//	printf("%p\n", a+1);//����4
//	printf("%d\n", sizeof(a));//8�����ָ��Ĵ�С
//}
//int main()
//{
//	int a = 10;
//	test(&a);
//	return 0;	
//}


//����ָ�룺��ָ�������ָ��
//����ָ�룺��ָ������ָ��  ����ź�����ַ��һ��ָ��

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", Add(a, b));
//	int(*p)(int, int) = Add;//Add��&Add����ʾ�����ĵ�ַ�������ĵ�ַֻ��һ����û���׵�ַʲô��
//	//int* p(int , int ) = Add;//����Ǵ���ģ���Ϊp�Ⱥͣ�����ϣ�����˺�����������������int*
//	printf("%p\n", p);
//	printf("%p\n", Add);
//	printf("%d\n", (*p)(3, 5));
//	printf("%d\n", (p)(3,5));//*�ǿ��п��޵ģ��Ǹ����裬�Աȣ�Add��3��4������p��3��4����һ����
//	return 0;
//}
//p���Ǹ������ĵ�ַ��*p���ҵ��Ǹ�����
//int(*p)(int, int) = Add;//p��Add�ĵ�ַ������������int��Ԫ��

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	char arr[] = "abcd";
//	print(arr);
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = print;//print�Ǻ�����//*p˵��p��һ��ָ�룬ָ����һ�������������Ĳ���������char*�������ķ���������void
//	(*p)("abcd");//�൱�ڰ�abcd������print��//��*p�ҵ��������ڴ���abcd
//	return 0;
//}


//����ָ��ļ�д�棬�������
//typedef-����������һ�����ڼ�����������ȷ��������
//void(*    signal(int,void(*)(int))      )(int);ԭ��:signal�Ǻ�������(int,void(*)(int))�Ǻ����Ĳ���signal�ķ���������void(*  )(int)�Ǻ���ָ��
//typedef void(* Pfun_t)(int)   ;Pfun_t���¶���ĺ���ָ������֣���typedeef֮�󣬰�Pfun_t����*��������
//Pfun_t signal(int,Pfun_t)//��Ȼд�������ˣ�����ǰ�������typedef����


//typedef unsigned int uint;������ǰ�unsigned int����������ֽ�uint


//����ָ������飺��ź���ָ�������
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sum(int x, int y)
//{
//	return x * y;
//}
//int Min(int x, int y)
//{
//	return x - y;
//}
//int Chu(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//int(*p)(int, int);
//	int(*p[4])(int, int) = { Add,Sum,Min,Chu };//��������Ǵ�ź���ָ�������
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d\n", p[i](3, 4));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//char* my_strcpy(char* dest,const char* src)
//1. дһ������ָ��pf���ܹ�ָ��my_strcpy
//2. дһ������ָ������pfArr���ܹ�����ĸ�my_strcpy�����ĵ�ַ
// 1 .
//char* my_strcpy(char* dest, const char* src);
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//}

//2 .
//char* (*pfArr[4])(char*, const char*);



//����ָ������-Ҳ��-ת�Ʊ�
//��дһ���Ӽ��˳��ĺ����������д��ת�Ʊ�

//void menu()
//{
//	printf("    1.Add     2.Sub     \n");
//	printf("    3.Mul     4.Div     \n");
//	printf("          0.exit        \n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("          ������:       \n");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��������������\n");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("��������������\n");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("��������������\n");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Mul (x, y));
//			break;
//		case 4:
//			printf("��������������\n");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//���溯��ָ��������ʽ�����׼�������������
//void menu()
//{
//	printf("    1.Add     2.Sub     \n");
//	printf("    3.Mul     4.Div     \n");
//	printf("          0.exit        \n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int(*Parr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do {
//		menu();
//		printf("��ѡ��\n");
//		scanf_s("%d", &input);
//		if (input > 0 && input <= 5)
//		{
//			printf("��������������:");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Parr[input](x, y));
//		}
//		else if (input == 0)
//			printf("�˳�\n");
//		else
//		{
//			printf("�������\n");
//		}
//	} while (input);
//}


//�ص�����:�ص���������һ��ͨ������ָ����õĺ���
//void Calc(int(*p)(int, int))//ָ��pָ����-����ָ��
//{
//	int x = 0;
//	int y = 0;
//	printf("��������������:");
//	scanf_s("%d%d", &x, &y);
//	printf("%d\n", p(x, y));//p��x��y�����ú���
//}
//void menu()
//{
//	printf("    1.Add     2.Sub     \n");
//	printf("    3.Mul     4.Div     \n");
//	printf("          0.exit        \n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("�����룺");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//}


//ָ����ָ�������ָ�룺ָ����ָ�������ָ����һ��ָ�룬ָ��ָ��һ�����飬�����Ԫ�ض��Ǻ���ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//	int (*p[1])(int, int) = { Add };
//	int(*(*pp)[4])(int ,int) = &p;//pp��һ������ָ�룬ָ��ָ����������ĸ�Ԫ�أ�ÿ��Ԫ�����Ͷ��Ǻ���ָ�롣������int(*)(int ,int)
//	return 0;
//}


//�ص��������Ѻ�����ַ��Ϊ�������ݸ���һ���������Ǻ���ָ�룩�������ָ�뱻������������ָ��ĺ���ʱ������ǻص�������
//�ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڸ��¼�������������Ӧ��
//void print(char* str)
//{
//	printf("hehe:%s\n",str);
//}
//test(void (*p)(char*))//����Ǻ���ָ�룬ָ����print
//{
//	printf("test\n");
//	p("abcd");//�����ͨ������ָ����ú������ǻص�����
//}
//int main()
//{
//	test(print);
//
//	return 0;
//}