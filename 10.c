#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
     int i;
     srand((unsigned)time(NULL));      //랜덤함수
     for (i = 0; i < 10; 1++)     //for구문
     {
          printf("%d ", rand() % 100);
     }
     printf("\n");
}
