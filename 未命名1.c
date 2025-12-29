#include <stdio.h>
int main()
{
	printf("hello world\n");
	printf("end world\n");
//	printf("project1_in and out\n");
//	int price = 0;
//	printf("输入金额：\n");
//	scanf("%d",&price);
//	int change = 100 - price;
//	printf("找零:%d \n",change);
//	printf("同时给多个变量赋值_常量");
//	const int a0 =200;
//	int a1 = 0,a2 = 0;
//	printf("%d %d %d \n",a1,a2,a0);
//	scanf("%d %d",&a1,&a2);
//	printf("%d %d \n",a1,a2);
//	printf("a2-a1=%d\n",a2-a1);
    
//  double a;
//  double b;
//  printf("分别输入英尺和英寸：\n");
//  scanf("%lf %lf",&a,&b);
//  printf("换算结果：%f \n",(a+b/12)*0.3048);
    
//    int q1=1,q2=2;
//    printf("交换两个变量的数值,%d %d \n",q1,q2);
//    int t0 = q1;
//    q1 = q2;
//    q2 = t0;
//    printf("%d %d",q1,q2);
    int grade = 0;
    printf("输入成绩");scanf("%d",&grade);
    int grade2 = grade/=10;
    switch(grade2){
    	case 9:
    		printf("A");
    		break;
    	case 8:
    		printf("B");
    		break;
    	case 1:
    		if (grade > 90){
    			printf("S");
    			break;
			}else {
			printf("N");
			break;
		    }
		case 10:
			printf("S");
			break;
		default:
			printf("N");
			break;
	}
	return 0;
}
