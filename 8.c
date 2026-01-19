main ()
{
     int n, val, a=2;

     while (a<=9)     //반복문
     {
     n=0;
          while (n<9)      //중첩반복문
          {
               n+=1;     //변수 설정
               val=a*n;
               printf("%d*%d = #d \n", a, n, val);
          }
          a ++;
     }
}
