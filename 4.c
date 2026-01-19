main ()
{
     int n=0, sum=0;

     while (n<10)     //반복문
     {
          n += 1;     //n을 1씩 증가
          sum += n;     //합 구하기
     }
     printf(" 1~%d까지의 합 : %d \n", n, sum);
}
