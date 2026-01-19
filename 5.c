main ()
{
     int a=9, b;

     printf("원하는 단을 입력하시오 : \n");
     scanf("%d", &b);     //사용자가 입력한 값을 받음

     while (a>0)     //반복문
     {
          printf("%d * %d = %d\n", b, a, b*a);
          a --;     //a를 1씩 감소
     }
}
