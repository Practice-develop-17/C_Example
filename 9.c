main ()
{
     int a,b;

     printf("정수 입력 : ");
     scanf("%d", &a);
     printf("정수 입력 : ");
     scanf("%d", &b);

     if (a>b)     //if~else 구문
     {
          printf("%d > %d\n", a, b);
     }
     else if (a == b)
     {
          printf("%d == %d\n", a, b);
     }
     else
     {
          printf("%d < %d\n", a, b);
     }
}
