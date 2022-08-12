////////#include<stdio.h>
////////
////////
////////int main()
////////{
////////	static int a[] = { 1,2,3,4,5 };
////////	int x, y, * p;
////////	p = &a[0];
////////	printf("%d\n", *p);
////////	x = *(p + 2);
////////	printf("%d\n", *p);
////////	y = *p++;
////////	printf("y=%d\n", y);
////////	printf("%d\n", *p);
////////	printf("%d %d %d\n", *p, x, y);
////////	printf("%d\n", *p);
////////	printf("%d\n", *p);
////////
////////
////////
////////	return 0;
////////}
//////
//////
//////#include<stdio.h>
//////
//////void swap(int* a, int* b)
//////{
//////	int* t;
//////	t = a;
//////	a = b;
//////	b = t;
//////	printf("%4d%4d\n", *a, *b);
//////}
//////
//////int main()
//////{
//////	int x = 3, y = 5, * p = &x, * q = &y;
//////	swap(p, q);
//////	printf("%4d%4d%4d%4d\n", x, y, *p, *q);
//////}
//////
//////
//////
//////
//////
////
////
////#include<stdio.h>
////
////int main()
////{
////	int x, y;
////	x = 2;
////	y = 0;
////	
////	if (x >= 0)
////		if (x > 0)y = 1; 
////		else y = -1;
////
////	printf("%d", y);
////
////	return 0;
////}
//
//
//
//#include<stdio.h>
//
//
//int main()
//{
//	int _123;
//	int scanf;
//	int Struct;
//	//int void;
//	int sin;
//	int cos;
//	int sqrt;
//	int swap();
//
//	return 0;
//}