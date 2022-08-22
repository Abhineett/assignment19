 #include<stdio.h>
 void swap(int *s,int *y);

 void main()
 {
     int a,b;
     printf("enter value a=");
     scanf("%d",&a);
     printf("enter the second value b=");
     scanf("%d",&b);
     swap(&a,&b);
     printf("a=%d b=%d",a,b);


 }
 void swap(int *s,int *y)
 {
     int p;
      p=*s;
     *s=*y;
     *y=p;



 }
