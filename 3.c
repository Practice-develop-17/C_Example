main ()
{
     int n=1, a=1;

     while (n<10)     // 반복문
     {
          a = 2*a;     // 거듭제곱 만들기
          printf("2의 %d승은 %d\n", n, a);
          n += 1;     // 1씩 증가시키기
     }
}
