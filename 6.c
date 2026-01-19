main ()
{
     int a=2, sum=0;

     while (a<=500)
     {
          sum += a;     //sum = sum + a 와 같은 문장
          a += 2;     //a를 2씩 증가
     }
     printf("1~500까지 짝수의 합 : %d", sum);
}
