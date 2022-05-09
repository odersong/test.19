#include<stdio.h>
//一维数组传参
//void test(int arr[])//可以传过来不写个数，也可以写个数，最好别写错
//{}
//void test1(int arr[5])
//{}
//void test2(int* arr)//用指针接收，arr指向数组的首地址
//{}
//void test3(int* p)//用指针接收，p指向数组的首地址
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


//二维数组传参
//void test(int arr[3][5])//可以直接传，用数组接收
//{}
//void test1(int arr[][5])//也可以这样，但是右边不能省咯
//{}
////void test2(int arr[3][])//错误，右边省咯了
////{}
////void test3(int arr[][])//错误，右边省咯了
////{}
////void test4(int* arr)//错误,用指针接收，但是一级指针只接收了行的首地址,是第一行的地址，但是第一行是一个一维数组,一维数组不能在int* arr里,
////{}//因为int* arr是用来存放整型地址的
////void test5(int **arr)//这个也是错误的，因为二级指针是用来存放一级指针地址的
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
//	//test6(arr);//这是二维数组，传过去是行和列
//	return 0;
//}


//总结一下：int* p的p是一个指针，指向int的地址
//        : int (*p)[]的p是传上来二维数组中一维数组的地址，理解为：*p说明p是指针，p指向的是五个元素都是int，这五个元素是一个数组
//        : 所以p是一个数组指针，指向了传上来的一维数组



//一级指针传参
//void test(int* p,int sz)//p是传地址，p的类型是int  ,zs是传值，sz的类型是int
//{}
//int main()
//{
//	int arr[] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	test(p,sz);
//	return 0;
//}


//二级指针传参
//void test(int** a)
//{}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;//第二个*说明pp是一个指针，存的地址是一个int*类型，说明pp是一个二级指针
//	int* arr[10];
//	test(pp);//这个传的是二级指针的地址，传的是一级指针p的&p的地址     ，p是一级指针的地址，&p是二级指针的地址
//	test(&p);//这个传的是二级指针的地址，传的是一级指针p的&p的地址 
//	test(arr);//arr是首元素地址，这里的arr表示为&arr，arr的元素都是整型指针，把指针的地址传过去，要用二级指针接收
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
//	printf("%p\n", a);//若是0
//	printf("%p\n", a+1);//则是4
//	printf("%d\n", sizeof(a));//8这个是指针的大小
//}
//int main()
//{
//	int a = 10;
//	test(&a);
//	return 0;	
//}


//数组指针：是指向数组的指针
//函数指针：是指向函数的指针  ：存放函数地址的一个指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", Add(a, b));
//	int(*p)(int, int) = Add;//Add和&Add都表示函数的地址，函数的地址只有一个，没有首地址什么的
//	//int* p(int , int ) = Add;//这个是错误的，因为p先和（）组合，变成了函数名，他的类型是int*
//	printf("%p\n", p);
//	printf("%p\n", Add);
//	printf("%d\n", (*p)(3, 5));
//	printf("%d\n", (p)(3,5));//*是可有可无的，是个摆设，对比：Add（3，4）；和p（3，4）是一样的
//	return 0;
//}
//p是那个函数的地址，*p是找到那个函数
//int(*p)(int, int) = Add;//p是Add的地址，包含了两个int的元素

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
//	void(*p)(char*) = print;//print是函数名//*p说明p是一个指针，指向了一个函数，函数的参数类型是char*，函数的返回类型是void
//	(*p)("abcd");//相当于把abcd放在了print里//用*p找到函数，在传参abcd
//	return 0;
//}


//函数指针的简写版，更好理解
//typedef-给变量定义一个易于记忆且意义明确的新名字
//void(*    signal(int,void(*)(int))      )(int);原版:signal是函数名，(int,void(*)(int))是函数的参数signal的返回类型是void(*  )(int)是函数指针
//typedef void(* Pfun_t)(int)   ;Pfun_t是新定义的函数指针的名字，用typedeef之后，把Pfun_t放在*的括号里
//Pfun_t signal(int,Pfun_t)//虽然写起来简单了，但是前面必须用typedef定义


//typedef unsigned int uint;这个就是把unsigned int定义给新名字叫uint


//函数指针的数组：存放函数指针的数组
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
//	int(*p[4])(int, int) = { Add,Sum,Min,Chu };//这个数组是存放函数指针的数组
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
//1. 写一个函数指针pf，能够指向my_strcpy
//2. 写一个函数指针数组pfArr，能够存放四个my_strcpy函数的地址
// 1 .
//char* my_strcpy(char* dest, const char* src);
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//}

//2 .
//char* (*pfArr[4])(char*, const char*);



//函数指针数组-也叫-转移表
//先写一个加减乘除的函数体调用在写成转移表

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
//		printf("          请输入:       \n");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个参数\n");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个参数\n");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个参数\n");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Mul (x, y));
//			break;
//		case 4:
//			printf("请输入两个参数\n");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//下面函数指针数组形式更容易加入其他函数体
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
//		printf("请选择\n");
//		scanf_s("%d", &input);
//		if (input > 0 && input <= 5)
//		{
//			printf("请输入两个参数:");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Parr[input](x, y));
//		}
//		else if (input == 0)
//			printf("退出\n");
//		else
//		{
//			printf("输入错误\n");
//		}
//	} while (input);
//}


//回调函数:回调函数就是一个通过函数指针调用的函数
//void Calc(int(*p)(int, int))//指针p指向函数-函数指针
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个参数:");
//	scanf_s("%d%d", &x, &y);
//	printf("%d\n", p(x, y));//p（x，y）调用函数
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
//		printf("请输入：");
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
//			printf("退出");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//}


//指向函数指针数组的指针：指向函数指针数组的指针是一个指针，指针指向一个数组，数组的元素都是函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//	int (*p[1])(int, int) = { Add };
//	int(*(*pp)[4])(int ,int) = &p;//pp是一个数组指针，指针指向的数组有四个元素，每个元素类型都是函数指针。类型是int(*)(int ,int)
//	return 0;
//}


//回调函数：把函数地址作为参数传递给另一个函数（是函数指针），而这个指针被用来调用它所指向的函数时，这就是回调函数，
//回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于该事件或条件进行响应。
//void print(char* str)
//{
//	printf("hehe:%s\n",str);
//}
//test(void (*p)(char*))//这个是函数指针，指向函数print
//{
//	printf("test\n");
//	p("abcd");//这个是通过函数指针调用函数，是回调函数
//}
//int main()
//{
//	test(print);
//
//	return 0;
//}